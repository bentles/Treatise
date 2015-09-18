/* stats.h
 *
 * Defined the counter struct that is used to count how many times
 * each instruction is used
 */

#ifndef STATS_H
#define STATS_H

#include <inttypes.h>

#define STATES 64

typedef struct counter {
    char* name;
    int64_t count;
    int64_t state;
} Counter;

extern Counter opcodeCounters[];

int64_t stateSwitches;
int64_t stateCounters[STATES];

void printStats(void);

#endif /* STATS_H */
