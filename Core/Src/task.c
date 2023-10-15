/*
 * task.c
 *
 *  Created on: Oct 14, 2023
 *      Author: Mohamed Abdelsamie
 */

#include "task_interface.h"
#include "scheduler_private.h"
#include "task_private.h"
#include "task_Cfg.h"
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

task_t* Task_voidCreate(uint8_t id,
						uint8_t periodicity,
						void (*task_func)(void))
{
	/*	allocate new memory for task to be created	*/
	task_t *task = malloc(sizeof(task_t));

	/*	check if memory is present or id is out of range	*/
	if(task == NULL || id >= number_of_tasks)
	{
		free(task);
		return NULL;
	}
	task-> task_id = id;
	task-> task_periodicity = periodicity;
	task-> task_ptr_2_func = task_func;
	/*task-> next = NULL;

		add task to scheduler linked list
	if (scheduler-> head == NULL)
	{
		scheduler-> head = task;
	}
	else
	{
		task-> next = scheduler-> head;
		scheduler-> head = task;
	}*/

	return task++;
}
