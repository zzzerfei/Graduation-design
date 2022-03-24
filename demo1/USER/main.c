#include "stm32f10x.h"
#include "led.h"
#include "delay.h"

int main(void)
{	
	My_LED_Init();
	delay_init();
  while(1)
	{
	  GPIO_ResetBits(GPIOC,GPIO_Pin_13);
		delay_ms(300);
		GPIO_SetBits(GPIOC,GPIO_Pin_13);
		delay_ms(300);
	}
 }
