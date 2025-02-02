/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define JOY_B_Pin GPIO_PIN_3
#define JOY_B_GPIO_Port GPIOE
#define JOY_B_EXTI_IRQn EXTI3_IRQn
#define LED4_Pin GPIO_PIN_8
#define LED4_GPIO_Port GPIOI
#define JOY_CTR_Pin GPIO_PIN_11
#define JOY_CTR_GPIO_Port GPIOI
#define JOY_CTR_EXTI_IRQn EXTI15_10_IRQn
#define LED3_Pin GPIO_PIN_4
#define LED3_GPIO_Port GPIOH
#define JOY_A_Pin GPIO_PIN_2
#define JOY_A_GPIO_Port GPIOG
#define JOY_A_EXTI_IRQn EXTI2_IRQn
#define JOY_C_Pin GPIO_PIN_4
#define JOY_C_GPIO_Port GPIOD
#define JOY_C_EXTI_IRQn EXTI4_IRQn
#define JOY_D_Pin GPIO_PIN_5
#define JOY_D_GPIO_Port GPIOD
#define JOY_D_EXTI_IRQn EXTI9_5_IRQn
#define LED1_Pin GPIO_PIN_6
#define LED1_GPIO_Port GPIOB
#define LED2_Pin GPIO_PIN_7
#define LED2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
