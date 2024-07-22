/*
 * DC.c
 *
 *  Created on: 22.07.2024
 *      Author: Mohamed Ahmed
 */

#include "state.h"
#include "DC.h"

int DC_speed = 0;

// State pointer to function
void (*DC_state)();

// Function definition of DC
void DC_init(){
	printf(" Inside DC Init State \n");
}

void DC_Motor (int s)
{
	DC_speed = s;
	DC_state = STATE(DC_busy);
	printf("DC_Motor Running with Current Speed %d !\n", DC_speed);

}

STATE_define(DC_idle)
{
	DC_state_id = DC_idle;
	printf("CA Idle state: Current Speed %d !\n", DC_speed);

}

STATE_define(DC_busy)
{
	DC_state_id = DC_busy;
	printf("DC busy state: Current Speed %d !\n", DC_speed);
	DC_Motor(DC_speed);
	printf("DC Motor speed has been set to %d & then going to idle\n", DC_speed);
	DC_state = STATE(DC_idle);
}









