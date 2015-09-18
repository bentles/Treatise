#ifndef STACKFRAME_H
#define STACKFRAME_H

/* Stack Frame
 * ===========
 * A convenient struct for keeping registers from the last stack frame
 */
#define SaveRegisters(saveg, oldg) {saveg[0] = oldg[1]; saveg[1] = oldg[2]; saveg[2] = oldg[3]; saveg[3] = oldg[4];}
#define RestoreRegisters(saveg, oldg) {oldg[1] = saveg[0]; oldg[2] = saveg[1]; oldg[3] = saveg[2]; oldg[4] = saveg[3];}
#define RestoreTS(curTS, TS) (TS = (curTS & 0xF000) | (TS & 0x10800))

typedef struct StackFrameStruct stackframe;
struct StackFrameStruct
{
    value *fp;
    int16_t *ip;
    int64_t ts;
    value g[4]; //g1 .. g4
    value l[];  //local vars starting with the arguments
};

#endif /* STACKFRAME_H */
