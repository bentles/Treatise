
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
    return 'int16_t d' + name + ' = *(ip +' + offst + ');\n' +
        'int64_t ' + name + ' = *((int64_t*)(ip + d' + name + '));\n';
}

var lookups = 
[
    {
        name: 'add',
        inputs: 2,
        instructions: [{
            name: 'add',
            ipChange: 1,
            legal: [i, i],
            template: '/*<0>*/.i += /*<1>*/.i;\n'
        }]
    },    
    {
        name: 'addc',
        inputs: 1,
        instructions: [{
            name: 'addc',
            ipChange: 2,
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
            ipChange: 1,
            legal: [i, i],
            template: '/*<0>*/.i -= /*<1>*/.i;\n'
        }]
    },
    {
        name: 'csub',
        inputs: 1,
        instructions: [{
            name: 'csub',
            ipChange: 2,
            legal: [i],
            template: getConst('constant') + '/*<0>*/.i = constant - /*<0>*/.i;\n'
        }]
    },
    {
        name: 'mul',
        inputs: 2,
        instructions: [{
            name: 'mul',
            ipChange: 1,
            legal: [i, i],
            template: '/*<0>*/.i *= /*<1>*/.i;\n'
        }]
    },
    {
        name: 'mulc',
        inputs: 1,
        instructions: [{
            name: 'mulc',
            ipChange: 2,
            legal: [i],
            template: getConst('constant') + '/*<0>*/.i *= constant;\n'
        }]
    },
    {
        name: 'div',
        inputs: 2,
        callCondition: noTrivialFor([0,1]),
        instructions: [{
            name: 'div',
            ipChange: 1,
            legal: [i, i],
            template:
            'int64_t divtemp = /*<0>*/.i / /*<1>*/.i;\n' +
                'int64_t modtemp = /*<0>*/.i % /*<1>*/.i;\n' +
                'g[0].i = modtemp;\n' +
                'g[0].tag = 0;\n' +
                '/*<0>*/.i = divtemp;\n' +
                '/*<state:0:0>*/' 
        }]
    },
    {
        name: 'divc',
        inputs: 1,
        instructions: [{
            name: 'divc',
            ipChange: 2,
            legal: [i],
            template: getConst('constant') +
                'int64_t divtemp = /*<0>*/.i / constant;\n' +
                'int64_t modtemp = /*<0>*/.i % constant;\n' +
                'g[0].i = modtemp;\n' +
                'g[0].tag = 0;\n' +
                '/*<0>*/.i = divtemp;\n' +
                '/*<state:0:0>*/' 
        }]
    },
    {
        name: 'and',
        inputs: 2,
        callCondition: noTrivialFor([0,1]),
        instructions: [{
            name: 'and',
            ipChange: 1,
            legal: [i, i],
            template: '/*<0>*/.i &= /*<1>*/.i;\n'
        }]
    },
    {
        name: 'andc',
        inputs: 1,
        instructions: [{
            name: 'andc',
            ipChange: 2,
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
            ipChange: 1,
            legal: [i, i],
            template: '/*<0>*/.i |= /*<1>*/.i;\n'
        }]
    },
    {
        name: 'orc',
        inputs: 1,
        instructions: [{
            name: 'orc',
            ipChange: 2,
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
            ipChange: 1,
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
            ipChange: 1,
            legal: [i, i],
            template: '/*<0>*/.i <<= /*<1>*/.i;\n'
        }]
    },
    {
        name: 'shlc',
        inputs: 1,
        instructions: [{
            name: 'shlc',
            ipChange: 2,
            legal: [i],
            template: 'int16_t constant = *(ip + 1);\n' + '/*<0>*/.i <<= constant;\n'
        }]
    },
    {
        name: 'cshl',
        inputs: 1,
        instructions: [{
            name: 'cshl',
            ipChange: 2,
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
            ipChange: 1,
            legal: [i, i],
            template: '/*<0>*/.i = (int64_t)((uint64_t)/*<0>*/.i >> /*<0>*/.i);\n'
        }]
    },
    {
        name: 'shrc',
        inputs: 1,
        instructions: [{
            name: 'shrc',
            ipChange: 2,
            legal: [i],
            template: 'int16_t constant = *(ip + 1);\n' +
                '/*<0>*/.i = (int64_t)((uint64_t)/*<0>*/.i >> constant);\n'
        }]
    },
    {
        name: 'cshr',
        inputs: 1,
        instructions: [{
            name: 'cshr',
            ipChange: 2,
            legal: [i],
            template: 'int16_t constant = *(ip + 1);\n' +
                '/*<0>*/.i = (uint64_t)constant >> /*<0>*/.i;\n'
        }]
    },
    {
        name: 'sar',
        inputs: 2,
        callCondition: noTrivialFor([0,1]),
        instructions: [{
            name: 'sar',
            ipChange: 1,
            legal: [i, i],
            template: '/*<0>*/.i >>= /*<1>*/.i;\n'
        }]
    },
    {
        name: 'sarc',
        inputs: 1,
        instructions: [{
            name: 'sarc',
            ipChange: 2,
            legal: [i],
            template: 'int16_t constant = *(ip + 1);\n' +
                '/*<0>*/.i >>= constant;\n'
        }]
    },
    {
        name: 'csar',
        inputs: 1,
        instructions: [{
            name: 'csar',
            ipChange: 2,
            legal: [i],
            template: 'int16_t constant = *(ip + 1);\n' +
                '/*<0>*/.i = constant >> /*<0>*/.i;\n'
        }]
    },
    {
        name: 'mov',
        inputs: 2,
        callCondition: noTrivialFor([0,1]),
        instructions: [{
            name: 'movii',
            ipChange: 1,
            legal: [i, i],
            template: '/*<0>*/.i = /*<1>*/.i;\n'
        }, {
            name: 'movpp',
            ipChange: 1,
            legal: [p, p],
            template: '/*<0>*/.tag = /*<1>*/.tag;\n' +
            '/*<0>*/.p = /*<1>*/.p;\n'
        }, {
            name: 'movip',
            ipChange: 1,
            legal: [i, p],
            template: '/*<0>*/.p = /*<1>*/.p;\n' +
                '/*<0>*/.tag = /*<1>*/.tag;\n' +
                '/*<state:' + p + '>*/'
        }, {
            name: 'movpi',
            ipChange: 1,
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
            ipChange: 2,
            legal: [i],
            template: getConst('constant') + '/*<0>*/.i = constant;\n'
        }, {
            name: 'movpc',
            ipChange: 2,
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
            ipChange: 1,
            legal: [p],
            template: '/*<0>*/.p = NULL;\n'
        }, {
            name: 'movin',
            ipChange: 1,
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
            ipChange: 2,
            legal: [i],
            template: 'int16_t constant = *(ip + 1);\n' +
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
            ipChange: 2,
            legal: [p],
            template: 'int16_t constant = *(ip + 1);\n' +
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
            ipChange: 2,
            legal: [i],            
            
            template: 'int16_t constant = *(ip + 1);\n' +
                'value* vp = fp + constant;\n' +
                '(*vp).tag = /*<0>*/.tag;\n' +
                '(*vp).i = /*<0>*/.i;\n'
        },
        {
            name: 'setlp',
            ipChange: 2,
            legal: [p],
            template: 'int16_t constant = *(ip + 1);\n' +
                'value* vp = fp + constant;\n' +
                '(*vp).tag = /*<0>*/.tag;\n' +
                '(*vp).p = /*<0>*/.p;\n'
        }]
    },
    {
        name: 'geto',
        inputs: 3,
        callCondition: noTrivialFor([1,2]),
        instructions: [
            {
                name: 'geto',
                ipChange: 1,
                legal: [i, p, i],
                template: 
                    'value val = ((object *)(/*<1>*/.p))->data[/*<2>*/.i];\n' +
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
                name: 'getop',
                ipChange: 1,
                legal: [p, p, i],
                template: 
                    'value val = ((object *)(/*<1>*/.p))->data[/*<2>*/.i];\n' +
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
        name: 'seto',
        inputs: 3,
        callCondition: noTrivialFor([0,1]),
        instructions: [
            {
                name: 'seto',
                ipChange: 1,
                legal: [p, i, i], 
                template: 
                    'value *vp = &(((object *)(/*<0>*/.p))->data[/*<1>*/.i]);\n' +
                    'vp->tag ='+ i +';\n' +
                    'vp->i = /*<2>*/.i;\n'
            },
            {
                name: 'setop',
                ipChange: 1,
                legal: [p, i, p],
                template: 
                    'value *vp = &(((object *)(/*<0>*/.p))->data[/*<1>*/.i]);\n' +
                    'vp->tag = /*<2>*/.tag;\n' +
                    'vp->p = /*<2>*/.p;\n'
            }]
    },    
    {
        name: 'getb',
        inputs: 3,
        callCondition: noTrivialFor([1,2]),
        instructions: [
            {
                name: 'getb',
                ipChange: 1,
                legal: [i, p, i],
                template: 'uint8_t val = ((buffer *)(/*<1>*/.p))->data[/*<2>*/.i];\n' +
                    '/*<0>*/.i = val;\n'                
            },
            {
                name: 'getbp',
                ipChange: 1,
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
                ipChange: 1,
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
            template: 'ip += *(ip+1);\n'
        }]
    }, {
        name: 'jmpf',
        inputs: 0,
        instructions: [{
            name: 'jmpf',
            template: getConst('constant') +
                'ip += constant;\n'
        }]
    }, {
        name: 'swtch',
        inputs: 1,
        instructions: [{
            name: 'switch',
            legal: [i],
            template: 'int16_t tableSize = *(ip + 1);\n' +
                'if(/*<0>*/.i < 0 || /*<0>*/.i >= tableSize) {\n' +
                'int16_t defaultJump = *(ip + tableSize + 2);\n' +
                //tableSize gets us to one more than the elements in the table then + 1 to store tableSize's displacement
                'ip += defaultJump;\n' +
                '}\n' +
                'else {\n' +
                'int16_t jump = *(ip + /*<0>*/.i + 2);\n' +
                'ip += jump;\n ' + //index into the table
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
                'ip += *(ip + 1);\n' +
                'else if(/*<0>*/.i == /*<1>*/.i)\n' +
                'ip += *(ip + 2);\n' +
                'else\n' +
                'ip += *(ip + 3);\n'
        }, {
            name: 'jeqp',
            legal: [p, p],
            template: 'if (/*<0>*/.p == /*<1>*/.p)\n' +
                'ip += *(ip + 1);\n' +
                'else\n' +
                'ip += *(ip + 2);\n'
        }, {
            name: 'jcmpft',
            ipChange: 4,
            legal: [p, i]
        }, {
            name: 'jcmpft',
            legal: [i, p],
            ipChange: 4,
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
                'ip += *(ip + 2);\n' +
                'else if(/*<0>*/.i == constant)\n' +
                'ip += *(ip + 3);\n' +
                'else\n' +
                'ip += *(ip + 4);\n'
        }, {
            name: 'jcmpcft',
            ipChange: 5,
            legal: [p]
        }]
    },
    {
        name: 'jnullp',
        inputs: 1,
        instructions: [{
            name: 'jnullp',
            legal: [p],
            template: 'if (/*<0>*/.p != NULL)\n' +
                'ip += *(ip + 1);\n' +
                'else\n' +
                'ip += *(ip + 2);\n'
        }, {
            name: 'jcmpcft',
            legal: [i],
            ipChange: 5,
            genCode: false
        }]
    },
    {
        name: 'call',
        inputs: 0,
        instructions: [{
            name: 'call',
            template: 
            'int16_t *newip = ip + *(ip + 1);\n' +
                'int64_t *sizep = (int64_t*)newip;\n' +
                'int64_t size = sizeof(stackframe) + sizeof(value) * (*sizep);\n' +
                'stackframe *base = (stackframe*)malloc(size);\n' +
                'if (base) {\n' +
                'base->fp = fp; base->ip = ip; base->ts = ts;\n' +
                'SaveRegisters(base->g, g);\n' +
                'value *newfp = base->l;\n' + 
                'memcpy(newfp, fp + *(ip + 2), *(ip + 3)*sizeof(value));\n' +
                'fp = newfp;\n' +
                'ip = newip + 4;\n' +
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
            name: 'ret', ipChange: 4,
            template:
            'stackframe *cur = (stackframe*)((size_t)fp - sizeof(stackframe));\n' +
                'fp = cur->fp; ip = cur->ip;' +
                'RestoreTS(cur->ts, ts);\n' +
                'RestoreRegisters(cur->g, g);\n' +                
                'free(cur);\n' +             
                'if (fp == NULL)\n' +
                '{\n' +
                '    #ifdef STATS\n' +
                '    writeStats(argv[1]);\n' +
                '    #endif /* STATS */\n' +
                '    return 0;\n' +
                '}\n' 
        }]
    },
    {
        name: 'newo',
        inputs: 2,
        callCondition: noTrivialFor([0,1]),
        instructions: [{
            name: 'newo', ipChange: 1, legal: [g,i],
            template:
                'object *base = (object*)malloc(sizeof(object) + sizeof(value)* /*<1>*/.i);\n' +
                'if (base) {\n' +
                'base->sf = MakeSizeAndFlags(/*<1>*/.i,0);\n' +
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
        name: 'newb',
        inputs: 2,
        callCondition: noTrivialFor([0,1]),
        instructions: [{
            name: 'newb', ipChange: 1, legal: [g, i],
            template:  
            'buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*/*<1>*/.i);\n' +
                'if (base) {\n' +
                '    base->sf = MakeSizeAndFlags(/*<1>*/.i,0);\n' +
                '    /*<0>*/.tag = 4;\n' +
                '    /*<state:' + p + '>*/' +
                '    /*<0>*/.p = base;\n' +
                '}\n' +
                'else {\n' +
                '    fprintf(stderr, "malloc failed");\n' +
                '    return 1;\n' +
                '}\n'
            
        }]
    },
    {
        name: 'movsc',
        inputs: 1,
        instructions: [
            {
                name: 'movsc', ipChange: 2, legal: [g],
                template:
                getConst('constant') +
                    'buffer *base = (buffer*)malloc(sizeof(buffer) + sizeof(int8_t)*constant);\n' +
                    'if (base) {\n' +
                    '    base->sf = MakeSizeAndFlags(constant,0);\n' +
                    '    strcpy((int8_t *)&(base->data) ,(int8_t *)(ip + dconstant + 4));\n' +
                    '    /*<0>*/.tag = 4;\n' +
                    '    /*<state:' + p + '>*/' +
                    '    /*<0>*/.p = base;\n' +
                    '}\n' +
                    'else {\n' +
                    '    fprintf(stderr, "malloc failed");\n' +
                    '    return 1;\n' +
                    '}\n'
            }

        ]
    },
    {
        name: 'err',
        inputs: 0,
        instructions: [{
            name: 'err', ipChange: 1, 
            template: getConst('errdisp') +
            'printf("0:%d 1:%d 2:%d 3:%d 4:%d 5:%d\\n", g[0].i, g[1].i, g[2].i, g[3].i, \
 g[4].i, g[5].i); \n'
        }]
    },
    {
        name: 'in',
        inputs: 1,
        instructions: [{
            name: 'in', ipChange: 1,
            legal: [p],
            template:
                'buffer *bp = /*<0>*/.p;\n' +
                'int size = GetSize(bp->sf);\n' +
                'if (fgets(bp->data, size, stdin) == NULL) {\n' +
                '    if (feof(stdin))\n' +
                '        bp->data[0] = 0;\n' +
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
            name: 'out', ipChange: 1,
            legal: [p],
            template: 'buffer *bp = /*<0>*/.p;\n' +
                'fwrite(bp->data, sizeof(int8_t), GetSize(bp->sf), stdout);\n'
        }]
    },
    {
        name: 'print',
        inputs: 1,
        instructions: [
            {
                name: 'printp', ipChange: 1,
                legal: [p],
                template: 'buffer *bp = /*<0>*/.p;\n' +
                    'puts(bp->data);\n'
            },
            {
                name: 'print', ipChange: 1,
                legal: [i],
                template: 'printf("%lld\\n", /*<0>*/.i);\n'
            }
        ]
    }
];
var statics = [
    'error:\n' +
        '{\n' +
        'fprintf(stdout, "Error");\n' +
        'return 1;\n' +
        '}\n\n',

    'undefined:\n' +
        '{\n' +
        'fprintf(stdout,"undefined");\n' +
        'return 1;\n' +
        '}\n\n'
];

var numTypes = 2;
var numRegisters = 6;
var opcodeSizeInBytes = 11;

function Generator(lookups, statics, numregisters, numtypes, opcodeSizeInBytes) {
    this.code = '';
    this.names = '';
    this.numopcodes = 0;
    this.numregisters = numregisters;
    this.numtypes = numtypes;
    this.numstates = Math.pow(numtypes, numregisters);
    this.opcodesize = opcodeSizeInBytes;
    this.lookuptable = [];
    this.opcodetable = [];
    this.instgenerators = [];
}

Generator.prototype = {
    init: function(vm) {
        this.code = '';
        this.names = '';
        this.numopcodes = 0;
        this.opcodetable = [];
        this.instgenerators = [];
        if (vm === typeVM) {                                          
            //num of states * num of possible opcodes per state
            this.lookuptable = new Array(Math.pow(this.numtypes, this.numregisters) *
                                         Math.pow(2, this.opcodesize));
        }
        else if (vm === convVM)
            this.lookuptable = new Array(lookups.length + statics.length);
        else if (vm === hybrVM)
            this.lookuptable = new Array(Math.pow(2, this.opcodesize));
    },
    generate: function(vm) {
        this.init(vm);
        //create generators and save code
        var index = 0;
        
        lookups.forEach(function(lookup) {
            var instGen = new InstructionGenerator(lookup,
                                                   this.numregisters,
                                                   this.numtypes,
                                                   this.opcodesize);            
            instGen.genCode(vm, index);
            this.code += instGen.code;
            this.names += instGen.names;
            index = instGen.index;
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

        for (var state = 0; state < numstates; state++) {
            //lookup table per state
            var stateTable = [];
            
            this.instgenerators.forEach(
                function(generator) {
                    generator.genLookups(state, vm);

                    //only need to do this once not for every state, only for type VM
                    if (state === 0 && vm === typeVM)                    
                        this.opcodetable.push("'" + generator.lookup.name+ "'" + ' => '
                                              + stateTable.length);

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
    },
    getNames: function() {
        return this.names + '(Counter){"", 0}';
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
    this.names = '';
    this.index = 0;
    this.callables = this.getAllCallables();

    this.lookuptable = [];
}

InstructionGenerator.prototype = {
    genCode: function(vm, index) {
        this.index = index || 0;
        
        var numCalls = Math.pow(this.numregisters, this.lookup.inputs); //6^2 usually

        if (vm === convVM) {
            //stats
            this.names += '(Counter){"' +
                this.lookup.name + '",0},\n';

            //code            
            this.code += this.lookup.name + ':\n';
            this.code += '{\n';
            //get args the old fashioned way
            this.code += this.getArgsFromInst();
            this.genVMCodeWithTypeChecking(vm);
            
            this.code += this.getStatsCode();
            this.index++;
            
            this.code += this.goto(vm);            
            this.code += '}\n\n';    
        }
        else if (vm === hybrVM) {
            //iterate over all ways to call fn: add_0_0, add_0_1 etc...
            this.callables.forEach(function(call, i) {
                //stats
                this.names += '(Counter){"' +
                    this.getStaticInstructionName(this.lookup.name, call) + '",0},\n';

                //code
                //write out label
                this.code += this.getLabel(this.lookup.name, call);
                this.code += '{\n';
                //we already know args from call                
                this.genVMCodeWithTypeChecking(vm, call);

                //generate code for getting usage stats
                this.code += this.getStatsCode();
                this.index++;                

                this.code += this.goto(vm);
                this.code += '}\n\n';    
            }, this);                    
            
        }
        else if (vm === typeVM) {        
            //iterate over different instructions
            this.lookup.instructions.forEach(function(inst) {
                if (inst.genCode !== false) {
                    //iterate over all ways to call fn: add_0_0, add_0_1 etc...
                    this.callables.forEach(function(call, i) {
                        //stats
                        this.names += '(Counter){"' +
                            this.getStaticInstructionName(inst.name, call) + '",0},\n';

                        //code
                        //write out label
                        this.code += this.getLabel(inst.name, call);
                        this.code += '{\n';

                        //write instruction for arguments
                        //this includes state changes
                        this.code += this.substituteIntoTemplate(inst.template, vm, call);
                        //update ip
                        this.code += this.changeIP(inst.ipChange);

                        this.code += this.getStatsCode();
                        this.index++;
                        
                        //goto next instruction
                        this.code += this.goto(vm);
                        this.code += '}\n\n';
                    }, this);
                    
                }
            }, this);
        }      
    },

    genVMCodeWithTypeChecking: function(vm, call) {
        var ifpart = '';
        
        //check for unfussy instructions or those without inputs
        if (this.lookup.inputs === 0 ||this.lookup.instructions[0].legal.every(
            function(x){ return x === g; }))
        {
            //write them out without type checking
            //NB: call is undefined if VM is conv
            this.code += this.substituteIntoTemplate(this.lookup.instructions[0].template,
                                                     vm, call);
            this.code += this.changeIP(this.lookup.instructions[0].ipChange);
        }
        else
        {
            this.lookup.instructions.forEach(function(inst) {
                ifpart = (ifpart === '')? 'if ' :'else if ';                
                this.code += ifpart + this.getTypeCheck(inst, vm, call) + ' {\n' ;
                //NB: call is undefined if VM is conv
                this.code += this.substituteIntoTemplate(inst.template, vm, call);
                this.code += this.changeIP(inst.ipChange);
                this.code += '}\n';                
            }, this);

            this.code += 'else {\n';
            this.code += 'fprintf(stderr, "type error, illegal types used for instruction: '
                + this.lookup.name +'");\n';
            this.code += 'return 1;\n';
            this.code += '}\n';
        }
    },

    getStatsCode: function()
    {
        var code = '#ifdef STATS\n';
        code += 'opcodeCounters[' + this.index + '].count++;\n';
        code += '#endif /* STATS */\n';
        return code;
    },

    getTypeCheck: function(inst, vm, call) {
        if (vm !== convVM && vm !== hybrVM) {
            throw "Illegal VM type for type checking";
        }
        
        var legals = inst.legal.map(function(legl, index){
            if (legl === g)
                return false; 
            else if (legl === i)
                return 'IsInt(g[' + ((vm === convVM) ? 'arg' + index : '' + call[index]) + '])';
            else
                return 'IsPointer(g[' + ((vm === convVM) ? 'arg' + index : '' + call[index]) +
                '])';     
        });
        
        legals = legals.filter(function(x){return x;});
        return '(' + legals.join([seperator = ' && ']) + ')' ;        
    },

    goto: function(vm) {
        if (vm === typeVM)
            return 'goto *dynOpcodes[ts + *ip];\n';
        else if (vm === hybrVM)
            return 'goto *dynOpcodes[*ip];\n';
        else if (vm === convVM)
            return 'goto *dynOpcodes[GetOpcode(*ip)];\n';
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
            args += 'int16_t arg' + i +' = GetArg' + i + '(*ip);\n';
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
                call[k] = Math.floor(i / Math.pow(this.numregisters, numinputs - k - 1)) %
                    this.numregisters;
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

        var debugStart = '#ifdef STATS\n' +
                'int64_t prevts = ts;\n' +
                '#endif\n';
        
        var tsUpdate = (andoperator? 'ts &= 0x' : 'ts |= 0x') + hexMask + '; /*' + bitMask + '*/\n';

        //if the state actually changed, increment counters
        var debugEnd = '#ifdef STATS\n' +
                'if (prevts != ts) {\n' +
                '    stateCounters[ts >> 11]++;\n' +
                '    stateSwitches++;\n' +
                '}\n' +
                '#endif\n';
        
        return debugStart + tsUpdate + debugEnd;
    },

    changeIP: function(ipChange) {
        if (!ipChange)
            return '';
        else
            return ipChange === 1 ? 'ip++;\n' : 'ip += ' + ipChange + ';\n';
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
                subbedString = findAndReplace(token, subbedString, '/*<tag:' + j + '>*/' +
                                              '/*<state:' + j + '>*/');

                //replace /*<tag:0>*/ with g[0].tag = 0;\n
                token = '/*<tag:' + j + '>*/';
                subbedString = findAndReplace(token, subbedString, '/*<0>*/.tag = ' + j + ';\n');

                //replace /*<state:0>*/ with ts &= or |=
                token = '/*<state:' + j + '>*/';
                if (vm === typeVM)
                    subbedString = findAndReplace(token, subbedString,
                                                  this.changeState(call[0], j));
                else if (vm === convVM || vm === hybrVM)
                    subbedString = findAndReplace(token, subbedString, ''); //remove state changes

                //replace /*<state:0:1>*/ with ts &= 101111
                for(var k = 0; k < this.numregisters; k++) {
                    token = '/*<state:' + j + ':' + k +'>*/';

                    if (vm === typeVM) {                    
                        subbedString = findAndReplace(token, subbedString, this.changeState(k,j));
                    }
                    else if (vm === convVM || vm === hybrVM) {
                        subbedString = findAndReplace(token, subbedString, '');
                        //remove state changes
                    }
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
for (var n = 0; n < 3; n++)
{
    console.log('\n');
    console.log('generating for ' + names[n] + ':\n==========================================');

    //Generate VM
    CodeGenerator.generate(n);

    //Get and Save Code
    fs.writeFileSync('../Generated/staticInstructions' + suffixes[n] +'.c', '');
    fs.appendFileSync('../Generated/staticInstructions' + suffixes[n] +'.c', CodeGenerator.getCode());
    console.log('Code written to file: static instructions - ' + names[n]);

    //Save Stats    
    fs.writeFileSync('../Generated/stats' + suffixes[n] +'.c', '');
    fs.appendFileSync('../Generated/stats' + suffixes[n] +'.c', CodeGenerator.getNames());
    console.log('Code written to file: opcode names - ' + names[n]);
    
    //Get and save Lookup Table
    fs.writeFileSync('../Generated/dynamicOpcodes' + suffixes[n] + '.c', '');
    fs.appendFileSync('../Generated/dynamicOpcodes' + suffixes[n] + '.c', CodeGenerator.getLookupTable());
    console.log('Code written to file: lookup table - ' + names[n]);
}

console.log('\n');
CodeGenerator.generate(typeVM);
console.log('generating table for use with assembler:\n==========================================');
//opcode table
fs.writeFileSync('../Generated/staticOpcodes.rb', '');
console.log('File overwritten');
fs.appendFileSync('../Generated/staticOpcodes.rb', CodeGenerator.getOpcodes());
console.log('Code written to file');
