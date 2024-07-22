/*
 * CA.h
 *
 *  Created on: 22.07.2024
 *      Author: Mohamed Ahmed
 */

#ifndef CA_H_
#define CA_H_

#include "state.h"

extern void (*CA_state)();

enum {
	CA_waiting,
	CA_driving
}CA_state_id;


// Function declaration of DC
STATE_define(CA_waiting);
STATE_define(CA_driving);

#endif /* CA_H_ */
