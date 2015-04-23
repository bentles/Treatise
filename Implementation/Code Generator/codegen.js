//convenience values
var i = 0;
var p = 1;
var g = -1;
var differentRegisters = function(call) {
    return call[0] !== call[1];
};

//convenience functions
function getConst(name, offset) {
    var offst = offset || 1; //this is fine since 0 is not valid anyway
    return 'int16_t d' + name + ' = program[pc + ' + offst + '];\n' +
        'int64_t ' + name + ' = *((int64_t*)(&program[pc + d' + name + ']));\n';
}

var lookups = [
    {
        name: 'add',
        inputs: 2,
        instructions: [{
            name: 'add',
            pcChange: 1,
            legal: [i, i],
            template: '/*<0>*/.i += /*<1>*/.i;\n'
        }]
    },
    
    {
        name: 'addc',
        inputs: 1,
        instructions: [{
            name: 'addc',
            pcChange: 2,
            legal: [i],
            template: getConst('constant') + '/*<0>*/.i += constant;\n'
        }]
    },

    {
        name: 'sub',
        inputs: 2,
        callCondition: differentRegisters,
        instructions: [{
            name: 'sub',
            pcChange: 1,
            legal: [i, i],
            template: '/*<0>*/.i -= /*<1>*/.i;\n'
        }]
    },

    {
        name: 'csub',
        inputs: 1,
        instructions: [{
            name: 'csub',
            pcChange: 2,
            legal: [i],
            template: getConst('constant') + '/*<0>*/.i = constant - /*<0>*/.i;\n'
        }]
    },

    {
        name: 'mul',
        inputs: 2,
        instructions: [{
            name: 'mul',
            pcChange: 1,
            legal: [i, i],
            template: '/*<0>*/.i *= /*<1>*/.i;\n'
        }]
    },
    {
        name: 'mulc',
        inputs: 1,
        instructions: [{
            name: 'mulc',
            pcChange: 2,
            legal: [i],
            template: getConst('constant') + '/*<0>*/.i *= constant;\n'
        }]
    },

    {
        name: 'div',
        inputs: 2,
        callCondition: differentRegisters,
        instructions: [{
            name: 'div',
            pcChange: 1,
            legal: [i, i],
            template: '/*<0>*/.i /= /*<1>*/.i;\n'
        }]
    },
    {
        name: 'divc',
        inputs: 1,
        instructions: [{
            name: 'divc',
            pcChange: 2,
            legal: [i],
            template: getConst('constant') + '/*<0>*/.i /= constant;\n'
        }]
    },

        {
        name: 'and',
        inputs: 2,
        callCondition: differentRegisters,
        instructions: [{
            name: 'and',
            pcChange: 1,
            legal: [i, i],
            template: '/*<0>*/.i &= /*<1>*/.i;\n'
        }]
    },

    {
        name: 'andc',
        inputs: 1,
        instructions: [{
            name: 'andc',
            pcChange: 2,
            legal: [i],
            template: getConst('constant') + '/*<0>*/.i &= constant;\n'
        }]
    },   
    {
        name: 'or',
        inputs: 2,
        callCondition: differentRegisters,
        instructions: [{
            name: 'or',
            pcChange: 1,
            legal: [i, i],
            template: '/*<0>*/.i |= /*<1>*/.i;\n'
        }]
    },

    {
        name: 'orc',
        inputs: 1,
        instructions: [{
            name: 'orc',
            pcChange: 2,
            legal: [i],
            template: getConst('constant') + '/*<0>*/.i |= constant;\n'
        }]
    },


    {
        name: 'xor',
        inputs: 2,
        callCondition: differentRegisters,
        instructions: [{
            name: 'xor',
            pcChange: 1,
            legal: [i, i],
            template: '/*<0>*/.i ^= /*<1>*/.i;\n'
        }]
    },

    {
        name: 'shl',
        inputs: 2,
        callCondition: differentRegisters,
        instructions: [{
            name: 'shl',
            pcChange: 1,
            legal: [i, i],
            template: '/*<0>*/.i <<= /*<1>*/.i;\n'
        }]
    },

    {
        name: 'shlc',
        inputs: 1,
        instructions: [{
            name: 'shlc',
            pcChange: 2,
            legal: [i],
            template: getConst('constant') + '/*<0>*/.i <<= constant;\n'
        }]
    },

    {
        name: 'cshl',
        inputs: 1,
        instructions: [{
            name: 'cshl',
            pcChange: 2,
            legal: [i],
            template: getConst('constant') + '/*<0>*/.i = constant << /*<0>*/.i;\n'
        }]
    },
    //TODO: NB must test this
    {
        name: 'shr',
        inputs: 2,
        callCondition: differentRegisters,
        instructions: [{
            name: 'shr',
            pcChange: 1,
            legal: [i, i],
            template: '/*<0>*/.i = (uint64_t)/*<0>*/.i >> /*<0>*/.i;\n'
        }]
    },
    {
        name: 'shrc',
        inputs: 1,
        instructions: [{
            name: 'shrc',
            pcChange: 2,
            legal: [i],
            template: getConst('constant') + '/*<0>*/.i = (uint64_t)/*<0>*/.i >> constant;\n'
        }]
    },
    {
        name: 'cshr',
        inputs: 1,
        instructions: [{
            name: 'cshr',
            pcChange: 2,
            legal: [i],
            template: getConst('constant') + '/*<0>*/.i = (uint64_t)constant >> /*<0>*/.i;\n'
        }]
    },
    {
        name: 'sar',
        inputs: 2,
        callCondition: differentRegisters,
        instructions: [{
            name: 'sar',
            pcChange: 1,
            legal: [i, i],
            template: '/*<0>*/.i >>= /*<1>*/.i;\n'
        }]
    },

    {
        name: 'sarc',
        inputs: 1,
        instructions: [{
            name: 'sarc',
            pcChange: 2,
            legal: [i],
            template: getConst('constant') + '/*<0>*/.i >>= constant;\n'
        }]
    },

    {
        name: 'csar',
        inputs: 1,
        instructions: [{
            name: 'csar',
            pcChange: 2,
            legal: [i],
            template: getConst('constant') + '/*<0>*/.i = constant >> /*<0>*/.i;\n'
        }]
    },

    {
        name: 'mov',
        inputs: 2,
        callCondition: differentRegisters,
        instructions: [{
            name: 'movii',
            pcChange: 1,
            legal: [i, i],
            template: '/*<0>*/.i = /*<1>*/.i;\n'
        }, {
            name: 'movpp',
            pcChange: 1,
            legal: [p, p],
            template: '/*<0>*/.tag = /*<1>*/.tag;\n' +
            '/*<0>*/.p = /*<1>*/.p;\n'
        }, {
            name: 'movip',
            pcChange: 1,
            legal: [i, p],
            template: '/*<0>*/.p = /*<1>*/.p;\n' +
                '/*<0>*/.tag = /*<1>*/.tag;\n' +
                '/*<state:' + p + '>*/;\n'
        }, {
            name: 'movpi',
            pcChange: 1,
            legal: [p, i],
            template: '/*<0>*/.i = /*<1>*/.i;\n' +
                '/*<tag+state:' + i + '>*/;\n'
        }]
    },

    {
        name: 'movc',
        inputs: 1, //TODO movN separate?
        instructions: [{
            name: 'movic',
            pcChange: 2,
            legal: [i],
            template: getConst('constant') + '/*<0>*/.i = constant;\n'
        }, {
            name: 'movpc',
            pcChange: 2,
            legal: [p],
            template: getConst('constant') +
                '/*<0>*/.i = constant;\n' +
                '/*<tag+state:' + i + '>*/;\n'
        }, {
            name: 'movpn',
            pcChange: 1,
            legal: [p],
            template: '/*<0>*/.p = NULL;\n'
        }, {
            name: 'movin',
            pcChange: 1,
            legal: [i],
            template: '/*<0>*/.p = NULL;\n' +
                '/*<tag+state:' + p + '>*/;\n'
        }]
    },

    {
        name: 'getl',
        inputs: 1,
        instructions: [{
            name: 'getl',
            pcChange: 2,
            legal: [i],
            template: 'int16_t constant = program[pc + 1];\n' +
                'value val = fp[constant];\n' +
                'if (val.tag != ' + i + ')\n' +
                '{\n' +
                '/*<0>*/.tag = val.tag;\n' +
                '/*<state:' + p + '>*/;\n' +
                '/*<0>*/.p = val.p;\n' +
                '}\n' +
                'else{\n' +
                '/*<0>*/.i = val.i;\n' +
                '}\n'
        }, {
            name: 'getlp',
            pcChange: 2,
            legal: [p],
            template: 'int16_t constant = program[pc + 1];\n' +
                'value val = fp[constant];\n' +
                'if (val.tag == ' + i + ')' +
                '{\n' +
                '/*<tag+state:' + i + '>*/;\n' +
                '/*<0>*/.i = val.i;\n' +
                '}\n' +
                '/*<0>*/.tag = val.tag;\n' +
                '/*<0>*/.p = val.p;\n'
        }]
    },

    {
        name: 'setl',
        inputs: 1,
        instructions: [{
            name: 'setl',
            pcChange: 2,
            legal: [i],            
            
            template: 'int16_t constant = program[pc + 1];\n' +
                'value* vp = fp + constant * sizeof(value);\n' +
                '(*vp).tag = /*<0>*/.tag;\n' +
                '(*vp).i = /*<0>*/.i;\n'
        },
        {
            name: 'setlp',
            pcChange: 2,
            legal: [p],
            template: 'int16_t constant = program[pc + 1];\n' +
                'value* vp = fp + constant * sizeof(value);\n' +
                '(*vp).tag = /*<0>*/.tag;\n' +
                '(*vp).p = /*<0>*/.p;\n'
        }]
    },

    {
        name: 'getm',
        inputs: 2,
        instructions: [
            {
                name: 'getm',
                pcChange: 2,
                legal: [i, p],
                template: 'int16_t constant = program[pc + 1];\n' +
                    'value val = ((object *)(/*<1>*/.p))->data[constant];\n' +
                    'if (val.tag != ' + i + ')\n' +
                    '{\n' +
                    '/*<0>*/.tag = val.tag;\n' +
                    '/*<state:' + p + '>*/;\n' +
                    '/*<0>*/.p = val.p;\n' +
                    '}\n' +
                    'else{\n' +
                    '/*<0>*/.i = val.i;\n' +
                    '}\n' 
            },
            {
                name: 'getmp',
                pcChange: 2,
                legal: [p, p],
                template: 'int16_t constant = program[pc + 1];\n' +
                    'value val = ((object *)(/*<1>*/.p))->data[constant];\n' +
                    'if (val.tag == ' + i + ')' +
                    '{\n' +
                    '/*<tag+state:' + i + '>*/;\n' +
                    '/*<0>*/.i = val.i;\n' +
                    '}\n' +
                    '/*<0>*/.tag = val.tag;\n' +
                    '/*<0>*/.p = val.p;\n'
            }]
    },
    //TODO: can I make this better?
        {
        name: 'setm',
        inputs: 2,
        instructions: [
            {
                name: 'setm',
                pcChange: 2,
                legal: [p, i], 
                template: 'int16_t constant = program[pc + 1];\n' +
                'value *vp = &(((object *)(/*<0>*/.p))->data[constant]);\n' +
                'vp->tag ='+ i +';\n' +
                'vp->i = /*<1>*/.i;\n'
            },
            {
                name: 'setmp',
                pcChange: 2,
                legal: [p, p],
                template: 'int16_t constant = program[pc + 1];\n' +
                'value *vp = &(((object *)(/*<0>*/.p))->data[constant]);\n' +
                'vp->tag = /*<1>*/.tag;\n' +
                'vp->p = /*<1>*/.p;\n'
            }]
        },

    {
        name: 'geta',
        inputs: 3,
        callCondition: function(call){return call[1] !== call[2];},
        instructions: [
            {
                name: 'geta',
                legal: [i, p, i],
                template: 
                    'value val = ((pointeronly *)(/*<1>*/.p))->data[/*<2>*/.i];\n' +
                    '/*<0>*/.tag = val.tag;\n' +
                    '/*<state:' + p + '>*/;\n' +
                    '/*<0>*/.p = val.p;\n'
            },
            {
                name: 'getap',
                legal: [p, p, i],
                template: 
                    'value val = ((pointeronly *)(/*<1>*/.p))->data[/*<2>*/.i];\n' +
                    '/*<0>*/.tag = val.tag;\n' +
                    '/*<0>*/.p = val.p;\n'
            }
        ]
    },

    {
        name: 'seta',
        inputs: 3,
        callCondition: differentRegisters,
        instructions: [
            {
                name: 'setap',
                legal: [p, i, p],
                template: 
                    'value *vp = &(((pointeronly *)(/*<0>*/.p))->data[/*<1>*/.i]);\n' +
                    'vp->tag = /*<2>*/.tag;\n' +
                    'vp->p = /*<2>*/.p;\n'
            }
        ]
    },

    {
        name: 'getb',
        inputs: 3,
        callCondition: function(call){return call[1] !== call[2];},
        instructions: [
            {
                name: 'getb',
                legal: [i, p, i],
                template: 'uint8_t val = ((buffer *)(/*<1>*/.p))->data[/*<2>*/.i];\n' +
                    '/*<0>*/.i = val;\n'                
            },
            {
                name: 'getbp',
                legal: [p, p, i],
                template: 'uint8_t val = ((buffer *)(/*<1>*/.p))->data[/*<2>*/.i];\n' +
                    '/*<tag+state:' + i + '>*/;\n' +
                    '/*<0>*/.i = val;\n'                
            },
        ]
    },
    //TODO: TEST ME!!
    {
        name: 'setb',
        inputs: 3,
        callCondition: function(call){return call[1] !== call[2];},
        instructions: [
            {
                name: 'setb',
                legal: [p, i, i],
                template: 'uint8_t *vp = &(((buffer *)(/*<0>*/.p))->data[/*<1>*/.i]);\n' +
                    '*vp = /*<0>*/.i;\n'                
            },
        ]
    },
    
    {
        name: 'jmp',
        inputs: 0,
        instructions: [{
            name: 'jmp',
            template: 'pc += program[pc+1];\n'
        }]
    }, {
        name: 'jmpf',
        inputs: 0,
        instructions: [{
            name: 'jmpf',
            template: getConst('constant') +
                'pc += constant;\n'
        }]
    }, {
        name: 'switch',
        inputs: 1,
        instructions: [{
            name: 'switch',
            legal: [i],
            template: 'int16_t tableSize = program[pc + 1];\n' +
                'if(/*<0>*/.i < 0 || /*<0>*/.i >= tableSize) {\n' +
                'int16_t defaultJump = program[pc + tableSize + 2];\n' + //tableSize gets us to one more than the elements in the table then + 1 to store tableSize's displacement
                'pc += defaultJump;\n' +
                '}\n' +
                'else {\n' +
                'int16_t jump = program[pc + /*<0>*/.i + 2];\n' +
                'pc += jump;\n ' + //index into the table
                '}\n'
        }]
    },

    //TODO: check pointer eq
    {
        name: 'jcmp',
        inputs: 2,
        callCondition: differentRegisters,
        instructions: [{
            name: 'jcmpi',
            legal: [i, i],
            template: 'if (/*<0>*/.i < /*<1>*/.i)\n' +
                'pc += program[pc + 1];\n' +
                'else if(/*<0>*/.i == /*<1>*/.i)\n' +
                'pc += program[pc + 2];\n' +
                'else\n' +
                'pc += program[pc + 3];\n'
        }, {
            name: 'jcmpp',
            legal: [p, p],
            template: 'if (/*<0>*/.p == /*<1>*/.p)\n' +
                'pc += program[pc + 2];\n' +
                'else\n' +
                'pc += program[pc + 4];\n'
        }, {
            name: 'jcmpft',
            pcChange: 5,
            legal: [p, i]
        }, {
            name: 'jcmpft',
            pcChange: 5,
            legal: [i, p],
            genCode: false
        }]
    },

    {
        name: 'jcmpc',
        inputs: 1,
        instructions: [{
            name: 'jcmpc',
            legal: [i],
            template: getConst('constant') +
                'if (/*<0>*/.i < constant)\n' +
                'pc += program[pc + 2];\n' +
                'else if(/*<0>*/.i == constant)\n' +
                'pc += program[pc + 3];\n' +
                'else\n' +
                'pc += program[pc + 4];\n'
        }, {
            name: 'jcmpft',
            pcChange: 5,
            legal: [p]
        }]
    },
        {
        name: 'jeqp',
        inputs: 2,
        callCondition: differentRegisters,
        instructions: [{
            name: 'jeqp',
            legal: [i],
            template: 'if (/*<0>*/.p == /*<1>*/.p)\n' +
                'pc += program[pc + 2];\n' +
                'else\n' +
                'pc += program[pc + 1];\n'
        }, {
            name: 'cabft',
            pcChange: 5,
            legal: [i],
            genCode: false
        }]
    },
    {
        name: 'jnullp',
        inputs: 1,
        callCondition: differentRegisters,
        instructions: [{
            name: 'jnullp',
            legal: [i],
            template: 'if (/*<0>*/.p == NULL)\n' +
                'pc += program[pc + 2];\n' +
                'else\n' +
                'pc += program[pc + 3];\n'
        }, {
            name: 'cabft',
            pcChange: 5,
            legal: [i],
            genCode: false
        }]
    },
    {
        name: 'call',
        inputs: 0,
        instructions: [{
            name: 'call',
            template: 
            'int64_t newpc = pc + program[pc + 1];\n' +
                'size_t size = sizeof(stackframe) + sizeof(value) * program[newpc];\n' +
                'stackframe *base = (stackframe*)malloc(size);\n' +
                'base->fp = fp; base->pc = pc; base->ts = ts;\n' +
                'SaveRegisters(base->g);\n' +
                'value *newfp = base->l;\n' + 
                'memcpy(newfp, fp + program[pc + 2], program[pc + 3]*sizeof(value));\n' +
                'fp = newfp;\n' +
                'pc = newpc + 1;\n'                 
        }]
    },
    {
        name: 'ret', 
        inputs: 0,
        instructions: [{
            name: 'ret', pcChange: 1,
            template:
            'stackframe *cur = (stackframe*)(fp - offsetof(stackframe, fp));\n' +
            'fp = cur->fp; pc = cur->pc; ts = (cur->ts & 0xF000) | (ts & 0x10800);\n' +
                'RestoreRegisters(cur->g);\n' +                
                'free(cur);//probably does a thing \n' +             
                'if (fp == NULL)\n' +
                'return 0;\n' 
        }]
    },
    {
        name: 'newp',
        inputs: 1,
        instructions: [{
            name: 'newp', pcChange: 1, 
            template: getConst('size') +
                'object *base = (object*)malloc(sizeof(object) + sizeof(value)*size);\n' +
                'base->sf = MakeSizeAndFlags(size,0);\n' +
                '/*<0>*/.tag = 2;\n' +
                '/*<state:' + p + '>*/;\n' +
                '/*<0>*/.p = base;\n'
        }]
    },
    {
        name: 'newa',
        inputs: 1,
        instructions: [{
            name: 'newa', pcChange: 1, 
            template: getConst('size') +
                'buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*size);\n' +
                'base->sf = MakeSizeAndFlags(size,0);\n' +
                '/*<0>*/.tag = 4;\n' +
                '/*<state:' + p + '>*/;\n' +
                '/*<0>*/.p = base;\n'
        }]
    }
];

var statics = [
    'error:\n' +
        '{\n' +
        'fprintf(stderr, "Error");\n' +
        'return 1;\n' +
        '}\n\n',

    'undefined:\n' +
        '{\n' +
        'fprintf(stderr,"undefined");\n' +
        'return 1;\n' +
        '}\n\n'
];

var numTypes = 2;
var numRegisters = 6;
var opcodeSizeInBytes = 11;


function Generator(lookups, statics, numregisters, numtypes, opcodeSizeInBytes) {
    this.code = '';
    this.numregisters = numregisters;
    this.numtypes = numtypes;
    this.lookuptable = new Array(Math.pow(numtypes, numregisters) * Math.pow(2, opcodeSizeInBytes));
    this.opcodetable = [];
    this.numstates = Math.pow(numtypes, numregisters);
    this.instgenerators = [];
}

Generator.prototype = {
    generate: function(vm) {
        //create generators and save code
        lookups.forEach(function(lookup) {
            var instGen = new InstructionGenerator(lookup, this.numregisters, this.numtypes);
            instGen.genCode(vm);
            this.code += instGen.code;
            this.instgenerators.push(instGen);
        }, this);

        statics.forEach(function(x) {
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
                function(generator) {
                    generator.genLookups(state, vm);

                    //only need to do this once not for every state
                    if (state == 0)
                        this.opcodetable.push("'" + generator.lookup.name+ "'" + ' => ' + stateTable.length);
                    
                    stateTable = stateTable.concat(generator.lookuptable);
                }, this);

            //place state table into big lookup table correctly offset
            stateTable.forEach(function(lookup, i) {
                this.lookuptable[state * Math.pow(2, opcodeSizeInBytes) + i] = lookup;
            }, this);
        }

        for (var i = 0; i < this.lookuptable.length; i++) {
            if (this.lookuptable[i] === undefined)
                this.lookuptable[i] = '&&undefined';
        }
    },
    getCode: function() {
        return this.code;
    },
    getLookupTable: function() {
        return this.lookuptable.join([seperator = ',\n']);
    },
    getOpcodes: function() {
        return this.opcodetable.join([seperator = ',\n']);
    }
    
};

//All powerful generator
function InstructionGenerator(lookup, numregisters, numtypes) {
    this.numtypes = numtypes;
    this.numregisters = numregisters;
    this.numstates = Math.pow(numtypes, numregisters);
    this.lookup = lookup;

    this.constants = {};
    this.code = '';
    this.callables = this.getAllCallables();

    this.lookuptable = [];
}

InstructionGenerator.prototype = {
    genCode: function(vm) {
        var numCalls = Math.pow(this.numregisters, this.lookup.inputs); //6^2 usually
        //iterate over different instructions
        this.lookup.instructions.forEach(function(inst) {
            //iterate over all possible calls
            if (inst.genCode !== false)
                this.callables.forEach(function(call, i) {

                    //write the code:
                    //==============
                    //write out label
                    this.code += this.getLabel(inst.name, call);
                    this.code += '{\n';

                    //get args the old fashioned way if requested to
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

        this.lookup.instructions.forEach(function(inst) {
            this.callables.forEach(function(call, i) {
                var lookup = this.isLegal(call, stateRegisters, inst);
                if (lookup)               
                    this.lookuptable[i] = this.getLookupAddress(lookup, call);
                
            }, this);
        }, this);
    },

    getArgsFromInst: function(inst) {
        var code = '';
        for (var i = 0; i < this.lookup.inputs; i++) {
            code += 'getArg' + i + '(' + inst + ');\n';
        }
    },

    getAllCallables: function() {
        var callables = [];
        for (var i = 0; i < Math.pow(this.numregisters, this.lookup.inputs); i++) {
            var call = this.getCall(i); //call[3, 4] => name_3_4
            var callable = this.lookup.callCondition ? this.lookup.callCondition(call) : true;

            if (callable)
                callables.push(call);
        }
        return callables;
    },

    //returns an array of which registers are being called 
    getCall: function(i) {
        var call = [];
        var numinputs = this.lookup.inputs;
        if (numinputs) {
            call[numinputs - 1] = i % this.numregisters;
            for (var k = numinputs - 2; k >= 0; k--) {
                call[k] = Math.floor(i / Math.pow(this.numregisters, numinputs - k - 1)) % this.numregisters;
            }
        }
        return call;
    },

    //convert state number to array of register states
    //only works for values that fit properly
    stateToBase: function(i, b, numregisters) {
        var baseb = [];
        for (var j = 0; j < numregisters - 1; j++) {
            var place = Math.pow(b, numregisters - 1 - j);
            baseb[j] = Math.floor(i / place);
            i %= place;
        }
        baseb[numregisters - 1] = i % b;

        return baseb;
    },

    //TODO: Generalize this if you want more types
    changeState: function(call, type) {
        //destination address is call[0]
        var changedBitIndex = call[0];
        var bitMask = ''; //not really a bitmask
        var hexMask = '';

        if (type === 0) {
            bitMask = '111111';
            bitMask = bitMask.slice(0, changedBitIndex) + '0' + bitMask.slice(changedBitIndex + 1);
        } else {
            bitMask = '000000';
            bitMask = bitMask.slice(0, changedBitIndex) + '1' + bitMask.slice(changedBitIndex + 1);
        }

        hexMask += parseInt(bitMask, 2).toString(16);
        //Set the Tag and edit the state
        return 'ts |= 0x' + hexMask + ' /*' + bitMask + '*/';
    },

    changePC: function(pcChange) {
        if (!pcChange)
            return '';
        else
            return pcChange === 1 ? 'pc++;\n' : 'pc += ' + pcChange + ';\n';
    },

    //TODO: Implement this in a more generic, modular way so that it could potentially be updated
    substituteIntoTemplate: function(call, template) {
        function findAndReplace(token, subbedString, replacewith) {
            while (true) {
                var pos = subbedString.indexOf(token);

                if (pos < 0)
                    return subbedString;
                else {
                    subbedString = subbedString.replace(token, replacewith);
                }
            }
        }

        if (template) {
            var subbedString = template;
            var token = '';

            for (var j = 0; j < this.numtypes; j++) {
                //replace /*<tag+state:0>*/ with /*<tag:0>*/;\n/*<state:0>*/
                token = '/*<tag+state:' + j + '>*/';
                subbedString = findAndReplace(token, subbedString, '/*<tag:' + j + '>*/;\n' + '/*<state:' + j + '>*/');

                //replace /*<tag:0>*/ with g[0].tag = 0;\n
                token = '/*<tag:' + j + '>*/';
                subbedString = findAndReplace(token, subbedString, '/*<0>*/.tag = ' + j);

                //replace /*<state:0>*/ with ts &= or |=
                token = '/*<state:' + j + '>*/';
                subbedString = findAndReplace(token, subbedString, this.changeState(call, j));
            }

            //replace /*<0>*/, /*<1>*/ etc with g[0], g[1]
            for (var i = 0; i < call.length; i++) {
                token = '/*<' + i + '>*/';
                subbedString = findAndReplace(token, subbedString, 'g[' + call[i] + ']');
            }

            return subbedString;
        } else
            return '';
    },

    getStaticInstructionName: function(name, call) {
        return name + (this.lookup.inputs === 0 ? '' : '_') + call.join([seperator = '_']);
    },

    getLookupAddress: function(name, call) {
        return '&&' + this.getStaticInstructionName(name, call);
    },

    getLabel: function(name, call) {
        return this.getStaticInstructionName(name, call) + ':\n';
    },

    //returns the name of a legal instruction based on register types
    //else returns false
    isLegal: function(call, registerTypes, inst) {
        //call = [0,4] means the arguments refer to g[0] and g[4] 
        //callTypes is a new array of the types in those registers
        //so if g[0] holds an pointer and g[4] holds a pointer then
        //call = [0,4] => callTypes = [1,1]
        var callTypes = this.getCallTypes(call, registerTypes);

        var legal = inst.name;
        if (inst.legal !== undefined) {
            for (var k = 0; k < callTypes.length; k++) {
                if (callTypes[k] !== inst.legal[k]) {
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
fs.writeFileSync('../staticInstructions.c', '');
console.log('File overwritten');
fs.appendFileSync('../staticInstructions.c', CodeGenerator.getCode());
console.log('Code written to file');

//lookup table
fs.writeFileSync('../dynamicOpcodes.c', '');
console.log('File overwritten');
fs.appendFileSync('../dynamicOpcodes.c', CodeGenerator.getLookupTable());
console.log('Code written to file');

//opcode table
fs.writeFileSync('../staticOpcodes.rb', '');
console.log('File overwritten');
fs.appendFileSync('../staticOpcodes.rb', CodeGenerator.getOpcodes());
console.log('Code written to file');

//VM 1 - standard style VM
CodeGenerator.generate(1);
