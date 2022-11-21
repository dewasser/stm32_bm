/*
 * STM32F042K6 blinky baremetal
 * Anton Wasser 2022
 */

#include <stdint.h>
#include "peripherals.h"

#define pin5 5
#define moder_width 2

GPIOx_t * const GPIOA   = (GPIOx_t  *)	0x48000000; //struct pointer to GPIOA
RCC_t * const RCC = (RCC_t *)	0x40021000; //struct pointer to RCC

void wait_ms(int time); //wait function prototype

int main(void)
{

	RCC->RCC_AHBENR |= 1<<17; //enable clock to GPIOA
	GPIOA->GPIOx_MODER &= ~(3<<(pin5*moder_width)); //reset pin 5 config
	GPIOA->GPIOx_MODER |= (1<<(pin5*moder_width)); //configure pin 5 as output

	while(1)
	{
		GPIOA->GPIOx_ODR ^= (1<<pin5); // toggle pin 5
		wait_ms(500);
	}
}

void wait_ms(int time)
{
	for(int i = 0;i<time;i++)
	{
		for(int k = 0;k<800;k++) //8MHz clock -> 800 clk cycles for a ms
		{}
	}
}
