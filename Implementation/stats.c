#include <stdio.h>
#include "stats.h"

Counter opcodeCounters[] =
{
#ifdef TYPE
#include "opcodes.c"
#endif /*TYPE*/
#ifdef CONV
#include "opcodesConv.c"
#endif /*CONV*/
#ifdef HYBR
#include "opcodesHybr.c"
#endif /*HYBR*/
};

void printStats(void)
{
    int i = 0;
    
    Counter cur = opcodeCounters[i];

    puts("\nInstructions usage statistics:\n============================\n");
    
    while(cur.name != "")
    {            
        printf("%s, %d\n", cur.name, cur.count);
        cur = opcodeCounters[++i];
    }
}
