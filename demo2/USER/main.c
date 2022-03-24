#include "stm32f10x.h"
#include "led.h"
#include "delay.h"
#include "myus.h"

int main(void)
{	
	My_LED_Init();
	delay_init();
	My_US_Init();
	
  while(1)
	{
	  GPIO_ResetBits(GPIOC,GPIO_Pin_13);
		delay_ms(300);
		GPIO_SetBits(GPIOC,GPIO_Pin_13);
		delay_ms(300);
	}
 }
