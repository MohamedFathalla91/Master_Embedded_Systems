/*
 * fifo.c
 *
 *  Created on: 20.07.2024
 *      Author: Mohamed Ahmed
 */


#include "FIFO.h"


Buffer_Status FIFO_Init (FIFO_Buf_t* fifo_buf, element_type* item, uint32 buff_len){

	fifo_buf->base = item;
	fifo_buf->head = fifo_buf->base;
	fifo_buf->tail = fifo_buf->base;
	fifo_buf->count = 0;
	fifo_buf->length =FIFO_Buffer_Length;

	if (fifo_buf->base && fifo_buf->length)
	{
		return FIFO_no_error;
	} else {
		return FIFO_Null;
	}

}

Buffer_Status FIFO_Is_Buf_Full (FIFO_Buf_t* fifo_buf){
	// check valid pointers
	if( !fifo_buf->head ||!fifo_buf->base || !fifo_buf->tail )
	{
		return FIFO_Null;
	}
	if(fifo_buf->count >= fifo_buf->length )
	{
		printf("The FIFO is alreay full\n");
		return FIFO_full;
	}else
	{
		return FIFO_not_full;
	}

}

Buffer_Status FIFO_Add_item (FIFO_Buf_t* fifo_buf, element_type* item){
	// check valid pointers
	if(!fifo_buf->head ||!fifo_buf->base || !fifo_buf->tail )
	{
		return FIFO_Null;
	}
	if (FIFO_Is_Buf_Full (fifo_buf) == FIFO_full)
	{
		return FIFO_full;
	}

	*(fifo_buf->head) = *item;
	fifo_buf->count++;

	if(fifo_buf->head == (fifo_buf->base + (fifo_buf->length*sizeof(element_type))))
	{
		fifo_buf->head = fifo_buf->base;
	} else {
		fifo_buf->head++;
	}


	return FIFO_no_error;
}

Buffer_Status FIFO_pop_item (FIFO_Buf_t* fifo_buf, uint8* item){

	if(!fifo_buf->head ||!fifo_buf->base || !fifo_buf->tail)
	{
		return FIFO_Null;
	}
	if(fifo_buf->count == 0)
	{
		return FIFO_empty;
	}

	*item = *(fifo_buf->tail);

	if((fifo_buf->tail ) == (fifo_buf->base + (fifo_buf->length)))
	{
		fifo_buf->tail = fifo_buf->base;
	}else {
		fifo_buf->tail++;
	}

	fifo_buf->count--;
	return FIFO_no_error;
}

void FIFO_print(FIFO_Buf_t* fifo_buf){
	element_type* temp;
	int i;
	if(fifo_buf->count == 0)
	{
		printf("The FIFO is empty, Please have fill it first\n");
	}
	temp = fifo_buf->tail;
	printf("========FIFO printing.......sizeof element_type= %d ========\n", sizeof(element_type));
	for(i=0; i < fifo_buf->count; i++)
	{
		printf("\t %d \n", *temp);
		if((temp ) == (fifo_buf->base + (fifo_buf->length)))
		{
			temp = fifo_buf->base;
		}else {
			temp++;
		}
	}
	printf("========FIFO printing finished !!!!========\n");
}
