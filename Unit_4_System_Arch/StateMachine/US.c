/*
 * US.c
 *
 *  Created on: 22.07.2024
 *      Author: Mohamed Ahmed
 */

#include "state.h"
#include "US.h"

static int US_distance = 0;
// State pointer to function
void (*US_state)();

int US_Get_distance_random (int l,int r,int count);

// Function definition of US
void US_init(){
	printf("***Inside US Init State \n");
}

STATE_define(US_busy)
{
	US_state_id = US_busy;
	US_distance = US_Get_distance_random (45,55,1);
	printf("***CA_waiting state: Current Distance %d !\n", US_distance);
	US_Set_distance(US_distance);
	US_state = STATE(US_busy);
}




int US_Get_distance_random (int l,int r,int count){
	int i;
	for (i = 0; i < count; i++)
	{
		int rand_num = (rand() % (r - l + 1)) +l;
		return rand_num;
	}
	return 0;
}
