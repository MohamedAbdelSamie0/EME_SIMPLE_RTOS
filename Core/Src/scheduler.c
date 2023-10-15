/*
 * scheduler.c
 *
 *  Created on: Oct 14, 2023
 *      Author: Mohamed Abdelsamie
 */

#include "task_interface.h"
#include "stm32f1xx_hal.h"
#include <stdint.h>

void scheduler(task_t **task_st)
{
	uint8_t Local_u8Counter;
	for(Local_u8Counter = 0; Local_u8Counter < number_of_tasks; Local_u8Counter++)
	{
		/*	check for task periodicity to run task	*/
		if(uwTick % task_st[Local_u8Counter]-> task_periodicity == 0)
		{
			task_st[Local_u8Counter]-> task_ptr_2_func();
		}
		else
		{
			/*	do nothing	*/
		}
	}
}
