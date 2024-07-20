/*
 * lifo.h
 *
 *  Created on: 20.07.2024
 *      Author: Mohamed Ahmed
 */

#ifndef LIFO_H_
#define LIFO_H_

#include "Platform_Types.h"
#include "stdio.h"

#define LIFO_Buffer_Length 5

typedef struct {
	uint32 length;
	uint32 count;
	uint8* base;
	uint8* head;
}LIFO_Buf_t;

typedef enum {
	LIFO_no_error, 		// 0
	LIFO_full, 			//1
	LIFO_not_full,		//2
	LIFO_empty,			//3
	LIFO_not_empty,		//4
	LIFO_Null 			//5
}Buffer_Status;

Buffer_Status LIFO_Add_item (LIFO_Buf_t* lBuf, uint8 item);
Buffer_Status LIFO_pop_item (LIFO_Buf_t* lBuf, uint8* item);
Buffer_Status LIFO_Is_Buf_Full (LIFO_Buf_t* lBuf);

#endif /* LIFO_H_ */
