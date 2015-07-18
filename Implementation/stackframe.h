#ifndef STACKFRAME_H
#define STACKFRAME_H

/* Stack Frame
 * ===========
 * A convenient struct for keeping registers from the last stack frame
 */
#define SaveRegisters(saveg) {saveg[0] = g[1]; saveg[1] = g[2]; saveg[2] = g[3]; saveg[3] = g[4];}
#define RestoreRegisters(saveg) {g[1] = saveg[0]; g[2] = saveg[1]; g[3] = saveg[2]; g[4] = saveg[3];}

typedef struct StackFrameStruct stackframe;
struct StackFrameStruct
{
    value *fp;
    int64_t pc;
    int64_t ts;
    value g[4]; //g1 .. g4
    value l[];  //local vars starting with the arguments
};

#endif /* STACKFRAME_H */
