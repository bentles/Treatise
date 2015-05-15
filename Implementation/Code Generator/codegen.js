/* Extend String to have a repeat function */
String.prototype.repeat = function( num )
{
    return new Array( num + 1 ).join( this );
};

/* convenience values
 * ==================
 */
// registers
var i = 0;
var p = 1;
var g = -1;
// VM types
var typeVM = 0; // the experiment, a type-state VM
var convVM = 1; // the control, a conventional VM
var hybrVM = 2; // no states but needn't decode operations
// functions that put constraints on legal calls
function noTrivialFor(arr) //if arr = [0, 1] then a call like add_0_0 is illegal
{
    return function(call) {
        return call[arr[0]] !== call[arr[1]];
    };
}

//convenience functions
function getConst(name, offset) {
    var offst = offset || 1; //this is fine since 0 is not valid anyway
    return 'int16_t d' + name + ' = program[pc +' + offst + '];\n' +
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
        callCondition: noTrivialFor([0,1]),
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
    //TODO customise div based on type state?
    {
        name: 'div',
        inputs: 2,
        callCondition: noTrivialFor([0,1]),
        instructions: [{
            name: 'div',
            pcChange: 1,
            legal: [i, i],
            template:
                'g[0].i = /*<0>*/.i % /*<1>*/.i;\n' +
            '/*<0>*/.i /= /*<1>*/.i;\n' +
                'g[0].tag = 0;\n' +
                'ts &= 0xF800;\n' 
        }]
    },
    {
        name: 'divc',
        inputs: 1,
        instructions: [{
            name: 'divc',
            pcChange: 2,
            legal: [i],
            template: getConst('constant') +
                'g[0].i = /*<0>*/.i % constant;\n' +
                '/*<0>*/.i /= constant;\n' +
                'g[0].tag = 0;\n' +
                'ts &= 0xF800;\n' 
        }]
    },
    {
        name: 'and',
        inputs: 2,
        callCondition: noTrivialFor([0,1]),
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
        callCondition: noTrivialFor([0,1]),
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
        callCondition: noTrivialFor([0,1]),
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
        callCondition: noTrivialFor([0,1]),
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
        callCondition: noTrivialFor([0,1]),
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
            template: 'int16_t constant = program[pc + 1];\n' +
                '/*<0>*/.i = (uint64_t)/*<0>*/.i >> constant;\n'
        }]
    },
    {
        name: 'cshr',
        inputs: 1,
        instructions: [{
            name: 'cshr',
            pcChange: 2,
            legal: [i],
            template: 'int16_t constant = program[pc + 1];\n' +
                '/*<0>*/.i = (uint64_t)constant >> /*<0>*/.i;\n'
        }]
    },
    {
        name: 'sar',
        inputs: 2,
        callCondition: noTrivialFor([0,1]),
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
            template: 'int16_t constant = program[pc + 1];\n' +
                '/*<0>*/.i >>= constant;\n'
        }]
    },
    {
        name: 'csar',
        inputs: 1,
        instructions: [{
            name: 'csar',
            pcChange: 2,
            legal: [i],
            template: 'int16_t constant = program[pc + 1];\n' +
                '/*<0>*/.i = constant >> /*<0>*/.i;\n'
        }]
    },
    {
        name: 'mov',
        inputs: 2,
        callCondition: noTrivialFor([0,1]),
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
                '/*<state:' + p + '>*/'
        }, {
            name: 'movpi',
            pcChange: 1,
            legal: [p, i],
            template: '/*<0>*/.i = /*<1>*/.i;\n' +
                '/*<tag+state:' + i + '>*/'
        }]
    },
    {
        name: 'movc',
        inputs: 1, 
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
                '/*<tag+state:' + i + '>*/'
        }]},
    {
        name: 'null',
        inputs: 1,
        instructions: [{
            name: 'movpn',
            pcChange: 1,
            legal: [p],
            template: '/*<0>*/.p = NULL;\n'
        }, {
            name: 'movin',
            pcChange: 1,
            legal: [i],
            template: '/*<0>*/.p = NULL;\n' +
                '/*<tag+state:' + p + '>*/'
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
                'if (val.tag != ' + i + ') {\n' +
                '/*<0>*/.tag = val.tag;\n' +
                '/*<state:' + p + '>*/' +
                '/*<0>*/.p = val.p;\n' +
                '}\n' +
                'else {\n' +
                '/*<0>*/.i = val.i;\n' +
                '}\n'
        }, {
            name: 'getlp',
            pcChange: 2,
            legal: [p],
            template: 'int16_t constant = program[pc + 1];\n' +
                'value val = fp[constant];\n' +
                'if (val.tag == ' + i + ') {\n' +
                '/*<tag+state:' + i + '>*/' +
                '/*<0>*/.i = val.i;\n' +
                '}\n' +
                'else {' +
                '/*<0>*/.tag = val.tag;\n' +
                '/*<0>*/.p = val.p;\n' +
                '}\n'
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
                'value* vp = fp + constant;\n' +
                '(*vp).tag = /*<0>*/.tag;\n' +
                '(*vp).i = /*<0>*/.i;\n'
        },
        {
            name: 'setlp',
            pcChange: 2,
            legal: [p],
            template: 'int16_t constant = program[pc + 1];\n' +
                'value* vp = fp + constant;\n' +
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
                    'if (val.tag != ' + i + ') {\n' +
                    '/*<0>*/.tag = val.tag;\n' +
                    '/*<state:' + p + '>*/' +
                    '/*<0>*/.p = val.p;\n' +
                    '}\n' +
                    'else {\n' +
                    '/*<0>*/.i = val.i;\n' +
                    '}\n' 
            },
            {
                name: 'getmp',
                pcChange: 2,
                legal: [p, p],
                template: 'int16_t constant = program[pc + 1];\n' +
                    'value val = ((object *)(/*<1>*/.p))->data[constant];\n' +
                    'if (val.tag == ' + i + ') {\n' +
                    '/*<tag+state:' + i + '>*/' +
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
        name: 'getb',
        inputs: 3,
        callCondition: noTrivialFor([1,2]),
        instructions: [
            {
                name: 'getb',
                pcChange: 1,
                legal: [i, p, i],
                template: 'uint8_t val = ((buffer *)(/*<1>*/.p))->data[/*<2>*/.i];\n' +
                    '/*<0>*/.i = val;\n'                
            },
            {
                name: 'getbp',
                pcChange: 1,
                legal: [p, p, i],
                template: 'uint8_t val = ((buffer *)(/*<1>*/.p))->data[/*<2>*/.i];\n' +
                    '/*<tag+state:' + i + '>*/' +
                    '/*<0>*/.i = val;\n'                
            },
        ]
    },
    {
        name: 'setb',
        inputs: 3,
        callCondition: noTrivialFor([0,1]),
        instructions: [
            {
                name: 'setb',
                pcChange: 1,
                legal: [p, i, i],
                template: 'buffer *base = (buffer *)(/*<0>*/.p);\n' +
                    'base->data[/*<1>*/.i] = /*<2>*/.i;\n'               
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
        name: 'swtch',
        inputs: 1,
        instructions: [{
            name: 'switch',
            legal: [i],
            template: 'int16_t tableSize = program[pc + 1];\n' +
                'if(/*<0>*/.i < 0 || /*<0>*/.i >= tableSize) {\n' +
                'int16_t defaultJump = program[pc + tableSize + 2];\n' +
                //tableSize gets us to one more than the elements in the table then + 1 to store tableSize's displacement
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
        callCondition: noTrivialFor([0,1]),
        instructions: [{
            name: 'jcmp',
            legal: [i, i],
            template: 'if (/*<0>*/.i < /*<1>*/.i)\n' +
                'pc += program[pc + 1];\n' +
                'else if(/*<0>*/.i == /*<1>*/.i)\n' +
                'pc += program[pc + 2];\n' +
                'else\n' +
                'pc += program[pc + 3];\n'
        }, {
            name: 'jeqp',
            legal: [p, p],
            template: 'if (/*<0>*/.p == /*<1>*/.p)\n' +
                'pc += program[pc + 1];\n' +
                'else\n' +
                'pc += program[pc + 2];\n'
        }, {
            name: 'jcmpft',
            pcChange: 4,
            legal: [p, i]
        }, {
            name: 'jcmpft',
            legal: [i, p],
            pcChange: 4,
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
            name: 'jcmpcft',
            pcChange: 5,
            legal: [p]
        }]
    },
    {
        name: 'jnullp',
        inputs: 1,
        callCondition: noTrivialFor([0,1]),
        instructions: [{
            name: 'jnullp',
            legal: [i],
            template: 'if (/*<0>*/.p == NULL)\n' +
                'pc += program[pc + 2];\n' +
                'else\n' +
                'pc += program[pc + 3];\n'
        }, {
            name: 'jcmpcft',
            legal: [p],
            pcChange: 5,
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
                'int64_t *sizep = (int64_t*)&program[newpc];\n' +
                'int64_t size = sizeof(stackframe) + sizeof(value) * (*sizep);\n' +
                'stackframe *base = (stackframe*)malloc(size);\n' +
                'if (base) {\n' +
                'base->fp = fp; base->pc = pc; base->ts = ts;\n' +
                'SaveRegisters(base->g);\n' +
                'value *newfp = base->l;\n' + 
                'memcpy(newfp, fp + program[pc + 2], program[pc + 3]*sizeof(value));\n' +
                'fp = newfp;\n' +
                'pc = newpc + 4;\n' +
                '}\n' +
                'else {\n' +
                'fprintf(stderr, "malloc failed");\n' +
                'return 1;\n' +
                '}\n'
        }]
    },
    {
        name: 'ret', 
        inputs: 0,
        instructions: [{
            name: 'ret', pcChange: 4,
            template:
            'stackframe *cur = (stackframe*)((size_t)fp - sizeof(stackframe));\n' +
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
            name: 'newp', pcChange: 1, legal: [g],
            template: getConst('size') +
                'object *base = (object*)malloc(sizeof(object) + sizeof(value)*size);\n' +
                'if (base) {\n' +
                'base->sf = MakeSizeAndFlags(size,0);\n' +
                '/*<0>*/.tag = 2;\n' +
                '/*<state:' + p + '>*/' +
                '/*<0>*/.p = base;\n'+
                '}\n' +
                'else {\n' +
                'fprintf(stderr, "malloc failed");\n' +
                'return 1;\n' +
                '}\n'
        }]
    },
    {
        name: 'newa',
        inputs: 2,
        callCondition: noTrivialFor([0,1]),
        instructions: [{
            name: 'newa', pcChange: 1, legal: [g, i],
            template:  
            'buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*/*<1>*/.i);\n' +
                'if (base) {\n' +
                'base->sf = MakeSizeAndFlags(/*<1>*/.i,0);\n' +
                '/*<0>*/.tag = 4;\n' +
                '/*<state:' + p + '>*/' +
                '/*<0>*/.p = base;\n' +
                '}\n' +
                'else {\n' +
                'fprintf(stderr, "malloc failed");\n' +
                'return 1;\n' +
                '}\n'
            
        }]
    },
    {
        name: 'err',
        inputs: 0,
        instructions: [{
            name: 'err', pcChange: 1, 
            template: getConst('errdisp') +
            'fprintf(stderr, "err case"); \n'
        }]
    },
    {
        name: 'in',
        inputs: 1,
        instructions: [{
            name: 'in', pcChange: 1,
            legal: [p],
            template:
                'buffer *bp = /*<0>*/.p;\n' +
                'int size = GetSize(bp->sf);\n' +
                'if (fgets(bp->data, size, stdin) == NULL) {\n' +
                '    if (feof(stdin))\n' +
                '        bp->data[0] = 3;\n' +
                '    else {\n' +
                '        fprintf(stderr, "input error");\n' +
                '        return 1;\n' +
                '    }\n' +
                '}\n' +
                'else {\n' +
                '    size_t ln = strlen(bp->data) - 1;\n' +
                "    if (bp->data[ln] == '\\n')\n" +
                "        bp->data[ln] = '\\0';\n"  +
                '}\n'
                
        }]
    },
    {
        name: 'out',
        inputs: 1,
        instructions: [{
            name: 'out', pcChange: 1,
            legal: [p],
            template: 'buffer *bp = /*<0>*/.p;\n' +
                'puts(bp->data);\n'
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
    this.opcodesize = opcodeSizeInBytes;
    this.lookuptable = [];
    this.opcodetable = [];
    this.numstates = Math.pow(numtypes, numregisters);
    this.instgenerators = [];
}

Generator.prototype = {
    init: function(vm) {
        this.code = '';
        if (vm === typeVM)                                            
            this.lookuptable = new Array(Math.pow(this.numtypes, this.numregisters) * //num of states
                                         Math.pow(2, this.opcodesize)); //num of possible opcodes per state
        else if (vm === convVM)
            this.lookuptable = new Array(lookups.length + statics.length);
        else if (vm === hybrVM)
            this.lookuptable = new Array(Math.pow(2, this.opcodesize));
    },
    generate: function(vm) {
        this.init(vm);
        //create generators and save code
        lookups.forEach(function(lookup) {
            var instGen = new InstructionGenerator(lookup, this.numregisters, this.numtypes, this.opcodesize);
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
        var numstates = (vm === convVM || vm === hybrVM) ? 1 : this.numstates;
        console.log(numstates);

        for (var state = 0; state < numstates; state++) {
            //lookup table per state
            var stateTable = [];
            
            this.instgenerators.forEach(
                function(generator) {
                    generator.genLookups(state, vm);

                    //only need to do this once not for every state
                    if (state === 0)
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
function InstructionGenerator(lookup, numregisters, numtypes, opcodeSizeInBytes) {
    this.numtypes = numtypes;
    this.numregisters = numregisters;
    this.numstates = Math.pow(numtypes, numregisters);
    this.opcodesize = opcodeSizeInBytes;
    this.lookup = lookup;

    this.constants = {};
    this.code = '';
    this.callables = this.getAllCallables();

    this.lookuptable = [];
}

InstructionGenerator.prototype = {
    genCode: function(vm) {
        var numCalls = Math.pow(this.numregisters, this.lookup.inputs); //6^2 usually

        if (vm === convVM)
        {
            this.code += this.lookup.name + ":\n";
            this.code += "{\n";
            //get args the old fashioned way
            this.code += this.getArgsFromInst();
            this.genVMCodeWithTypeChecking(vm);
            this.code += this.goto(vm);
            this.code += "}\n\n";    
        }
        else if (vm === hybrVM)
        {
            //iterate over all ways to call fn: add_0_0, add_0_1 etc...
            this.callables.forEach(function(call, i) {
                //write the code:
                //==============
                //write out label
                this.code += this.getLabel(this.lookup.name, call);
                this.code += '{\n';
                //we already know args from call                
                this.genVMCodeWithTypeChecking(vm, call);
                this.code += this.goto(vm);
                this.code += "}\n\n";    
            }, this);                    
            
        }
        else if (vm === typeVM)
        {        
            //iterate over different instructions
            this.lookup.instructions.forEach(function(inst) {
                if (inst.genCode !== false) {
                    //iterate over all ways to call fn: add_0_0, add_0_1 etc...
                    this.callables.forEach(function(call, i) {

                        //write the code:
                        //==============
                        //write out label
                        this.code += this.getLabel(inst.name, call);
                        this.code += '{\n';

                        //write instruction for arguments
                        //this includes state changes
                        this.code += this.substituteIntoTemplate(inst.template, vm, call);
                        //update pc
                        this.code += this.changePC(inst.pcChange);
                        //goto next instruction
                        this.code += this.goto(vm);
                        this.code += '}\n\n';
                    }, this);
                    
                }
            }, this);
        }      
    },

    genVMCodeWithTypeChecking: function(vm, call)
    {
        var ifpart = '';
        
        //check for unfussy instructions or those without inputs
        if (this.lookup.inputs === 0 ||this.lookup.instructions[0].legal.every(function(x){ return x === g; }))
        {
            //write them out without type checking
            //NB: call is undefined if VM is conv
            this.code += this.substituteIntoTemplate(this.lookup.instructions[0].template, vm, call);
            this.code += this.changePC(this.lookup.instructions[0].pcChange);
        }
        else
        {
            this.lookup.instructions.forEach(function(inst){
                ifpart = (ifpart === '')? 'if ' :'else if ';                
                this.code += ifpart + this.getConvenTypeCheck(inst) + ' {\n' ;
                //NB: call is undefined if VM is conv
                this.code += this.substituteIntoTemplate(inst.template, vm, call);
                this.code += this.changePC(inst.pcChange);
                this.code += '}\n';                
            }, this);

            this.code += 'else {\n';
            this.code += 'fprintf(stderr, "type error, illegal types used for instruction: '+ this.lookup.name +'");\n';
            this.code += 'return 1;\n';
            this.code += '}\n';
        }
    },

    getConvenTypeCheck: function(inst)
    {
        var legals = inst.legal.map(function(legl, index){
            if (legl === i)
                return 'IsInt(g[arg' + index + '])';
            else
                return 'IsPointer(g[arg' + index + '])';            
        });
        
        return '(' + legals.join([seperator = ' && ']) + ')' ;        
    },

    goto: function(vm) {
        if (vm === typeVM || vm === hybrVM)
            return 'goto *dynOpcodes[ts + program[pc]];\n';
        else if (vm === convVM)
            return 'goto *dynOpcodes[GetOpcode(program[pc])];\n';
        else throw "Illegal VM type";
    },

    //generate the lookup table for all instructions for a given state
    genLookups: function(state, vm) {
        if (vm === typeVM || vm === hybrVM)
        {
            //fill lookup table with &&error
            var k = 0;
            while (k < this.callables.length) {
                this.lookuptable[k] = '&&error';
                k++;
            }

            var stateRegisters = this.stateToBase(state, this.numtypes, this.numregisters);
            var lookup;
            this.lookup.instructions.forEach(function(inst) {
                this.callables.forEach(function(call, i) {
                    if (vm === typeVM)
                        lookup = this.isLegal(call, stateRegisters, inst);
                    else if (vm === hybrVM)
                        lookup = this.lookup.name;                        
                    if (lookup)               
                        this.lookuptable[i] = this.getLookupAddress(lookup, call);
                    
                }, this);
            }, this);
        }
        else if (vm === convVM)
            this.lookuptable = ['&&' + this.lookup.name];     
    },

    getArgsFromInst: function(inst) {
        var args = '';
        for (var i = 0; i < this.lookup.inputs; i++) {
            args += 'int16_t arg' + i +' = GetArg' + i + '(program[pc]);\n';
        }
        return args;
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

    changeState: function (index, type)
    {
        var bitMask = ''; //not really a bitmask
        var hexMask = '';
        var andoperator = false;
        
        if (type === 0) {
            andoperator = true;
            bitMask = '1'.repeat(6);
            bitMask = bitMask.slice(0, index) + '0' + bitMask.slice(index + 1);
        } else {
            bitMask = '0'.repeat(6);
            bitMask = bitMask.slice(0, index) + '1' + bitMask.slice(index + 1);
        }

        hexMask += parseInt(bitMask + '0'.repeat(this.opcodesize), 2).toString(16);
        //Set the Tag and edit the state
        return (andoperator? 'ts &= 0x' : 'ts |= 0x') + hexMask + ' /*' + bitMask + '*/';
    },

    changePC: function(pcChange) {
        if (!pcChange)
            return '';
        else
            return pcChange === 1 ? 'pc++;\n' : 'pc += ' + pcChange + ';\n';
    },

    //TODO: Implement this in a more generic, modular way so that it could potentially be updated
    substituteIntoTemplate: function(template, vm, call) {
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
                subbedString = findAndReplace(token, subbedString, '/*<tag:' + j + '>*/' + '/*<state:' + j + '>*/');

                //replace /*<tag:0>*/ with g[0].tag = 0;\n
                token = '/*<tag:' + j + '>*/';
                subbedString = findAndReplace(token, subbedString, '/*<0>*/.tag = ' + j + ';\n');

                //replace /*<state:0>*/ with ts &= or |=
                token = '/*<state:' + j + '>*/';
                if (vm === typeVM)
                    subbedString = findAndReplace(token, subbedString, this.changeState(call[0], j) + ';\n');
                else if (vm === convVM || vm === hybrVM)
                    subbedString = findAndReplace(token, subbedString, ''); //remove state changes

                //replace /*<state:0:1>*/ with ts &= 101111
                for(var k = 0; k < this.numregisters; k++) {
                    token = '/*<state:' + j + ':' + k +'>*/';

                    if (vm === typeVM)                    
                        subbedString = findAndReplace(token, subbedString, 'ts ' + this.changeState(k,j));                    
                    else if (vm === convVM || vm === hybrVM)
                        subbedString = findAndReplace(token, subbedString, ''); //remove state changes
                }
            }

            //replace /*<0>*/, /*<1>*/ etc with g[0], g[1]
            for (var i = 0; i < this.lookup.inputs; i++) {
                token = '/*<' + i + '>*/';
                if (vm === typeVM || vm === hybrVM)
                    subbedString = findAndReplace(token, subbedString, 'g[' + call[i] + ']');
                else if (vm === convVM)
                    subbedString = findAndReplace(token, subbedString, 'g[arg' + i + ']');
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
                if (inst.legal[k] !== g && callTypes[k] !== inst.legal[k]) {
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

var names = ['type state VM','conventional VM', 'hybrid VM'];
var suffixes = ['', 'Conv', 'Hybr'];
for (var n = 2; n < 3; n++)
{
    //Generate VM
    CodeGenerator.generate(n);

    //Get and Save Code
    fs.writeFileSync('../staticInstructions' + suffixes[n] +'.c', '');
    console.log('File overwritten - ' + names[n]);
    fs.appendFileSync('../staticInstructions' + suffixes[n] +'.c', CodeGenerator.getCode());
    console.log('Code written to file - ' + names[n]);

    //Get and save Lookup Table
    fs.writeFileSync('../dynamicOpcodes' + suffixes[n] + '.c', '');
    console.log('File overwritten - ' + names[n]);
    fs.appendFileSync('../dynamicOpcodes' + suffixes[n] + '.c', CodeGenerator.getLookupTable());
    console.log('Code written to file - ' + names[n]);
}

//opcode table
fs.writeFileSync('../staticOpcodes.rb', '');
console.log('File overwritten');
fs.appendFileSync('../staticOpcodes.rb', CodeGenerator.getOpcodes());
console.log('Code written to file');
