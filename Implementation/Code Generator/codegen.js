//convenience values
var i = 0;
var p = 1;
var g = -1;
var differentRegisters = function(call){return call[0] !== call[1];};

//convenience functions
function getConst(name, offset)
{
    var offst = offset || 1; //this is fine since 0 is not valid anyway
    return 'int16_t d' + name + ' = program[pc + '+ offst +'];\n' +
            'int64_t ' + name + ' = *((int64_t*)(&program[pc + d' + name + ']));\n';
}

var lookups = [
    { name:'add', inputs: 2,
      instructions:[
          { name:'addii', pcChange: 1, legal:[i,i],
            template : '/*<0>*/.i += /*<1>*/.i;\n'}]},
    
    { name:'addc', inputs: 1,
      instructions:[
          { name:'addik', pcChange: 2, legal: [i],
            template: 
            getConst('constant') + '/*<0>*/.i += constant;\n'}]},
    
    { name: 'sub', inputs: 2, callCondition: differentRegisters,
      instructions:[
          { name:'subii', pcChange: 1, legal:[i,i],
            template : '/*<0>*/.i -= /*<1>*/.i;\n'}]},
    
    { name:'csub', inputs: 1,
      instructions:[
          { name:'subki', pcChange: 2, legal: [i],
            template:
            getConst('constant') + '/*<0>*/.i = constant - /*<0>*/.i;\n'}]},

     { name: 'or', inputs: 2, callCondition: differentRegisters,
      instructions:[
          { name:'orii', pcChange: 1, legal:[i,i],
            template : '/*<0>*/.i |= /*<1>*/.i;\n'}]},
    
    { name:'orc', inputs: 1,
      instructions:[
          { name:'orki', pcChange: 2, legal: [i],
            template:
            getConst('constant') + '/*<0>*/.i |= constant;\n'}]},

    
     { name: 'xor', inputs: 2, callCondition: differentRegisters,
      instructions:[
          { name:'xorii', pcChange: 1, legal:[i,i],
            template : '/*<0>*/.i ^= /*<1>*/.i;\n'}]},
    
    { name: 'shl', inputs: 2, callCondition: differentRegisters,
      instructions:[
          { name:'shlii', pcChange: 1, legal:[i,i],
            template : '/*<0>*/.i <<= /*<1>*/.i;\n'}]},
    
    { name:'shlc', inputs: 1,
      instructions:[
          { name:'shlik', pcChange: 2, legal: [i],
            template:
            getConst('constant') + '/*<0>*/.i <<= constant;\n'}]},    

    { name:'cshl', inputs: 1,
      instructions:[
          { name:'shlki', pcChange: 2, legal: [i],
            template:
            getConst('constant') + '/*<0>*/.i = constant << /*<0>*/.i;\n'}]},

    //TODO: NB must test this
    { name: 'shr', inputs: 2, callCondition: differentRegisters,
      instructions:[
          { name:'shrii', pcChange: 1, legal:[i,i],
            template : '/*<0>*/.i = (uint64_t)/*<0>*/.i >> /*<0>*/.i;\n'}]},
    
    { name:'shrc', inputs: 1,
      instructions:[
          { name:'shrik', pcChange: 2, legal: [i],
            template:
            getConst('constant') + '/*<0>*/.i = (uint64_t)/*<0>*/.i >> constant;\n'}]},    

    { name:'cshr', inputs: 1,
      instructions:[
          { name:'shrki', pcChange: 2, legal: [i],
            template:
            getConst('constant') + '/*<0>*/.i = (uint64_t)constant >> /*<0>*/.i;\n'}]},

    { name: 'sar', inputs: 2, callCondition: differentRegisters,
      instructions:[
          { name:'sarii', pcChange: 1, legal:[i,i],
            template : '/*<0>*/.i >>= /*<1>*/.i;\n'}]},
    
    { name:'sarc', inputs: 1,
      instructions:[
          { name:'sarik', pcChange: 2, legal: [i],
            template:
            getConst('constant') + '/*<0>*/.i >>= constant;\n'}]},    

    { name:'csar', inputs: 1,
      instructions:[
          { name:'sarki', pcChange: 2, legal: [i],
            template:
            getConst('constant') + '/*<0>*/.i = constant >> /*<0>*/.i;\n'}]},    
    
    { name: 'mov', inputs:2, callCondition: differentRegisters,
      instructions: [
          { name:'movii', pcChange: 1, legal:[i,i],
            template: '/*<0>*/.i = /*<1>*/.i;\n'},
          { name:'movpp', pcChange: 1, legal:[p,p],
            template: '/*<0>*/.p = /*<1>*/.p;\n'},
          { name:'movip', pcChange: 1, legal:[i,p], 
            template: '/*<0>*/.p = /*<1>*/.p;\n' +
            '/*<tag+state:'+ p +'>*/;\n'
          },
          { name:'movpi', pcChange: 1, legal:[p,i],
            template: '/*<0>*/.i = /*<1>*/.i;\n' +
            '/*<tag+state:'+ i +'>*/;\n'}]},
    
    { name: 'movc', inputs: 1, //TODO movN separate?
      instructions: [
          { name:'movik', pcChange: 2, legal: [i],
            template: getConst('constant') + '/*<0>*/.i = constant;\n'},
          { name:'movpk', pcChange: 2, legal: [p], 
            template: getConst('constant') +
            '/*<0>*/.i = constant;\n' +
            '/*<tag+state:'+ i +'>*/;\n'},
          { name: 'movpN', pcChange: 1, legal: [p],
            template: '/*<0>*/.p = NULL;\n'},
          { name: 'moviN', pcChange: 1, legal: [i], 
            template: '/*<0>*/.p = NULL;\n' +
            '/*<tag+state:'+ p +'>*/;\n'}]},
    
    {name: 'get', inputs: 1,
     instructions: [
         {name: 'getik', pcChange: 2, legal: [i],
          template:
          'int16_t constant = program[pc + 1];\n' +
          'value val = *(fp + constant);\n' + 
          'if (val.tag != '+ i +')\n' +
          '{\n' +
          '/*<state+tag:' + i + '>*/;\n' +
          '}\n' +
          '/*<0>*/.i = val.i;\n'           
         },
         {name: 'getpk', pcChange: 2, legal: [p],
          template:
          'int16_t constant = program[pc + 1];\n' +
          'value val = *(fp + constant);\n' + 
          'if (val.tag != '+ p +')\n' +
          '{\n' +
          '/*<state+tag:' + p + '>*/;\n' +
          '}\n' +
          '/*<0>*/.p = val.p;\n'}]},

    {name: 'set', inputs: 1,
     instructions: [
         {name: 'set', pcChange: 2,
          template:
          'int16_t constant = program[pc + 1];\n' +
          'value* vp = fp + constant;\n' +
          'vp = &/*<0>*/;\n'
         }]
    },    
    
    {name: 'jmp', inputs: 0, 
     instructions: [{ name:'jmp', 
                      template: 'pc += program[pc+1];\n'}]},
    {name: 'jmpf', inputs: 0,
     instructions: [{ name:'jmpf', 
                      template: getConst('constant') +
                      'pc += constant;\n'}]},    
    { name: 'switch', inputs: 1, 
      instructions:[
          { name:'jsw', legal:[i],
            template :
            'int16_t tableSize = program[pc + 1];\n' +
            'if(/*<0>*/.i < 0 || /*<0>*/.i >= tableSize) {\n' +
            'int16_t defaultJump = program[pc + tableSize + 2];\n' +   //tableSize gets us to one more than the elements in the table then + 1 to store tableSize's displacement
            'pc += defaultJump;\n' + 
            '}\n' +
            'else {\n' +
            'int16_t jump = program[pc + /*<0>*/.i + 2];\n' +
            'pc += jump;\n ' +//index into the table
            '}\n'
          }]},

    //TODO: check pointer eq
    //TODO: consolidate caft1-4
    { name: 'cab', inputs: 2, callCondition: differentRegisters,
      instructions:[
          { name:'cabii', legal:[i,i],
            template :
            'if (/*<0>*/.i < /*<1>*/.i)\n' +
            'pc += program[pc + 1];\n' +
            'else if(/*<0>*/.i == /*<1>*/.i)\n' +
            'pc += program[pc + 2];\n' +
            'else\n' +
            'pc += program[pc + 3];\n' 
          },
          { name:'cabpp', legal:[p,p], 
            template : 
            'if (/*<0>*/.p == /*<1>*/.p)\n' +
            'pc += program[pc + 2];\n' +
            'else\n' +
            'pc += program[pc + 4];\n' },
          { name:'cabft', pcChange: 5, legal:[p,i]},
          { name:'cabft', pcChange: 5, legal:[i,p], genCode: false}]},

    { name: 'cabk', inputs: 1, callCondition: differentRegisters,
      instructions:[
          { name:'cabik', legal:[i],
            template :
            getConst('constant') +
            'if (/*<0>*/.i < constant)\n' +
            'pc += program[pc + 2];\n' +
            'else if(/*<0>*/.i == constant)\n' +
            'pc += program[pc + 3];\n' +
            'else\n' +
            'pc += program[pc + 4];\n' 
          }, 
          { name:'cabft', pcChange: 5, legal:[p]}]},

    { name: 'cabN', inputs: 1, callCondition: differentRegisters,
      instructions:[
          { name:'cabpN', legal:[i],
            template :
            'if (/*<0>*/.p == NULL)\n' +
            'pc += program[pc + 2];\n' +
            'else\n' +
            'pc += program[pc + 3];\n' 
          },
          { name:'cabft', pcChange: 5, legal:[i], genCode: false}]}   
];

var statics = [
    'error:\n' +
        '{\n' +
        'printf("error");\n' +
        '}\n\n',
    
    'undefined:\n' +
        '{\n' +
        'printf("undefined");\n' +
        '}\n\n'
];

var numTypes = 2;
var numRegisters = 6;
var opcodeSizeInBytes = 11;

function Generator(lookups, statics, numregisters, numtypes, opcodeSizeInBytes)
{
    this.code = '';
    this.numregisters = numregisters;
    this.numtypes = numtypes;
    this.lookuptable = new Array(Math.pow(numtypes, numregisters)* Math.pow(2, opcodeSizeInBytes));
    this.numstates = Math.pow(numtypes, numregisters);
    this.instgenerators = [];
}

Generator.prototype =
    {
        generate: function(vm)
        {
            //create generators and save code
            lookups.forEach(function(lookup){
                var instGen = new InstructionGenerator(lookup, this.numregisters, this.numtypes);
                instGen.genCode(vm);
                this.code += instGen.code;
                this.instgenerators.push(instGen);
            }, this);

            statics.forEach(function(x){
                this.code += x;
            }, this);

            
            /* Get lookups based on state
             * ==========================
             * there are numtypes**numregisters states
             * for each state there are 2**opcodeSizeInBytes possible lookups
             * most of these will be used but some will not
             * visualisation: (_ is undefined / is error case)
             * =============
             * state 0: a b c d e / _ _ _
             * state 1: / b c / e f _ _ _
             * etc.
             */

            //Are states used? Only 1 state when we don't care about states
            var numstates = vm == 0 ? this.numstates : 1;
            
            for (var state = 0; state < numstates; state++) {
                
                //lookup table per state
                var stateTable = []; 
                
                this.instgenerators.forEach(
                    function(generator){
                        generator.genLookups(state, vm);
                        stateTable = stateTable.concat(generator.lookuptable);
                    }, this);

                //place state table into big lookup table correctly offset
                stateTable.forEach(function(lookup, i){
                    this.lookuptable[state*Math.pow(2,opcodeSizeInBytes) + i] = lookup;
                }, this);
            }
            
            for (var i = 0; i < this.lookuptable.length; i++)
            {
                if (this.lookuptable[i] === undefined)
                    this.lookuptable[i] = '&&undefined';
            }
        },
        getCode: function(){
            return this.code;
        },
        getLookupTable: function(){
            return this.lookuptable.join([seperator = ',\n']);
        }
    };

//All powerful generator
function InstructionGenerator(lookup, numregisters, numtypes)
{
    this.numtypes = numtypes;
    this.numregisters = numregisters;
    this.numstates = Math.pow(numtypes, numregisters);    
    this.lookup = lookup;
    
    this.constants = {};
    this.code = '';
    this.callables = this.getAllCallables();
    
    this.lookuptable = [];
}

InstructionGenerator.prototype =
    {
        genCode : function(vm) {
            var numCalls = Math.pow(this.numregisters, this.lookup.inputs); //6^2 usually
            //iterate over different instructions
            this.lookup.instructions.forEach(function(inst){
                //iterate over all possible calls
                if (inst.genCode !== false)
                    this.callables.forEach(function(call, i) {
                        
                        //write the code:
                        //==============
                        //write out label
                        this.code += this.getLabel(inst.name, call);
                        this.code += '{\n';

                        //get args the old fashioned way
                        if (vm === 1)
                            this.code += this.getArgsFromInst();
                        
                        //write instruction for arguments
                        //this includes state changes
                        this.code += this.substituteIntoTemplate(call, inst.template);
                        //update pc
                        this.code += this.changePC(inst.pcChange);
                        //goto next instruction
                        this.code += this.goto(vm);
                        this.code += '}\n\n';                    
                    }, this);
                
            }, this);
        },

        goto: function(vm) {
            if (vm === 0)
                return 'goto *dynOpcodes[ts + program[pc]];\n';
            else //if (vm === 1)
                return 'goto *dynOpcodes[getOpcode(program[pc])];\n';
        },
                
        //generate the lookup table for all instructions for a given state
        genLookups: function(state, vm) {
            
            //fill lookup table with &&error
            var k = 0;
            while (k < this.callables.length) {
                this.lookuptable[k] = '&&error';
                k++;
            }
            
            var stateRegisters = this.stateToBase(state, this.numtypes, this.numregisters);
            
            this.lookup.instructions.forEach(function(inst){
                this.callables.forEach(function(call, i){
                    var lookup = this.isLegal(call, stateRegisters, inst);
                    if(lookup)
                        this.lookuptable[i] = this.getLookupAddress(lookup, call);
                },this);
            },this);
        },

        getArgsFromInst : function(inst)
        {
            var code = '';
            for(var i = 0; i < this.lookup.inputs; i++) {
                code += 'getArg' + i + '(' + inst + ');\n';
            }
        },
        
        getAllCallables : function() {
            var callables = [];
            for (var i = 0; i < Math.pow(this.numregisters, this.lookup.inputs); i++)
            {
                var call = this.getCall(i); //call[3, 4] => name_3_4
                var callable = this.lookup.callCondition? this.lookup.callCondition(call): true;

                if (callable)
                    callables.push(call);                
            }
            return callables;            
        },
        
        //returns an array of which registers are being called 
        getCall: function(i) {
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
        
        //convert state number to array of register states
        //only works for values that fit properly
        stateToBase: function(i, b, numregisters) {
            var baseb = [];
            for (var j = 0; j < numregisters -1; j++)
            {
                var place = Math.pow(b, numregisters-1-j);
                baseb[j] = Math.floor(i / place);
                i %= place;
            }
            baseb[numregisters-1] = i % b;          

            return baseb;
        },
        
        //TODO: Generalize this if you want more types
        changeState : function(call, type) {
            //destination address is call[0]
            var changedBitIndex = call[0];
            var bitMask = ''; //not really a bitmask
            var hexMask = '';

            if (type === 0)
            {
                bitMask = '111111';
                bitMask = bitMask.slice(0, changedBitIndex) + '0' + bitMask.slice(changedBitIndex + 1) + '00000000000';
            }
            else
            {
                bitMask = '000000';                    
                bitMask = bitMask.slice(0, changedBitIndex) + '1' + bitMask.slice(changedBitIndex + 1) + '00000000000';      
            }
            
            hexMask += parseInt(bitMask, 2).toString(16) ;
            //Set the Tag and edit the state
            return 'ts |= 0x' + hexMask +' /*0b' + bitMask +'*/';
        },
        
        changePC : function(pcChange) {
            if (!pcChange)
                return '';
            else
                return pcChange === 1? 'pc++;\n' : 'pc += ' + pcChange + ';\n' ;
        },

        //TODO: Implement this in a more generic, modular way so that it could potentially be updated
        substituteIntoTemplate : function(call, template) {
            function findAndReplace(token, subbedString, replacewith)
            {
                while (true) {
                    var pos = subbedString.indexOf(token);

                    if (pos < 0)
                        return subbedString;
                    else {
                        subbedString = subbedString.replace(token, replacewith);
                    }
                }
            }
            
            if (template)
            {
                var subbedString = template;
                var token = '';
                
                //replace /*<0>*/, /*<1>*/ etc with g[0], g[1]
                for (var i = 0; i < call.length; i++)
                {
                    token = '/*<' + i + '>*/' ;
                    subbedString = findAndReplace(token, subbedString, 'g[' + call[i] + ']');
                }
                
                for (var j = 0; j < this.numtypes; j++)
                {
                    //replace /*<tag+state:0>*/ with /*<tag:0>*/;\n/*<state:0>*/
                    token = '/*<tag+state:' + j + '>*/';
                    subbedString = findAndReplace(token, subbedString, '/*<tag:' + j + '>*/;\n' + '/*<state:' + j + '*>/');
                    
                    //replace /*<tag:0>*/ with g[0].tag = 0;\n
                    token = '/*<tag:' + j + '>*/';
                    subbedString = findAndReplace(token, subbedString, 'g[0].tag = ' + j);

                    //replace /*<state:0>*/ with ts &= or |=
                    token = '/*<state:' + j + '*>/';
                    subbedString = findAndReplace(token, subbedString, this.changeState(call, j));                    
                }
                
                return subbedString;
            }
            else
                return '';
        },
        
        getStaticInstructionName: function(name, call) {
            return name + (this.lookup.inputs === 0? '' : '_') + call.join([seperator = '_']);
        },

        getLookupAddress: function(name, call) {
            return '&&' + this.getStaticInstructionName(name, call);
        },

        getLabel: function(name, call) {
            return this.getStaticInstructionName(name,call) + ':\n'; 
        },

        //returns the name of a legal instruction based on register types
        //else returns false
        isLegal: function(call, registerTypes, inst) {
            //call = [0,4] means the arguments refer to g[0] and g[4] 
            //callTypes is a new array of the types in those registers
            //so if g[0] holds an pointer and g[4] holds a pointer then
            //call = [0,4] => callTypes = [1,1]
            var callTypes = this.getCallTypes(call, registerTypes);

            if (inst.legal !== undefined) {
                var legal = inst.name;
                for (var k = 0; k < callTypes.length; k++) {
                    if (callTypes[k] !== inst.legal[k])
                    {
                        legal = false;
                        break;
                    }
                }
            }
            return legal;
        },

        getCallTypes: function(call, registerTypes) {
            var callTypes = [];
            for (var i = 0; i < call.length; i++) {
                callTypes[i] = registerTypes[call[i]];
            }
            return callTypes;
        }
    };

var CodeGenerator = new Generator(lookups, statics, numRegisters, numTypes, opcodeSizeInBytes);
var fs = require('fs');

//VM 0 - state driven VM
CodeGenerator.generate(0);

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

//VM 1 - standard style VM
CodeGenerator.generate(1);
