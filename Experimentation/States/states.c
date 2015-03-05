#include <stdio.h>

/* something like:
	 * 0 null
	 * 1 double
	 * 2 long
	 * 3 pointer to string?
	 * 4 pointer to object/lua table equivalent <- kind of want this to be a hashtable
	 * => base 5 state... numbers
	 * simpler to use something C understands. let's use octal
	 */

int main()
{
    int state = 0023141;

	//changing state
	state = (state & 0777077) | 0200;

	printf("%o\n", state);

	//hmm. how do we go from state to correct label?
	
    return 0;
}


