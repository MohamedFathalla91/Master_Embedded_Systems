/*
 * US.h
 *
 *  Created on: 22.07.2024
 *      Author: Mohamed Ahmed
 */

#ifndef US_H_
#define US_H_

#include "state.h"
// State pointer to function
extern void (*US_state)();

enum {
	US_busy
}US_state_id;

// Function declaration of DC
STATE_define(US_busy);
void US_init();
int US_Get_distance_random (int l,int r,int count);

// State pointer to function
extern void (*US_state)();


#endif /* US_H_ */
