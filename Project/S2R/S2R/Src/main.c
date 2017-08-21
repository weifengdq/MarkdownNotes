/**
  ******************************************************************************
  * File Name          : main.c
  * Description        : Main program body
  ******************************************************************************
  *
  * COPYRIGHT(c) 2017 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f4xx_hal.h"
#include "adc.h"
#include "dma.h"
#include "usart.h"
#include "gpio.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
/* Private variables ---------------------------------------------------------*/
uint32_t ADC_Value[100];

uint8_t rx1Buffer[1];

uint8_t tx2Buffer[1] ={0x55};
uint8_t rx2Buffer[2];
uint8_t rx2Flag = 0;
uint16_t distance2 = 0; 

uint8_t rx3Buffer[1];
uint8_t buffer3[9];
uint8_t rx3Flag = 0;
uint16_t distance3;
uint16_t strength3;

uint8_t rx4Buffer[9];
uint8_t rx4Flag = 0;
uint16_t distance4;
uint16_t strength4;
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
void Error_Handler(void);

/* USER CODE BEGIN PFP */
/* Private function prototypes -----------------------------------------------*/
// uint16_t tf3Measure(void);
// uint16_t tf4Measure(void);
/* USER CODE END PFP */

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

int main(void)
{

  /* USER CODE BEGIN 1 */
	for(uint32_t i=0; i<1000000; i++);
  // uint16_t i;
  // uint32_t ad4, ad5, ad6;
  // uint8_t dis2Flag = 0;
  // uint8_t dis3Flag = 0;
  // uint8_t dis4Flag = 0;
  /* USER CODE END 1 */

  /* MCU Configuration----------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* Configure the system clock */
  SystemClock_Config();

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();
  MX_USART1_UART_Init();
  MX_ADC1_Init();
  MX_UART4_Init();
  MX_USART3_UART_Init();
  MX_USART2_UART_Init();

  /* USER CODE BEGIN 2 */
  HAL_ADC_Start_DMA(&hadc1, (uint32_t*)&ADC_Value, 99);
  //HAL_UART_Receive_IT(&huart1, (uint8_t *)rx1Buffer, 1);
  //HAL_UART_Receive_IT(&huart2, (uint8_t *)rx2Buffer, 2);
  HAL_UART_Receive_IT(&huart3, (uint8_t *)rx3Buffer, RX3BUFFERSIZE);
  //HAL_UART_Receive_IT(&huart4, (uint8_t *)rx4Buffer, 9);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
  /* USER CODE END WHILE */

  /* USER CODE BEGIN 3 */
    // printf("Hello, World123\n");

    //HAL_UART_Receive_IT(&huart1, (uint8_t *)rx1Buffer, 1);
    //HAL_Delay(5);

    // for(i=0, ad4 = 0, ad5 = 0, ad6 = 0; i < 99; ) {
    //   ad4 += ADC_Value[i++];
    //   ad5 += ADC_Value[i++];
    //   ad6 += ADC_Value[i++];
    // }
    // ad4 /= 33;
    // ad5 /= 33;
    // ad6 /= 33;

    //0~4096 
    //Ultrasonic sensor: 20~4500mm  4000->4000
    //TFmini: 300~12000mm     10000->4000
    //printf("%d, %d, %d\n", ad4, ad5, ad6);		

    // while(HAL_UART_Transmit(&huart2, (uint8_t *)tx2Buffer, 1, 0xFFFF)!=HAL_OK);
    //Ultrasonic sensor need 4.5*2/340 = 26ms.
    //You can use HAL_UART_Transmit for 30ms once. 
    //Maybe HAL_Delay or Timer Interrupt is needed. 
    
    //HAL_UART_Transmit(&huart2, (uint8_t *)tx2Buffer, 1, 0xFFFF);
    
    // if(rx2Flag) { 
    //   //printf("Hello, World! \r\n");
    //   printf("Second: (%d, %d) \r\n", ad4, distance2);
		// 	rx2Flag = 0;
    //   //HAL_UART_Receive_IT(&huart2, (uint8_t *)rx2Buffer, 2);
    //   //HAL_UART_Receive_IT(&huart3, (uint8_t *)rx3Buffer, 9);
		// 	if(distance2 >= 400 && distance2 <= 4500) {  //mm
		// 		//printf("Second: (%d, %d) \r\n", ad4, distance2);
    //     if(ad4>50) {
    //       if(distance2 < ad4) {
    //         HAL_GPIO_WritePin(RE2_GPIO_Port, RE2_Pin, GPIO_PIN_SET);
    //         dis2Flag = 1;
    //       } else if(dis2Flag && distance2 <= ad4 + 50) {
    //         HAL_GPIO_WritePin(RE2_GPIO_Port, RE2_Pin, GPIO_PIN_SET);
    //       } else if (distance2 >= ad4 + 50) {
    //         dis2Flag = 0;
    //         HAL_GPIO_WritePin(RE2_GPIO_Port, RE2_Pin, GPIO_PIN_RESET);
    //       } else {
    //         HAL_GPIO_WritePin(RE2_GPIO_Port, RE2_Pin, GPIO_PIN_RESET);
    //       }
    //     }
    //   }
    // }

    if(rx3Flag) {
      rx3Flag = 0;
      HAL_UART_Receive_IT(&huart3, (uint8_t *)rx3Buffer, 9);
      //HAL_UART_Receive_IT(&huart4, (uint8_t *)rx4Buffer, 9);
      printf("Third: (%4d, %4d) \r\n", ad5, strength3);
      if(strength3 > 5 && strength3 < 1800 && distance3 >= 300 && distance3 <= 12000) {  //mm
        //printf("distance3 = %d \n", distance3);
        if(ad5>400) {
          if(distance3 < ad5) {
            HAL_GPIO_WritePin(RE3_GPIO_Port, RE3_Pin, GPIO_PIN_SET);
            dis3Flag = 1;
          } else if(dis3Flag && distance3 <= ad5 + 50) {
            HAL_GPIO_WritePin(RE3_GPIO_Port, RE3_Pin, GPIO_PIN_SET);
          } else if (distance3 >= ad5 + 50) {
            dis3Flag = 0;
            HAL_GPIO_WritePin(RE3_GPIO_Port, RE3_Pin, GPIO_PIN_RESET);
          } else {
            HAL_GPIO_WritePin(RE3_GPIO_Port, RE3_Pin, GPIO_PIN_RESET);
          }
        }
      }
    }

    // if(rx4Flag) {
    //   rx4Flag = 0;
    //   printf("Hello, World222! \r\n");
    //   //HAL_UART_Receive_IT(&huart4, (uint8_t *)rx4Buffer, 9);
    //   HAL_UART_Receive_IT(&huart2, (uint8_t *)rx2Buffer, 2);
    //   printf("(%4d, %4d), (%4d, %4d), (%4d, %4d). \r\n", ad4, distance2, ad5, distance3, ad6, distance4);
    //   distance2 = 65535;  //器件带电插拔保证数据不出错.
    //   distance3 = 65535;
    //   distance4 = 65535;
    //   if(strength4 > 5 && strength4 < 1800 && distance4 >= 300 && distance4 <= 12000) {
    //     //printf("Fourth: (%4d, %4d) \n", distance4);
    //     if(ad6>400) {
    //       if(distance4 < ad6) {
    //         HAL_GPIO_WritePin(RE4_GPIO_Port, RE4_Pin, GPIO_PIN_SET);
    //         dis4Flag = 1;
    //       } else if(dis4Flag && distance4 <= ad6 + 50) {
    //         HAL_GPIO_WritePin(RE4_GPIO_Port, RE4_Pin, GPIO_PIN_SET);
    //       } else if (distance4 >= ad6 + 50) {
    //         dis4Flag = 0;
    //         HAL_GPIO_WritePin(RE4_GPIO_Port, RE4_Pin, GPIO_PIN_RESET);
    //       } else {
    //         HAL_GPIO_WritePin(RE4_GPIO_Port, RE4_Pin, GPIO_PIN_RESET);
    //       }
    //     }
    //   }
    // }

    
    

	//HAL_Delay(10);
    


  //   distance4 = tf4Measure();
  //   if(distance4 > 0) {
  //     printf("%d\n", distance4);
  //   }

  //   HAL_Delay(5);

  //   distance3 = tf3Measure();
  //   if(distance3 > 0) {
  //     printf("distance3 = %d\n", distance3);
  //     if(distance3 > 0) {
  //       HAL_GPIO_WritePin(RE3_GPIO_Port, RE3_Pin, GPIO_PIN_SET);
  //     } else if(distance3 < 0) {
  //       HAL_GPIO_WritePin(RE3_GPIO_Port, RE3_Pin, GPIO_PIN_RESET);
  //     } else {
  //       HAL_GPIO_WritePin(RE3_GPIO_Port, RE3_Pin, GPIO_PIN_RESET);
  //     }
  //   }
  }
  /* USER CODE END 3 */

}

/** System Clock Configuration
*/
void SystemClock_Config(void)
{

  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;

    /**Configure the main internal regulator output voltage 
    */
  __HAL_RCC_PWR_CLK_ENABLE();

  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

    /**Initializes the CPU, AHB and APB busses clocks 
    */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 6;
  RCC_OscInitStruct.PLL.PLLN = 168;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 4;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

    /**Initializes the CPU, AHB and APB busses clocks 
    */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5) != HAL_OK)
  {
    Error_Handler();
  }

    /**Configure the Systick interrupt time 
    */
  HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq()/1000);

    /**Configure the Systick 
    */
  HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK);

  /* SysTick_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(SysTick_IRQn, 0, 0);
}

/* USER CODE BEGIN 4 */
// void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart) {
//   UNUSED(huart);

// 	if(huart->Instance == huart2.Instance) {
// 		rx2Flag = 1;
// 		distance2 = rx2Buffer[0] * 256 + rx2Buffer[1];
// 		rx2Buffer[0] = 0;
// 		rx2Buffer[1] = 0;
// 	}

//   if(huart->Instance == huart3.Instance) {
//     // if(rx3Buffer[0] == 0x59 && rx3Buffer[1] == 0x59) {
//     //   uint16_t checksum  = 0;
//     //   for(int i = 0; i < 8; i++) {
//     //     checksum += rx3Buffer[i];
//     //   }
//     //   if(rx3Buffer[8] == checksum % 256) {
//     //     rx3Flag = 1;
//     //     distance3 = rx3Buffer[2] + rx3Buffer[3] * 256;
//     //     strength3 = rx3Buffer[4] + rx3Buffer[5] * 256;
//     //   }
//     // }
//     if(rx3Buffer[0] == 0x59) {
//       rx3Buufer
//     }
//   }

//   if(huart->Instance == huart4.Instance) {
//     if(rx4Buffer[0] == 0x59 && rx4Buffer[1] == 0x59) {
//       uint16_t checksum  = 0;
//       for(int i = 0; i < 8; i++) {
//         checksum += rx4Buffer[i];
//       }
//       if(rx4Buffer[8] == checksum % 256) {
//         rx4Flag = 1;
//         distance4 = rx4Buffer[2] + rx4Buffer[3] * 256;
//         strength4 = rx4Buffer[4] + rx4Buffer[5] * 256;
//       }
//     }
//   }

// }


// uint16_t tf3Measure(void) {
//   if(HAL_UART_Receive(&huart3, rx3Buffer, 9, 0xFFFF) == 0) {
//     //printf("hello, world\n");
//     if(rx3Buffer[0] == 0x59 && rx3Buffer[1] == 0x59) {
//       uint16_t checksum  = 0;
//       for(int i = 0; i < 8; i++) {
//         checksum += rx3Buffer[i];
//       }
//       if(rx3Buffer[8] == checksum % 256) {
//         return (rx3Buffer[2] + rx3Buffer[3] * 256);
//       }
//     }
//   }
//   return 0;
// }

// uint16_t tf4Measure(void) {
//   if(HAL_UART_Receive(&huart4, rx4Buffer, 9, 0xFFFF) == 0) {
//     if(rx4Buffer[0] == 0x59 && rx4Buffer[1] == 0x59) {
//       uint16_t checksum  = 0;
//       for(int i = 0; i < 8; i++) {
//         checksum += rx4Buffer[i];
//       }
//       if(rx4Buffer[8] == checksum % 256) {
//         return (rx4Buffer[2] + rx4Buffer[3] * 256);
//       }
//     }
//   }
//   return 0;
// }
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @param  None
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler */
  /* User can add his own implementation to report the HAL error return state */
  while(1) 
  {
  }
  /* USER CODE END Error_Handler */ 
}

#ifdef USE_FULL_ASSERT

/**
   * @brief Reports the name of the source file and the source line number
   * where the assert_param error has occurred.
   * @param file: pointer to the source file name
   * @param line: assert_param error line source number
   * @retval None
   */
void assert_failed(uint8_t* file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
    ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */

}

#endif

/**
  * @}
  */ 

/**
  * @}
*/ 

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
