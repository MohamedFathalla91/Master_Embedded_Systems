
/*
 * Platform_Types.h
 *
 * Created on :  14. 07. 2024
 *     Author : Mohamed Fathalla Ahmed
 */

#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

/* Boolean Data Type */
#ifndef _Bool
#define _Bool unsigned char
#endif
typedef _Bool boolean; 


/* Unsigned Data Types */
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long long uint64;
/* Unsigned Data Types "volatile" */
typedef volatile unsigned char  vuint8_t;
typedef volatile unsigned short vuint16_t;
typedef volatile unsigned int vuint32_t;
typedef volatile unsigned long long vuint64_t;


/* Signed Data Types */
typedef signed char sint8;
typedef signed short sint16;
typedef signed int sint32;
typedef signed long long sint64;
/* Signed Data Types "volatile" */
typedef volatile signed char vsint8_t;
typedef volatile signed short vsint16_t;
typedef volatile signed int vsint32_t;
typedef volatile signed long long vsint64_t;

/* Floating Point Data Types */
typedef float float32;
typedef double float64;



/* Platform-specific definitions */
#define CPU_TYPE_8      8
#define CPU_TYPE_16     16
#define CPU_TYPE_32     32
#define CPU_TYPE        CPU_TYPE_32


#define MSB_FIRST       0          /* Big endian bit ordering */
#define LSB_FIRST       1          /* Little endian bit ordering */
#define CPU_BIT_ORDER   LSB_FIRST

#define HIGH_BYTE_FIRST 0          /* Big endian byte ordering */
#define LOW_BYTE_FIRST  1          /* Little endian byte ordering */
#define CPU_BYTE_ORDER  LOW_BYTE_FIRST

#endif /* PLATFORM_TYPES_H */
