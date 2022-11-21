#ifndef PERIPHERALS_H
#define PERIPHERALS_H

#define VOL volatile

typedef struct GPIOx_t{
	VOL uint32_t GPIOx_MODER;
	VOL uint32_t GPIOx_OTYPER;
	VOL uint32_t GPIOx_OSPEEDR;
	VOL uint32_t GPIOx_PUPDR;
	VOL uint32_t GPIOx_IDR;
	VOL uint32_t GPIOx_ODR;
	VOL uint32_t GPIOx_BSRR;
	VOL uint32_t GPIOx_LCKR;
	VOL uint32_t GPIOx_AFRL;
	VOL uint32_t GPIOx_AFRH;
	VOL uint32_t GPIOx_BRR;
}GPIOx_t;

typedef struct SYSCFG{
	VOL uint32_t SYSCFG_CFGR1;
	VOL uint32_t SYSCFG_EXTICR1;
	VOL uint32_t SYSCFG_EXTICR2;
	VOL uint32_t SYSCFG_EXTICR3;
	VOL uint32_t SYSCFG_EXTICR4;
	VOL uint32_t SYSCFG_CFGR2;
}SYSCFG;

typedef struct RCC_t{
	VOL uint32_t RCC_CR;
	VOL uint32_t RCC_CFGR;
	VOL uint32_t RCC_CIR;
	VOL uint32_t RCC_APB2RSTR;
	VOL uint32_t RCC_APB1RSTR;
	VOL uint32_t RCC_AHBENR;
	VOL uint32_t RCC_APB2ENR;
	VOL uint32_t RCC_APB1ENR;
	VOL uint32_t RCC_BDCR;
	VOL uint32_t RCC_CSR;
	VOL uint32_t RCC_AHBRSTR;
	VOL uint32_t RCC_CFGR2;
	VOL uint32_t RCC_CFGR3;
	VOL uint32_t RCC_CR2;
}RCC_t;

extern RCC_t * const RCC;
extern GPIOx_t * const GPIOA;

#endif
