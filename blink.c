#include "reg.h"
int main(void)
{
    // RCC AHB1
    *(volatile uint32_t*)(RCC_AHB1) |= (1 << 3);
    // GPIO
    volatile gpio* gpio_device = (volatile gpio*)(GPIOD);
    gpio_device->moder |= (1 << 30);
    gpio_device->ospeedr |= (1 << 31);
    gpio_device->ospeedr |= (1 << 30);
    int i = 0;
    while(1)
    {
        for (i = 0; i < 100000; i++);
        gpio_device->bsrr |= (1 << 31);
        for (i = 0; i < 100000; i++);
        gpio_device->bsrr |= (1 << 15);
    }
    return 0;
}