#include <stdio.h>
#include "pico/stdlib.h"

#define LED 29

int main(){
    gpio_init(LED);
    gpio_set_dir(LED, GPIO_OUT);
    while (1)
    {
        gpio_put(LED, 1);
        sleep_us(10000);
        gpio_put(LED, 0);
        sleep_us(10000);

    }
    
}