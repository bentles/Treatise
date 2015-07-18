#ifndef STANDARDVM_H
#define STANDARDVM_H   
/* Convenience definitions for Standard VM
 * ===================================
 * Getting Arguments and Opcode:
 */
#define GetArg0(inst) ((inst) & 0x7) 
#define GetArg1(inst) (((inst) & 0x38) >> 0x3)
#define GetArg2(inst) (((inst) & 0x1FF) >> 0x6) 

#define IsInt(x) ((x).tag == 0 ? 1 : 0)
#define IsPointer(x) ((x).tag >= 1 ? 1 : 0)
#define GetOpcode(inst) ((inst) >> 0x9)


#endif /* STANDARDVM_H */
