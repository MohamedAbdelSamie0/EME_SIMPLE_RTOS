/*
 * task_interface.h
 *
 *  Created on: Oct 14, 2023
 *      Author: DELL
 */

#ifndef INC_TASK_INTERFACE_H_
#define INC_TASK_INTERFACE_H_

#include "task_private.h"
#include <stdint.h>

task_t* Task_voidCreate(uint8_t id,
						uint8_t periodicity,
						void (*task_func)(void));


#endif /* INC_TASK_INTERFACE_H_ */
