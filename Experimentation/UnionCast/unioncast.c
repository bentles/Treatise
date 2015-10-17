#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <inttypes.h>
#include <string.h>

typedef union{int64_t i; void* p;} val;

typedef struct ValueStruct value;
struct ValueStruct
{
	int tag;
	/* 0 - 64 bit int
	 * 1 - value pointer / NULL
	 */
	union 
	{
		int64_t i;
		void *p;    
    };
};


int main()
{
    value g1;
    value g2;
    value g3;
    g1.tag = g2.tag = 0;
    g1.i = 12;
    g2.i = 12;
    
    g3.tag = 1;
    g3.p = &g1;

    g2.tag = g3.tag;
    g2.i = g3.i;

    printf("%11d\n", ((value *)g2.p)->i);
    
    return 0;
}
