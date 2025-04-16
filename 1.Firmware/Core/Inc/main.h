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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define HVIL_STM32_Pin GPIO_PIN_0
#define HVIL_STM32_GPIO_Port GPIOA
#define EMERG_OUT_Pin GPIO_PIN_1
#define EMERG_OUT_GPIO_Port GPIOA
#define KEYON2_Pin GPIO_PIN_2
#define KEYON2_GPIO_Port GPIOA
#define KEYON1_Pin GPIO_PIN_3
#define KEYON1_GPIO_Port GPIOA
#define AC_PRESSURE_SENSOR_HS_Pin GPIO_PIN_4
#define AC_PRESSURE_SENSOR_HS_GPIO_Port GPIOA
#define AC_PRESSURE_SENSOR_LS_Pin GPIO_PIN_5
#define AC_PRESSURE_SENSOR_LS_GPIO_Port GPIOA
#define COOLANT_PRESSURE_SENSOR_Pin GPIO_PIN_6
#define COOLANT_PRESSURE_SENSOR_GPIO_Port GPIOA
#define COOLANT_TEMP_SENSOR_Pin GPIO_PIN_7
#define COOLANT_TEMP_SENSOR_GPIO_Port GPIOA
#define INVERTER_DRV1_Pin GPIO_PIN_0
#define INVERTER_DRV1_GPIO_Port GPIOB
#define INVERTER_DRV2_Pin GPIO_PIN_1
#define INVERTER_DRV2_GPIO_Port GPIOB
#define INVERTER1_SENSE_Pin GPIO_PIN_2
#define INVERTER1_SENSE_GPIO_Port GPIOB
#define INVERTER2_SENSE_Pin GPIO_PIN_11
#define INVERTER2_SENSE_GPIO_Port GPIOF
#define STM32_SCL_Pin GPIO_PIN_10
#define STM32_SCL_GPIO_Port GPIOB
#define STM32_SDA_Pin GPIO_PIN_11
#define STM32_SDA_GPIO_Port GPIOB
#define TB_3V3__IGNITION_Pin GPIO_PIN_15
#define TB_3V3__IGNITION_GPIO_Port GPIOD
#define PYRO_DRV1_Pin GPIO_PIN_6
#define PYRO_DRV1_GPIO_Port GPIOC
#define PDM_WAKE_Pin GPIO_PIN_8
#define PDM_WAKE_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
