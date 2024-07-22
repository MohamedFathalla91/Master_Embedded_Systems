/*
 * DC.h
 *
 *  Created on: 22.07.2024
 *      Author: Mohamed Ahmed
 */

#ifndef DC_H_
#define DC_H_

#include "state.h"
// State pointer to function
extern void (*DC_state)();

enum {
	DC_idle,
	DC_busy
}DC_state_id;

// Function declaration of DC
STATE_define(DC_idle);
STATE_define(DC_busy);
void DC_init();






#endif /* DC_H_ */
