/* standardvm.h
 * 
 * This file contains a set of preprocessor directives to define convenient
 * macros for getting at opcodes and arguments for instruction words and
 * determining types of registers
 *
 */
#ifndef STANDARDVM_H
#define STANDARDVM_H

#define GetArg0(inst) ((inst) & 0x7) 
#define GetArg1(inst) (((inst) & 0x38) >> 0x3)
#define GetArg2(inst) (((inst) & 0x1FF) >> 0x6) 

#define IsInt(x) ((x).tag == 0 ? 1 : 0)
#define IsPointer(x) ((x).tag >= 1 ? 1 : 0)
#define GetOpcode(inst) ((inst) >> 0x9)


#endif /* STANDARDVM_H */
