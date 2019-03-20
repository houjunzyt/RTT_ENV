#ifndef _BOARD_H_
#define _BOARD_H_

#include "stm32f4xx.h"

#define DEBUGUSART USART1

void rt_hw_board_init(void);
void SysTick_Handler(void);


#endif
