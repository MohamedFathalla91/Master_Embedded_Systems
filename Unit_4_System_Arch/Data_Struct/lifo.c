/*
 * lifo.c
 *
 *  Created on: 20.07.2024
 *      Author: Mohamed Ahmed
 */
#include "lifo.h"


Buffer_Status LIFO_Is_Buf_Full (LIFO_Buf_t* lBuf){
	// check valid pointers
	if(!lBuf || !lBuf->head ||!lBuf->base )
	{
		return LIFO_Null;
	}
	if(lBuf->head >= (lBuf->base + lBuf->length) )
	{
		return LIFO_full;
	}else
	{
		return LIFO_not_full;
	}

}

Buffer_Status LIFO_Add_item (LIFO_Buf_t* lBuf, uint8 item){

	if(!lBuf || !lBuf->head ||!lBuf->base )
	{
		return LIFO_Null;
	}
	if (LIFO_Is_Buf_Full (lBuf) == LIFO_full)
	{
		//printf("LIFO is full, please have a look \n");
		return LIFO_full;
	}

	*(lBuf->head) = item;
	lBuf->head++;
	lBuf->count++;

	return LIFO_no_error;
}

Buffer_Status LIFO_pop_item (LIFO_Buf_t* lBuf, uint8* item){

	if(!lBuf || !lBuf->head ||!lBuf->base )
	{
		return LIFO_Null;
	}
	if(lBuf->base == lBuf->head )
	{
		return LIFO_empty;
	}
	lBuf->head--;
	*item = *(lBuf->head);
	lBuf->count--;

	return LIFO_no_error;
}

