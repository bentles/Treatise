#!/usr/bin/node

//convenience values
var i = 0;
var p = 1;
var differentRegisters = function(call){return call[0] !== call[1];};

var lookups = [
    { name:"add", inputs: 2,
      instructions:[
          { name:"add", pcChange: 1, legal:[i,i],
            template : "/*<0>*/.i = /*<0>*/.i + /*<1>*/.i;\n"}]},
    
    { name:"addk", inputs: 1,
      instructions:[
          { name:"addik", pcChange: 2, legal: [i],
            template:
            this.getConst("const") + "/*<0>*/.i = /*<0>*/.i + const;\n"}]},
    
    { name: "sub", inputs: 2, callCondition: differentRegisters,
      instructions:[
          { name:"sub", pcChange: 1, legal:[i,i],
            template : "/*<0>*/.i = /*<0>*/.i - /*<1>*/.i;\n"}]},
    
    { name:"subk", inputs: 1,
      instructions:[
          { name:"subki", pcChange: 2, legal: [i],
            template:
            this.getConst("const") + "/*<0>*/.i = const - /*<0>*/.i;\n"}]},
    
    { name: "mov", inputs:2, callCondition: differentRegisters,
      instructions: [
          { name:"movii", pcChange: 1, legal:[i,i],
            template: "/*<0>*/.i = /*<1>*/.i;\n"},
          { name:"movpp", pcChange: 1, legal:[p,p],
            template: "/*<0>*/.p = /*<1>*/.p;\n"},
          { name:"movip", pcChange: 1, legal:[i,p], stateChange: p,
            template: "/*<0>*/.p = /*<1>*/.p;\n" },
          { name:"movpi", pcChange: 1, legal:[p,i], stateChange: i,
            template: "/*<0>*/.i = /*<1>*/.i;\n" }]},
    
    { name: "movk", inputs: 1, //TODO movN separate?
      instructions: [
          { name:"movik", pcChange: 2, legal: [i],
            template: this.getConst("const") + "/*<0>*/.i = const;\n"},
          { name:"movpk", pcChange: 2, legal: [p], stateChange: i,
            template: this.getConst("const") + "/*<0>*/.i = const;\n"},
          { name: "movpN", pcChange: 1, legal: [p],
            template: "/*<0>*/.p = NULL;\n"},
          { name: "moviN", pcChange: 1, legal: [i], stateChange : p,
            template: "/*<0>*/.p = NULL;\n"}]},
    
    { name: "jsw", inputs: 1, 
      instructions:[
          { name:"jsw", legal:[i],
            template :
            this.getConst("tableSize") + //get value of table size using displacement
            "if(/*<0>*/.i < 0) || /*<0>*/.i >= tableSize) {\n" +
            this.getConst("defaultJump", "tableSize + 1") +   //tableSize gets us to one more than the elements in the table then + 1 to store tableSize's displacement
            "pc += defaultJump;\n" + //not so sure on the details here but this is the gist of it
            "{\n" +
            "else {\n" +
            this.getConst("jump", "/<*0*>/.i + 1") +
            "pc += jump;\n " +//index into the table
            "}\n"
          }]},
];

var numtypes = 2;
var numregisters = 6;

//All powerful generator
function Generator(lookup, numregisters, numtypes)
{
    this.numtypes = numtypes;
    this.numregisters = numregisters;
    this.numstates = Math.pow(numtypes, numregisters);
    this.lookup = lookup;
    this.code = "";
    this.states = this.getAllStates();
    this.callables = this.getAllCallables();
    this.goto = "goto *dynOpcodes[ts + program[pc]];\n\n";
    
    var size = this.states.length * this.callables.length;
    this.lookuptable = new Array(size);

    //fill lookup table with &&error
    var k = 0;
    while (k < size) {
         this.lookuptable[k] = "&&error";
         k++;
    }
}

Generator.prototype =
    {
        generate : function() {
            var numCalls = Math.pow(this.numregisters, this.lookup.inputs); //6^2 usually
            //iterate over different instructions
            this.lookup.instructions.forEach(function(inst){
                //iterate over all possible calls
                this.callables.forEach(function(call, i) {
                    
                    //write the code:
                    //==============
                    //write out label
                    this.code += this.getLabel(inst.name, call);
                    //perform instruction for arguments
                    this.code += this.substituteIntoTemplate(call, inst.template);
                    //change state code
                    this.code += this.setTagAndChangeState(call);
                    //update pc
                    this.code += this.changePC(inst.pcChange);
                    //goto next instruction
                    this.code += this.goto;

                    //write the lookup table:
                    //======================
                    //iterate over all possible states
                    this.states.forEach(function(state, j){
                        var lookup = this.isLegal(call, state, inst);
                        if (lookup)                        
                            this.lookuptable[j * this.callables.length + i] = this.getLookupAddress(lookup, call);
                    }, this);
                    
                }, this);
                
            }, this);
        },

        getAllCallables : function()
        {
            var callables = [];
            for (var i = 0; i < Math.pow(this.numregisters, this.lookup.inputs); i++)
            {
                var call = this.getCall(i); //call[ 3, 4 ] => name3_4
                var callable = this.lookup.callCondition? this.lookup.callCondition(call): true;

                if (callable)
                    callables.push(call);                
            }
            return callables;            
        },

        getAllStates : function ()
        {
            var states = [];
            for (var i = 0; i < this.numstates; i++)
            {
                states.push(this.stateToBase(i, this.numtypes, this.numregisters));
            }
            return states;
        },

        //returns an array of which registers are being called 
        getCall: function(i)
        {
            var call = [];
            var numinputs = this.lookup.inputs;
            if (numinputs)
            {  
                call[numinputs - 1] = i % this.numregisters;
                for (var k = numinputs - 2; k >= 0; k--){
                    call[k] = Math.floor(i / Math.pow(this.numregisters, numinputs - k - 1)) % this.numregisters;
                }
            }
            return call;
        },

        getConst: function(name, offset)
        {
            var offst = offset || 1; //this is fine since 0 is not valid anyway
            var getConst = "int16_t displacement" + name +" = program[pc + "+ offst +"];\n" +
                    "int64_t " + name + " = *((int64_t*)(&program[pc + displacement" + name + "]);\n";
        },

        //TODO: Generalize this if you want more types
        //TODO: Needs to be edited to support ANSI C. The prefix 0b for binary
        //is a GNU extension
        //Apparently anything cool in C is a GNU extension
        setTagAndChangeState : function(call, inst) {
            if (inst.stateChange === undefined)
                return "";
            else
            {
                //destination address is call[0]
                var changedBitIndex = call[0];
                var maskString = ""; //not really a bitmask

                //To change state to a 1 use something like 0010
                if (inst.stateChange === 0)
                {
                    maskString = "111111";
                    maskString = "fp & 0b" + maskString.slice(0, changedBitIndex) + "0" + maskString.slice(changedBitIndex + 1);
                }
                else
                {
                    maskString = "000000";                    
                    maskString = "fp | 0b" + maskString.slice(0, changedBitIndex) + "1" + maskString.slice(changedBitIndex + 1);
                }

                //Set the Tag and edit the state
                return this.getTagSetCode(inst.stateChange) + maskString + "00000000000;\n";
            }                             
        },

        changePC : function(pcChange) {
            if (!pcChange)
                return "";
            else
                return "pc += " + pcChange + ";\n" ;
        },

        substituteIntoTemplate : function(call, template)
        {
            var subbedString = template;
            for (var i = 0; i < call.length; i++)
            {
                var token = '/*<' + i + '>*/' ;
                while (true)
                {
                    var pos = subbedString.indexOf(token);

                    if (pos < 0)
                        break;
                    else {
                        subbedString = subbedString.replace(token, "g[" + call[i] + "]");
                    }
                }
            }
            return subbedString;
        },

        getTagSetCode: function(type)
        {
            return "/*<0>*/.tag = " + type + ";\n";
        },

        getStaticInstructionName: function(name, call)
        {
            return name + "_" + call.join([seperator = '_']);
        },

        getLookupAddress: function(name, call)
        {
            return "&&" + this.getStaticInstructionName(name, call);
        },

        getLabel: function(name, call)
        {
            return this.getStaticInstructionName(name,call) + ":\n";
        },

        //returns the name of a legal instruction based on register types
        //else returns false
        isLegal: function(call, registerTypes, inst)
        {
            //call = [0,4] means the arguments refer to g[0] and g[4] 
            //callTypes is a new array of the types in those registers
            //so if g[0] holds an pointer and g[4] holds a pointer then
            //call = [0,4] => callTypes = [1,1]
            var callTypes = this.getCallTypes(call, registerTypes);
            
            var legal = inst.name;
            for (var k = 0; k < callTypes.length; k++) {
                if (callTypes[k] !== inst.legal[k])
                {
                    legal = false;
                    break;
                }
            }
            return legal;
        },

        getCallTypes: function(call, registerTypes)
        {
            var callTypes = [];
            for (var i = 0; i < call.length; i++) {
                callTypes[i] = registerTypes[call[i]];
            }
            return callTypes;
        },

        //convert state number to array of register states
        //only works for values that fit properly
        stateToBase: function(i, b, numregisters)
        {
            var baseb = [];
            for (var j = 0; j < numregisters -1; j++)
            {
                var place = Math.pow(b, numregisters-1-j);
                baseb[j] = Math.floor(i / place);
                i %= place;
            }
            baseb[numregisters-1] = i % b;          

            return baseb;
        }
    };

var fs = require('fs');
fs.writeFile('../staticInstructions.h', '', function (err) {
    if (err)
        throw err;
    console.log('File overwritten');
    writeCode();
});

fs.writeFile('../dynamicOpcodes.h', '', function (err) {
    if (err)
        throw err;
    console.log('File overwritten');
    writeLookups();
});


function writeLookups() {
    lookups.forEach(function(x) {
        var y = new Generator(x, numregisters, numtypes);
        y.generate();
        fs.appendFile('../dynamicOpcodes.h', y.lookuptable.join([seperator = ',\n'])+',\n&&error\n');
    });

}

function writeCode() {    
    lookups.forEach(function(x) {
        var y = new Generator(x, numregisters, numtypes);
        y.generate();
        fs.appendFile('../staticInstructions.h', y.code);
    });
}
    
    


