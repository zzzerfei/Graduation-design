#include "stm32f10x.h"
#include "led.h"
#include "delay.h"
#include "myus.h"
#include "hcsr.h"

int main(void)
{	
	// ÖÐ¶ÏÄ£Ê½
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	
	My_LED_Init();
	delay_init();
	My_US_Init();
	My_CSB_Init();

	
  while(1)
	{
		float dis=Distance();
		printf("%10f",dis);

	  // GPIO_ResetBits(GPIOC,GPIO_Pin_13);
		// delay_ms(300);
		// GPIO_SetBits(GPIOC,GPIO_Pin_13);
		// delay_ms(300);
	}
 }
