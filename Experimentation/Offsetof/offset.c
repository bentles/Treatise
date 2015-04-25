#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <inttypes.h>
#include <string.h>

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

typedef struct StackFrameStruct stackframe;
struct StackFrameStruct
{
    value *fp;
    int64_t pc;
    int64_t ts;
    value g[4]; //g1 .. g4
    value l[];  //local vars starting with the arguments
};


int main()
{
    printf("%u", sizeof(stackframe));
    return 0;
}
