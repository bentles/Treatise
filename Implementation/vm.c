#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

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
 * [6] pc - program counter
 * [7] fp - frame pointer
 * [8] ts - type state
 */
value registers[6]; //init to 0 valued ints

//
int64_t pc = 0;
int64_t fp = 0;
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
	//state with static opcode as lower bits is an index into this table
	//[state : 6 bits][opcode : 11 bits] => the table has 2^17 = 131072
	//elements
	static void *dynOpcode[] = 
	
	static void *instructions[] = {&&add00};

add:
	

	return 0;
}
