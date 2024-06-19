/*************************************************************************************
 Title	 :  MAXIM Integrated MAX31855 Library for STM32 Using HAL Libraries
 Author  :  Grigoriy Kuzmin
 Software:  STM32CubeIDE
 Hardware:  Any STM32 device
*************************************************************************************/
#ifndef MAX31855_H_
#define MAX31855_H_
#include "main.h"
// ------------------------- Defines -------------------------
extern uint8_t Error;    // Error Detection - 1-> No Connection / 2-> Short to GND / 4-> Short to VCC
// ------------------------- Functions  ----------------------
float Max31855_Read_Temp(SPI_HandleTypeDef *hspi, GPIO_TypeDef *port, uint16_t pin);
#endif