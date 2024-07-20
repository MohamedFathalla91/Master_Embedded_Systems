/*
 * main.c
 *
 *  Created on: 20.07.2024
 *      Author: Mohamed Ahmed
 */


//#include "lifo.h"

#include "fifo.h"

int main (void)

{
	// For Testing of FIFO Buffer Sequence

	// For Testing of LIFO Buffer Sequence
	/* Start of LIFO
	uint8 StaticBuffer [LIFO_Buffer_Length];

	LIFO_Buf_t LIFO_buf_static;

	uint8 i=0;

	// Set the pointer
	LIFO_buf_static.base = &StaticBuffer[0];
	LIFO_buf_static.head = LIFO_buf_static.base;
	// Init the LIFO basic data
	LIFO_buf_static.length = 5;
	LIFO_buf_static.count = 0;


	printf("\n =====Welcome to LIFO Data Structure from Scratch=====\n");

	for (i=0; i<LIFO_Buffer_Length+1; i++)
	{
		if (LIFO_Add_item(&LIFO_buf_static, i) == LIFO_no_error)
		{
			printf(" Data added: %d \n", i);
		}else if (LIFO_Add_item(&LIFO_buf_static, i) == LIFO_full)
		{
			printf("LIFO is already full - Add of item of Data_item %d failed \n", i);
		}

	}
	 End of LIFO */
	// Start of FIFO
	// For Testing of FIFO Buffer Sequence
	printf("\n =====Welcome to FIFO Data Structure from Scratch=====\n");
	FIFO_Buf_t FIFO_buf;
	element_type i, temp_main=0;
	if (FIFO_Init(&FIFO_buf, buf_elem, FIFO_Buffer_Length) == FIFO_no_error)
		printf("FIFO is ready , Init done !\n");

	for (i=0; i<FIFO_Buffer_Length ; i++)
	{
		printf("Start to FIFO EnQeue (%x).... !\n", i);
		if (FIFO_Add_item(&FIFO_buf, &i) == FIFO_no_error)
		{
			printf("-->FIFO EnQeue (%x) Done!\n", i);
		}else
		{
			printf("FIFO EnQeue (%x) Failed!!!!!!!!!\n", i);
		}
	}
	FIFO_print(&FIFO_buf);
	FIFO_pop_item(&FIFO_buf, &temp_main);
	printf("FIFO DeQeue : Data = %x \n", temp_main);
	FIFO_pop_item(&FIFO_buf, &temp_main);
	printf("FIFO DeQeue : Data = %x \n", temp_main);
	FIFO_pop_item(&FIFO_buf, &temp_main);
	printf("FIFO DeQeue : Data = %x \n", temp_main);
	FIFO_print(&FIFO_buf);

	// Adding again !
	for (i=0; i <3; i++)
	{
		printf("Start AGAIN to FIFO EnQeue (%x).... !\n", i);
		if (FIFO_Add_item(&FIFO_buf, &i) == FIFO_no_error)
		{
			printf("-->FIFO EnQeue (%x) Done!\n", i);
		}else
		{
			printf("FIFO EnQeue (%x) Failed!!!!!!!!!\n", i);
		}
	}
	FIFO_print(&FIFO_buf);
	//End of FIFO  */

	return 0;
}
