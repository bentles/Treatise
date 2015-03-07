#include <stdio.h>

/* Indirect Threading
 * ==================
 * Have a lookup table of addresses for instructions
 * Instructions look as they always did
 */


int registers[6];

int main()
{
	static void *instructions[] = {&&add, &&sub, &&halt}; //I need forward declarations but I can talk about these before they exist. kind of interesting
	
	static int program[] = {0x102, 0x002, 0x200}; 
	
	//make the pointer point to the start of the array
	int pc = 0;
	goto *instructions[(program[pc] & 0xf00) >> 8];
	
add:
	printf("add\n");
	int inst = program[pc]; 
	printf("args: %d and %d", (inst & 0xf0) >> 4, inst & 0x0f);
	goto *instructions[(program[++pc] & 0xf00) >> 8];
sub:
	printf("sub\n");
	goto *instructions[(program[++pc] & 0xf00) >> 8];
halt:	
	return 0;
}
