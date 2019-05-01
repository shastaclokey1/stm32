/*
 * FlashyLightsMain.cpp
 *
 *  Created on: Apr 30, 2019
 *      Author: Shasta
 */




#include "FlashyLightsMain.h"
#include "main.h"

static TIM_HandleTypeDef *TimerRedHandle;
static TIM_HandleTypeDef *TimerOrangeHandle;
static TIM_HandleTypeDef *TimerBlueHandle;
static TIM_HandleTypeDef *TimerGreenHandle;

void FlashyLightsMain(void)
{
	HAL_TIM_Base_Start_IT(TimerRedHandle);
	HAL_TIM_Base_Start_IT(TimerOrangeHandle);
	HAL_TIM_Base_Start_IT(TimerBlueHandle);
	HAL_TIM_Base_Start_IT(TimerGreenHandle);
	while (true)
	{

	}
}

void InitRedTimerHandle(TIM_HandleTypeDef *htim)
{
	TimerRedHandle = htim;
}

void InitOrangeTimerHandle(TIM_HandleTypeDef *htim)
{
	TimerOrangeHandle = htim;
}

void InitBlueTimerHandle(TIM_HandleTypeDef *htim)
{
	TimerBlueHandle = htim;
}

void InitGreenTimerHandle(TIM_HandleTypeDef *htim)
{
	TimerGreenHandle = htim;
}


void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	if (htim->Instance == TimerRedHandle->Instance)
	{
		HAL_GPIO_TogglePin(LED_Red_GPIO_Port, LED_Red_Pin);
	}
	else if (htim->Instance == TimerOrangeHandle->Instance)
	{
		HAL_GPIO_TogglePin(LED_Orange_GPIO_Port, LED_Orange_Pin);
	}
	else if (htim->Instance == TimerBlueHandle->Instance)
	{
		HAL_GPIO_TogglePin(LED_Blue_GPIO_Port, LED_Blue_Pin);
	}
	else if (htim->Instance == TimerGreenHandle->Instance)
	{
		HAL_GPIO_TogglePin(LED_Green_GPIO_Port, LED_Green_Pin);
	}
}
