/*
 * scheduler_private.h
 *
 *  Created on: Oct 14, 2023
 *      Author: Mohamed Abdelsamie
 */

#ifndef INC_SCHEDULER_PRIVATE_H_
#define INC_SCHEDULER_PRIVATE_H_

#include "task_interface.h"

typedef struct
{
	task_t* head;
}scheduler_t;

#endif /* INC_SCHEDULER_PRIVATE_H_ */
