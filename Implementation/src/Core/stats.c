#include <stdio.h>
#include "stats.h"

Counter opcodeCounters[] =
{
#ifdef TYPE
#include "../Generated/stats.c"
#endif /*TYPE*/
#ifdef CONV
#include "../Generated/statsConv.c"
#endif /*CONV*/
#ifdef HYBR
#include "../Generated/statsHybr.c"
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

    puts("\nType state switching statistics:\n============================\n");
    printf("Nr of switches: %d\n", stateSwitches);
}
