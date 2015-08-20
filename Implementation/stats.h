#ifndef STATS_H
#define STATS_H

/*
Ease of use counter for how many times a method is used
*/
typedef struct counter {
    char* name;
    int count;
    int state;
} Counter;

extern Counter opcodeCounters[]; 

void printStats(void);

#endif /* STATS_H */
