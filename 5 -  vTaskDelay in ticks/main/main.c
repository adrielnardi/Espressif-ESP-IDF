#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/timers.h"


void app_main(void)
{
    printf("\n");
    printf("Timer: %11lld microseconds\n", esp_timer_get_time());
    vTaskDelay(1);
    printf("Timer: %11lld microseconds\n", esp_timer_get_time()); 

}