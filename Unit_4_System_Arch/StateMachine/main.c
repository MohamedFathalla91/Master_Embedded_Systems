/*
 * main.c
 *
 *  Created on: 22.07.2024
 *      Author: Mohamed Ahmed
 */


#include "CA.h"
#include "DC.h"
#include "US.h"

void setup()
{
	US_init();
	DC_init();
	CA_state = STATE(CA_waiting);
	US_state = STATE(US_busy);
	DC_state = STATE(DC_idle);
}

int main (void)
{
	printf("\nStart PRoject from Scratch\n");
	volatile int d ;
	setup();
	int i = 0;
	for (i=0; i<25; i++)
	{
		US_state();
		CA_state();
		DC_state();
		for (d = 0; d<=10000; d++);
	}

}
