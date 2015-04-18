/* Opcode Layout for Standard VM
 * =============================
 *  15        15  14           9  8          6  5          3  2          0
 * [empty: 1 bit][opcode: 6 bits][arg2: 3 bits][arg1: 3 bits][arg0: 3 bits]
 *
 * Really tempting to put the arguments in backwards
 */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <inttypes.h>
#include <string.h>
   
/* Convenience Defines for Standard VM
 * ===================================
 * Getting Arguments and Opcode:
 */
#define GetArg0(inst) int16_t arg0 = (inst & 0x7) 
#define GetArg1(inst) int16_t arg1 = (inst & 0x38) >> 0x3
#define GetArg2(inst) int16_t arg2 = inst >> 0x6 

#define IsInt(x) (x.tag == 0 ? 1 : 0)
#define IsPointer(x) (x.tag == 1 ? 1 : 0)
#define GetOpcode(inst) int16_t opcode = (inst & 0x7E00) >> 0x9

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
	 * 1 - value pointer / NULL
     * 2 - object pointer
     * 3 - pointer-only pointer
     * 4 - pointer-free pointer
	 */
	union
	{
		int64_t i;
		void *p;    
    };
};

/* Object
 * ======
 * A general-purpose collection of fields
 */
#define MakeSizeAndFlags(size,flags)(((size)<<2)|(flags))
#define GetFlags(v)((v) & 3)
#define GetPayload(v)((v) & ~3)
#define GetSize(v)(GetPayload(v)>>2)

typedef struct ObjectStruct object;
struct ObjectStruct
{
    int64_t sf; //size and flags
    value data[];
};

/* Pointer-only
 * ============
 * Can only contain values with tags greater than 0
 * No different from an object except that it guarantees
 * only pointers 
 */
typedef struct PointerStruct pointeronly;
struct PointerStruct
{
    int64_t sf; //size and flags
    value data[];
};

/* Buffer (pointer-free)
 * =====================
 * A byte addressable buffer
 */
typedef struct BufferStruct buffer;
struct BufferStruct
{
    int64_t sf; //size and flags
    int8_t data[];
};

/* Stack Frame
 * ===========
 * A convenient struct for keeping registers from the last stack frame
 */
//#define saveRegisters(sf) for(int i = 0; i < 4; i++){sf.g[i] = g[i + 1}
#define SaveRegisters(saveg) {saveg[0] = g[1]; saveg[1] = g[2]; saveg[2] = g[3]; saveg[3] = g[4];}
#define RestoreRegisters(saveg) {g[1] = saveg[0]; g[2] = saveg[1]; g[3] = saveg[2]; g[4] = saveg[3];}

typedef struct StackFrameStruct stackframe;
struct StackFrameStruct
{
    value *fp;
    int64_t pc;
    int64_t ts;
    value g[4]; //g1 .. g4
    value l[];  //local vars starting with the arguments
};

/* Registers
 * =========
 * [0..5] g0 through g5 - general purpose registers
 * pc - program counter
 * fp - frame pointer
 * ts - type state
 */
#define NR_REGISTERS 6
#define REG_SAVE 56
    
value g[NR_REGISTERS]; //init to 0 valued ints
int64_t pc = 0;
value *fp; //= NULL; points to top of frame - an array of local values
int64_t ts = 0; //matches what registers are init to

int main(int argc, char *argv[])
{
	//state with static opcode as lower bits is an index into this table
	//[state : 6 bits][opcode : 11 bits] => the table has max 2^17 = 131072
	//elements
	static void *dynOpcodes[] = {
      #include "dynamicOpcodes.h"
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
    return 0;
}


