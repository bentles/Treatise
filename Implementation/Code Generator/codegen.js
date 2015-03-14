#!/usr/bin/node

//convenience names
var i = 0;
var p = 1;

var getConst = "int16_t displacement = program[pc + 1];\n" +
        "int64_t const = *((int64_t*)(&program[pc + displacement]);\n";

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
            getConst + "/*<0>*/.i = /*<0>*/.i + const;\n"}]},
    { name: "sub", inputs: 2, callCondition: differentRegisters,
      instructions:[
          { name:"sub", pcChange: 1, legal:[i,i],
            template : "/*<0>*/.i = /*<0>*/.i - /*<1>*/.i;\n"}]},
    { name:"subk", inputs: 1,
      instructions:[
          { name:"subki", pcChange: 2, legal: [i],
            template:
            getConst + "/*<0>*/.i = const - /*<0>*/.i;\n"}]},
    { name: "mov", inputs:2, callCondition: differentRegisters,
      instructions: [
          { name:"movii", pcChange: 1, legal:[i,i],
            template: "/*<0>*/.i = /*<1>*/.i;\n"},
          { name:"movpp", pcChange: 1, legal:[p,p],
            template: "/*<0>*/.p = /*<1>*/.p;\n"}]},
    { name: "movk", inputs: 1,
      instructions: [
          { name:"movik", pcChange: 2, legal: [i],
            template: getConst + "/*<0>*/.i = const;\n"},
          { name: "movpN", pcChange: 1, legal: [p],
            template: "/*<0>*/.p = NULL;\n"}]}
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
                    this.code += this.changeState(call);                     
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

        changeState : function(call) {
            return ""; //TODO: create when needed
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
            var callTypes = [];
            for (var i = 0; i < call.length; i++) {
                callTypes[i] = registerTypes[call[i]];
            }
            
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

fs.writeFile('../dynamicLookup.h', '', function (err) {
    if (err)
        throw err;
    console.log('File overwritten');
    writeLookups();
});


function writeLookups() {
    lookups.forEach(function(x) {
        var y = new Generator(x, numregisters, numtypes);
        y.generate();
        fs.appendFile('../dynamicLookup.h', y.lookuptable.join([seperator = ',\n'])+',\n');
    });

}

function writeCode() {    
    lookups.forEach(function(x) {
        var y = new Generator(x, numregisters, numtypes);
        y.generate();
        fs.appendFile('../staticInstructions.h', y.code);
    });
}
    
    


