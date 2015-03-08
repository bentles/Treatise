#include <stdio.h>

typedef struct ValueStruct Value;
struct ValueStruct
{
	int tag;
	/* something like:
	 * 0 64 bit int
	 * 1 pointer
	 */

	union
	{
		long i;
		void *p; //general purpose pointer?
	};
};


int main(int argc, char *argv[])
{

	int i = 12;
	int* j = &i;
	*j = 22;
	//creating
	Value vs;

	//setting
	vs.tag = 0;
	vs.i = 22;

	//reading
	printf("%d\n", vs.i);

	//let's make a pointer to null...
	Value nulled;
	nulled.tag = 1;
	nulled.p = NULL;	
	
	return 0;
}
