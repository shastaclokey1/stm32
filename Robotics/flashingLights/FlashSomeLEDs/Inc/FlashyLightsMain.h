#ifndef __FLASHY_MAIN_H
#define __FLASHY_MAIN_H

#include "stm32f4xx_hal.h"

#ifdef __cplusplus
extern "C" {
#endif

void FlashyLightsMain(void);

/*---------------Timer Functions-----------------*/
void InitRedTimerHandle(TIM_HandleTypeDef *htim);
void InitOrangeTimerHandle(TIM_HandleTypeDef *htim);
void InitBlueTimerHandle(TIM_HandleTypeDef *htim);
void InitGreenTimerHandle(TIM_HandleTypeDef *htim);

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);

#ifdef __cplusplus
}
#endif

#endif /* __FLASHY_MAIN_H */
