#include <stdio.h>

typedef struct ValueStruct Value;
struct ValueStruct
{
	int typeTag;
	/* something like:
	 * 0 null
	 * 1 double
	 * 2 long
	 * 3 pointer to string?
	 * 4 pointer to object/lua table equivalent <- kind of want this to be a hashtable
	 */

	union
	{
		double f;
		long i;
		void *p; //general purpose pointer?
	};
};


int main(int argc, char *argv[])
{
	//creating
	Value vs;

	//setting
	vs.typeTag = 0;
	vs.f = 0.2f;

	//reading
	if (vs.typeTag == 0)
		printf("%f\n", vs.f);

	//a test for curiosity's sake
	printf("%d\n", vs.i);

	//how would pointers to objects work?

	
	//let's make a pointer to null...
	Value nulled;
	nulled.typeTag = -1;
	
	
	return 0;
}
