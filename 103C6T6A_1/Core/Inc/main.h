/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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
#define LED_CAN_Pin GPIO_PIN_14
#define LED_CAN_GPIO_Port GPIOC
#define ENC_C_Pin GPIO_PIN_0
#define ENC_C_GPIO_Port GPIOA
#define ENC_D_Pin GPIO_PIN_1
#define ENC_D_GPIO_Port GPIOA
#define LED_GREEN_Pin GPIO_PIN_0
#define LED_GREEN_GPIO_Port GPIOB
#define LED_YELLOW_Pin GPIO_PIN_1
#define LED_YELLOW_GPIO_Port GPIOB
#define DIN_H_Pin GPIO_PIN_2
#define DIN_H_GPIO_Port GPIOB
#define DIN_F_Pin GPIO_PIN_10
#define DIN_F_GPIO_Port GPIOB
#define DIN_G_Pin GPIO_PIN_11
#define DIN_G_GPIO_Port GPIOB
#define CS_Pin GPIO_PIN_12
#define CS_GPIO_Port GPIOB
#define DIN_C_Pin GPIO_PIN_13
#define DIN_C_GPIO_Port GPIOB
#define DIN_D_Pin GPIO_PIN_14
#define DIN_D_GPIO_Port GPIOB
#define ENC_A_Pin GPIO_PIN_8
#define ENC_A_GPIO_Port GPIOA
#define ENC_B_Pin GPIO_PIN_9
#define ENC_B_GPIO_Port GPIOA
#define DIN_A_Pin GPIO_PIN_11
#define DIN_A_GPIO_Port GPIOA
#define DIN_B_Pin GPIO_PIN_12
#define DIN_B_GPIO_Port GPIOA
#define DIN_E_Pin GPIO_PIN_15
#define DIN_E_GPIO_Port GPIOA
#define ENC_E_Pin GPIO_PIN_4
#define ENC_E_GPIO_Port GPIOB
#define ENC_F_Pin GPIO_PIN_5
#define ENC_F_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
