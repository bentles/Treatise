/* stats.c
 *
 * A list of counters for each instruction to determine how many times
 * each instruction is used and how often the type state is changed.
 *
 * Will only be included if the STATS preprocessor symbol is defined
 */

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

void writeStats(char* filename)
{
    int i = 0; 
    FILE *stats_file;
    stats_file = fopen(strcat(filename, ".stats"), "w");
    if (stats_file == NULL)
    {
        fprintf(stderr, "Unable to create stats file");
        return;
    }
    
    Counter cur = opcodeCounters[i];

    fprintf(stats_file, "\nInstructions usage statistics:\n============================\n");
    
    while(cur.name != "")
    {            
        fprintf(stats_file,"%s, %lld\n", cur.name, cur.count);
        cur = opcodeCounters[++i];
    }

    fprintf(stats_file, "\nType state switching statistics:\n============================\n");
    fprintf(stats_file, "Total Nr of switches: %lld\n", stateSwitches);

    fprintf(stats_file, "\nStates used:\n");
    for (int i = 0; i < STATES; i++) {
        fprintf(stats_file, "%lld, %lld\n", i, stateCounters[i]);
    }

    fclose(stats_file);
}
