/* datatypes.h
 *
 * This file contains the definitions for all datatypes in the VM. These are:
 * 1. Values
 * 2. Objects
 * 3. Buffers
 * Macros for getting and setting values for object and buffer headers are
 * also included
 */


#ifndef DATATYPES_H
#define DATATYPES_H

/* Values
 * ======
 * tag - tells us which type of value we have (how to read union)
 * union - the actual value
 */
typedef struct ValueStruct value;
struct ValueStruct
{
	int64_t tag;
	/* 0 - 64 bit int
	 * 1 - value pointer / NULL
     * 2 - object pointer
     * 4 - buffer pointer
	 */
	union
	{
		int64_t i;
		void *p;    
    };
};


/* Object
 * ======
 * A general-purpose collection of fields
 */
#define MakeSizeAndFlags(size,flags)(((size)<<2)|(flags))
#define GetFlags(v)((v) & 3)
#define GetSize(v)((v) >> 2)

typedef struct ObjectStruct object;
struct ObjectStruct
{
    int64_t sf; //size and flags
    value data[];
};


/* Buffer (pointer-free)
 * =====================
 * A byte addressable buffer
 */
typedef struct BufferStruct buffer;
struct BufferStruct
{
    int64_t sf; //size and flags
    int8_t data[];
};

#endif /* DATATYPES_H */
