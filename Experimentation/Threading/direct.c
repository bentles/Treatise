#include <stdio.h>

//Direct Threading
//================
//Okay instead of part of our instruction being an opcode,
//we just have a pointer to where the instruction happens.
//I think args are stored in the next byte or something

//hmm how do we write code for this since we don't know where the addresses are
//could use offsets {&&add - &&add, &&sub - &&add} but even then things could change if the VM changes at all


int registers[6];

int main()
{
	static void *program[] = {&&add, 0x10 , &&sub, &&add, 0x32, &&halt}; //list of addresses in memory
	//this array would be built for each instance => not easily able to share
	
	//get the address of the label (using &&) which is of type void (why??)
	//(because...) void is the general pointer - used to store the address of any type of variable
	//so it's like saying this is a pointer to something
	
	//make the pointer point to the start of the array
	int pc = 0;
	goto *program[pc];
	
add:
	printf("add\n");
	long args = (long)program[++pc]; //seems a bit hacky
	printf("args: %d and %d\n", (args & 0xf0) >> 4, args & 0x0f);
	goto *program[++pc];
sub:
	printf("sub\n");
	goto *program[++pc];
halt:	
	return 0;
}
