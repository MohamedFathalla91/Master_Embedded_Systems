/*
 * CA.c
 *
 *  Created on: 22.07.2024
 *      Author: Mohamed Ahmed
 */
#include "CA.h"


int CA_speed     = 0;
int CA_distance  = 0;
int CA_threshold = 50;

void (*CA_state)();

void US_Set_distance (int d){
	CA_distance = d;
	(CA_distance <= CA_threshold) ? (CA_state = STATE(CA_waiting)) : (CA_state = STATE(CA_driving));
	printf("US --------- distance = %d -------> CA \n", CA_distance);
}

STATE_define(CA_waiting)
{
	CA_state_id = CA_waiting;
	printf("CA_waiting state: Current Distance %d && Speed = %d\n", CA_distance, CA_speed);
	CA_speed = 0;
	DC_Motor (CA_speed);
}

STATE_define(CA_driving){

	CA_state_id = CA_driving;
	printf("CA_Driving state: Current Distance %d && Speed = %d\n", CA_distance, CA_speed);

	CA_speed = 30;
	printf("Now DC Motor will set the speed to %d\n", CA_speed);
	DC_Motor(CA_speed);
}
