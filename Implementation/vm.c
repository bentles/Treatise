/* Opcode Layout for Standard VM
 * =============================
 *  15        15  14           9  8          6  5          3  2          0
 * [empty: 1 bit][opcode: 6 bits][argA: 3 bits][argB: 3 bits][argC: 3 bits]
 *
 * Really tempting to put the arguments in backwards
 */
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
   
/* Convenience Defines for Standard VM
 * ===================================
 * Getting Arguments and Opcode:
 */
#define getArg0(inst) int16_t arg0 = (inst & 0x1C0) >> 0x6
#define getArg1(inst) int16_t arg1 = (inst & 0x38) >> 0x3
#define getArg2(inst) int16_t arg2 = inst & 0x7

/* Type checking:
 * isInt(x)
 * isPointer(x)
 */
#define isInt(x) x.tag == 0 ? 1 : 0
#define isPointer(x) x.tag == 1 ? 1 : 0
#define getOpcode(inst) int16_t opcode = (inst & 0x7E00) >> 0x9

/* Values
 * ======
 * tag - tells us which type of value we have (how to read union)
 * union - the actual value
 */
typedef struct ValueStruct value;
struct ValueStruct
{
	int tag;
	/* 0 - 64 bit int
	 * 1 - pointer
	 */
	union
	{
		int64_t i;
		void *p; 
	};
};

/* Registers
 * =========
 * [0..5] g0 through g5 - general purpose registers
 * pc - program counter
 * fp - frame pointer
 * ts - type state
 */
value g[6]; //init to 0 valued ints
int64_t pc = 0;
value* fp = 0; //points to top of frame - an array of local values
int64_t ts = 0; //matches what registers are init to

/* Indirect Threading
 * ==================
 * Have a lookup table of addresses for instructions
 * 1. Get opcode and arguments
 * 2. Look up where relevant code is
 * 3. Jump to that code and perform instruction
 */
int main()
{
    //IO stuff
    FILE *fp;

    if (argc < 2)
    {
        fprintf(stderr, "Usage:\n  vm name.out\n");
        return 1;
    }

    fp = fopen(argv[1], "rb");

    if (fp == NULL)
    {
        fprintf(stderr, "Unable to open file.");
        return 1;
    }

    fread

	//state with static opcode as lower bits is an index into this table
	//[state : 6 bits][opcode : 11 bits] => the table has max 2^17 = 131072
	//elements
	static void *dynOpcodes[] = {
      #include "dynamicOpcodes.h"
    };

/* staticInstructions
 * ==================
 * example for reference:
 *
 * add0_0:
 *     g[0] = g[0] + g[0];
 *     pc += 2;
 *     goto *dynOpcodes[ts + program[pc]];
 */    
#include "staticInstructions.h"
    
error:
    fprintf(stderr, "Something went wrong: Illegal arguments |");
    return 1;
fatal:
    fprintf(stderr, "VM bug occurred");
    return 1;
	

	return 0;
}
