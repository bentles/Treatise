#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <inttypes.h>
#include <string.h>
#include "datatypes.h"
#include "standardvm.h"
#include "stackframe.h"

#ifdef STATS
#include "stats.h"
#endif /* STATS */

/* Opcode Layout for Standard VM
 * =============================
 *  15        15  14           9  8          6  5          3  2          0
 * [empty: 1 bit][opcode: 6 bits][arg2: 3 bits][arg1: 3 bits][arg0: 3 bits]
 */

/* Registers
 * =========
 * [0..5] g0 through g5 - general purpose registers
 * ip - instruction pointer
 * fp - frame pointer
 * ts - type state
 */

#define NR_REGISTERS 6
#define REG_SAVE 56
    
value g[NR_REGISTERS]; //init to 0 valued ints
int16_t *ip;
value *fp; //= NULL; points to top of frame - an array of local values
int64_t ts = 0; //matches what registers are init to

int main(int argc, char *argv[])
{
    //init stateSwitches variable
#ifdef STATS
    stateSwitches = 0;
#endif /* STATS */
    
	//state with static opcode as lower bits is an index into this table
	//[state : 6 bits][opcode : 11 bits] => the table has max 2^17 = 131072
	//elements
	static void *dynOpcodes[] = {
#ifdef TYPE
#include "../Generated/dynamicOpcodes.c"
#endif /*TYPE*/
#ifdef CONV
#include "../Generated/dynamicOpcodesConv.c"
#endif /*CONV*/
#ifdef HYBR
#include "../Generated/dynamicOpcodesHybr.c"
#endif /*HYBR*/
    };

    //Handle args and read in binary file
    if (argc < 2)
    {
        fprintf(stderr, "Usage:\n  vm name.out\n");
        return 1;
    }
    
    FILE *filep = fopen(argv[1], "rb");
    if (filep == NULL)
    {
        fprintf(stderr, "Unable to open file");
        return 1;
    }
    int a = fseek(filep, 0L, SEEK_END);
    int size = ftell(filep);
    fseek(filep, 0L, SEEK_SET);
    
    int16_t program[size/2];
    
    fread(program, 2, size/2, filep);
    fclose(filep);

    /*Initial call (main)*/
    ip = &program[0];
    int64_t *sizep = (int64_t*)ip;
    int64_t frame_size = sizeof(stackframe) + sizeof(value) * (*sizep);
    stackframe *base = (stackframe*)malloc(frame_size);
    if (base != NULL)
    {
        base->fp = fp; base->ip = ip; base->ts = ts;
        SaveRegisters(base->g);
        value *newfp = base->l;
        fp = newfp;
        ip += 4;
        
#ifdef CONV
        goto *dynOpcodes[GetOpcode(*ip)];
#else
        goto *dynOpcodes[ts + *ip];
#endif
    }

/* staticInstructions
 * ==================
 * example for reference:
 *
 * add_0_0:
 *     g[0].i += g[0];
 *     ip++;
 *     goto *dynOpcodes[ts + *ip];
 */    
#ifdef TYPE
#include "../Generated/staticInstructions.c"
#endif /*TYPE*/
#ifdef CONV
#include "../Generated/staticInstructionsConv.c"
#endif /*CONV*/
#ifdef HYBR
#include "../Generated/staticInstructionsHybr.c"
#endif /*TYPE*/
    
    return 0;
}
