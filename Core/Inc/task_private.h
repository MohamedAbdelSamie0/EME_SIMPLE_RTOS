/*
 * task.h
 *
 *  Created on: Oct 14, 2023
 *      Author: Mohamed Abdelsamie
 */

#ifndef INC_TASK_PRIVATE_H_
#define INC_TASK_PRIVATE_H_

#include "task_Cfg.h"
#include <stdint.h>

typedef struct task
{
	uint8_t task_id;
	uint8_t task_periodicity;
	uint8_t task_priority;
	/*struct task *next;*/
	void (*task_ptr_2_func)(void);

}task_t;

extern task_t tasks[number_of_tasks];

#endif /* INC_TASK_PRIVATE_H_ */
