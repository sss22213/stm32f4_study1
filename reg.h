#ifndef __REG__H__
#define __REG__H__
#include <stdint.h>

typedef struct gpio gpio;
// RCC
#define RCC_BASE 0x40023800
#define RCC_CR (RCC_BASE)
#define RCC_PLLCFGR (RCC_BASE + 0x04)
#define RCC_CFGR (RCC_BASE + 0x08)
#define RCC_AHB1 (RCC_BASE + 0x30)

// FLASH
#define FLASH_BASE 0x40023C00
#define FLASH_ACR (FLASH_BASE)
// GPIO
#define GPIO_BASE 0x40020000
#define GPIOA (GPIO_BASE)
#define GPIOB (GPIO_BASE + 0x400)
#define GPIOC (GPIO_BASE + 0x800)
#define GPIOD (GPIO_BASE + 0xC00)

typedef struct gpio
{
    uint32_t moder;
    uint32_t otyper;
    uint32_t ospeedr;
    uint32_t pupdr;
    uint32_t idr;
    uint32_t odr;
    uint32_t bsrr;
}gpio;

#endif