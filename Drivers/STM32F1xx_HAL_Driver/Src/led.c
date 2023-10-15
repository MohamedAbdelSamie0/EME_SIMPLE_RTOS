/*
 * led.c
 *
 *  Created on: Oct 14, 2023
 *      Author: Mohamed Abdelsamie
 */

#include "led_interface.h"
#include "stm32f1xx_hal.h"

void toggle_red(void)
{
	HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_2);
}

void toggle_yellow(void)
{
	HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
}

void toggle_green(void)
{
	HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_15);
}
