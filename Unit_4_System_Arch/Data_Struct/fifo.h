/*
 * fifo.h
 *
 *  Created on: 20.07.2024
 *      Author: Mohamed Ahmed
 */

#ifndef FIFO_H_
#define FIFO_H_

#include "Platform_Types.h"
#include "stdio.h"

#define FIFO_Buffer_Length 5
#define element_type uint8
element_type buf_elem[FIFO_Buffer_Length];

typedef struct {
	uint32 length;
	uint32 count;
	element_type* base;
	element_type* head;
	element_type* tail;
}FIFO_Buf_t;

typedef enum {
	FIFO_no_error, 		// 0
	FIFO_full, 			//1
	FIFO_not_full,		//2
	FIFO_empty,			//3
	FIFO_not_empty,		//4
	FIFO_Null 			//5
}Buffer_Status;

// FIFO Declaration of APIs
Buffer_Status FIFO_Add_item (FIFO_Buf_t* fifo_buf, element_type* item);
Buffer_Status FIFO_pop_item (FIFO_Buf_t* fifo_buf, element_type* item);
Buffer_Status FIFO_Is_Buf_Full (FIFO_Buf_t* fifo_buf);
Buffer_Status FIFO_Init (FIFO_Buf_t* fifo_buf, element_type* item, uint32 buff_len);

void FIFO_print(FIFO_Buf_t* fifo_buf);




#endif /* FIFO_H_ */
