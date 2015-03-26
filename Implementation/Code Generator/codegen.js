#!/usr/bin/node

//convenience values
var i = 0;
var p = 1;
var differentRegisters = function(call){return call[0] !== call[1];};

//convenience functions
function getConst(name, offset)
{
    var offst = offset || 1; //this is fine since 0 is not valid anyway
    return "int16_t d" + name + " = program[pc + "+ offst +"];\n" +
            "int64_t " + name + " = *((int64_t*)(&program[pc + d" + name + "]));\n";
}

var lookups = [
    { name:"add", inputs: 2,
      instructions:[
          { name:"addii", pcChange: 1, legal:[i,i],
            template : "/*<0>*/.i += /*<1>*/.i;\n"}]},
    
    { name:"addk", inputs: 1,
      instructions:[
          { name:"addik", pcChange: 2, legal: [i],
            template: 
            getConst("constant") + "/*<0>*/.i += constant;\n"}]},
    
    { name: "sub", inputs: 2, callCondition: differentRegisters,
      instructions:[
          { name:"subii", pcChange: 1, legal:[i,i],
            template : "/*<0>*/.i -= /*<1>*/.i;\n"}]},
    
    { name:"ksub", inputs: 1,
      instructions:[
          { name:"subki", pcChange: 2, legal: [i],
            template:
            getConst("constant") + "/*<0>*/.i = constant - /*<0>*/.i;\n"}]},

     { name: "or", inputs: 2, callCondition: differentRegisters,
      instructions:[
          { name:"orii", pcChange: 1, legal:[i,i],
            template : "/*<0>*/.i |= /*<1>*/.i;\n"}]},
    
    { name:"ork", inputs: 1,
      instructions:[
          { name:"orki", pcChange: 2, legal: [i],
            template:
            getConst("constant") + "/*<0>*/.i |= constant\n"}]},

    
     { name: "xor", inputs: 2, callCondition: differentRegisters,
      instructions:[
          { name:"xorii", pcChange: 1, legal:[i,i],
            template : "/*<0>*/.i ^= /*<1>*/.i;\n"}]},
    
    { name: "shl", inputs: 2, callCondition: differentRegisters,
      instructions:[
          { name:"shlii", pcChange: 1, legal:[i,i],
            template : "/*<0>*/.i <<= /*<1>*/.i;\n"}]},
    
    { name:"shlk", inputs: 1,
      instructions:[
          { name:"shlik", pcChange: 2, legal: [i],
            template:
            getConst("constant") + "/*<0>*/.i <<= constant"}]},    

    { name:"kshl", inputs: 1,
      instructions:[
          { name:"shlki", pcChange: 2, legal: [i],
            template:
            getConst("constant") + "/*<0>*/.i = constant << /*<0>*/.i"}]},

    //TODO: NB must test this
    { name: "shr", inputs: 2, callCondition: differentRegisters,
      instructions:[
          { name:"shrii", pcChange: 1, legal:[i,i],
            template : "/*<0>*/.i = (uint64_t)/*<0>*/.i >> /*<1>*/.i;\n"}]},
    
    { name:"shrk", inputs: 1,
      instructions:[
          { name:"shrik", pcChange: 2, legal: [i],
            template:
            getConst("constant") + "/*<0>*/.i = (uint64_t)/*<0>*/.i >> constant;\n"}]},    

    { name:"kshr", inputs: 1,
      instructions:[
          { name:"shrki", pcChange: 2, legal: [i],
            template:
            getConst("constant") + "/*<0>*/.i = (uint64_t)constant >> /*<1>*/.i;\n"}]},

    { name: "sar", inputs: 2, callCondition: differentRegisters,
      instructions:[
          { name:"sarii", pcChange: 1, legal:[i,i],
            template : "/*<0>*/.i >>= /*<1>*/.i;\n"}]},
    
    { name:"sark", inputs: 1,
      instructions:[
          { name:"sarik", pcChange: 2, legal: [i],
            template:
            getConst("constant") + "/*<0>*/.i >>= constant"}]},    

    { name:"ksar", inputs: 1,
      instructions:[
          { name:"sarik", pcChange: 2, legal: [i],
            template:
            getConst("constant") + "/*<0>*/.i = constant >> /*<0>*/.i"}]},    
    
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
            template: getConst("constant") + "/*<0>*/.i = constant;\n"},
          { name:"movpk", pcChange: 2, legal: [p], stateChange: i,
            template: getConst("constant") + "/*<0>*/.i = constant;\n"},
          { name: "movpN", pcChange: 1, legal: [p],
            template: "/*<0>*/.p = NULL;\n"},
          { name: "moviN", pcChange: 1, legal: [i], stateChange : p,
            template: "/*<0>*/.p = NULL;\n"}]},
    
    { name: "jsw", inputs: 1, 
      instructions:[
          { name:"jsw", legal:[i],
            template :
            "int16_t tableSize = program[pc + 1];\n" +
            "if(/*<0>*/.i < 0 || /*<0>*/.i >= tableSize) {\n" +
            "int16_t defaultJump = program[pc + tableSize + 2];\n" +   //tableSize gets us to one more than the elements in the table then + 1 to store tableSize's displacement
            "pc += defaultJump;\n" + 
            "}\n" +
            "else {\n" +
            "int16_t jump = program[pc + /*<0>*/.i + 2];\n" +
            "pc += jump;\n " +//index into the table
            "}\n"
          }]},

    //TODO: check pointer eq
    { name: "cab", inputs: 2, callCondition: differentRegisters,
      instructions:[
          { name:"cabii", legal:[i,i],
            template :
            "if (/*<0>*/.i < /*<1>*/.i)\n" +
            "pc += program[pc + 1];\n" +
            "else if(/*<0>*/.i == /*<1>*/.i)\n" +
            "pc += program[pc + 2];\n" +
            "else\n" +
            "pc += program[pc + 3];\n" 
          },
          { name:"cabpp", legal:[p,p], 
            template : 
            "if (/*<0>*/.p == /*<1>*/.p)\n" +
            "pc += program[pc + 2];\n" +
            "else\n" +
            "pc += program[pc + 4];\n" },
          { name:"cabpi", pcChange: 5, legal:[p,i]},
          { name:"cabip", pcChange: 5, legal:[i,p]}]},

    
    
];

var numtypes = 2;
var numregisters = 6;

function Generator(lookups, numregisters, numtypes)
{
    this.code = "";
    this.lookuptable = [];
        
    var instGenerators = [];
    lookups.forEach(
        function(lookup){
            var instGen = new InstructionGenerator(lookup, numregisters, numtypes);
            instGenerators.push(instGen);
            instGen.generate();
            this.code += instGen.code;
            this.lookuptable = this.lookuptable.concat(instGen.lookuptable);
        }, this);    
}

Generator.prototype =
    {
        getCode: function(){
            return this.code;
        },

        getLookupTable: function(){
            return this.lookuptable.join([seperator = ',\n'])+',\n&&error\n';
        }
    };

//All powerful generator
function InstructionGenerator(lookup, numregisters, numtypes)
{
    this.goto = "goto *dynOpcodes[ts + program[pc]];\n";
    
    this.numtypes = numtypes;
    this.numregisters = numregisters;
    this.numstates = Math.pow(numtypes, numregisters);    
    this.lookup = lookup;
    
    this.constants = {};
    this.code = "";
    this.states = this.getAllStates();
    this.callables = this.getAllCallables();
    
    var size = this.states.length * this.callables.length;
    this.lookuptable = new Array(size);

    //fill lookup table with &&error
    var k = 0;
    while (k < size) {
         this.lookuptable[k] = "&&error";
         k++;
    }
}

InstructionGenerator.prototype =
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
                    this.code += "{\n";
                    //perform instruction for arguments
                    this.code += this.substituteIntoTemplate(call, inst.template);
                    //change state and Tag
                    this.code += this.substituteIntoTemplate(call, this.setTagAndChangeState(call, inst));
                    //update pc
                    this.code += this.changePC(inst.pcChange);
                    //goto next instruction
                    this.code += this.goto;
                    this.code += "}\nbreak;\n\n";

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
        
        //TODO: Generalize this if you want more types
        //The prefix 0b for binary is a GNU extension
        //Apparently anything cool in C is a GNU extension
        setTagAndChangeState : function(call, inst) {
            if (inst.stateChange === undefined)
                return "";
            else
            {
                //destination address is call[0]
                var changedBitIndex = call[0];
                var maskString = ""; //not really a bitmask
                var hexMask = "";

                if (inst.stateChange === 0)
                {
                    maskString = "111111";
                    maskString = maskString.slice(0, changedBitIndex) + "0" + maskString.slice(changedBitIndex + 1) + "00000000000";
                    hexMask += "ts &= 0x" + parseInt(maskString, 2).toString(16) ;
                }
                else
                {
                    maskString = "000000";                    
                    maskString = maskString.slice(0, changedBitIndex) + "1" + maskString.slice(changedBitIndex + 1) + "00000000000";
                    hexMask += "ts |= 0x" + parseInt(maskString, 2).toString(16) ;
                }

                //Set the Tag and edit the state
                return this.getTagSetCode(inst.stateChange) + hexMask +"; //0b" + maskString +"\n";
            }                             
        },

        changePC : function(pcChange) {
            if (!pcChange)
                return "";
            else
                return pcChange == 1? "pc++;\n" : "pc += " + pcChange + ";\n" ;
        },

        substituteIntoTemplate : function(call, template)
        {
            if (template)
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
            }
            else
                return "";
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

var CodeGenerator = new Generator(lookups, numregisters, numtypes);

var fs = require('fs');

//Code
fs.writeFileSync('../staticInstructions.h', '');
console.log('File overwritten');
fs.appendFileSync('../staticInstructions.h', CodeGenerator.getCode());
console.log('Code written to file');

//lookup table
fs.writeFileSync('../dynamicOpcodes.h', '');
console.log('File overwritten');
fs.appendFileSync('../dynamicOpcodes.h', CodeGenerator.getLookupTable());
console.log('Code written to file');

    
    


