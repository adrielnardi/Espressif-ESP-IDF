#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/timers.h"


void app_main(void)
{
    printf("Tick in microseconds\n");
    printf("Timer: %11lld microseconds\n", esp_timer_get_time());
    vTaskDelay(1);
    printf("Timer: %11lld microseconds\n", esp_timer_get_time()); 

    printf("\n");

    printf("1 / portTICK_RATE_MS in microseconds\n");
    printf("Timer: %11lld microseconds\n", esp_timer_get_time());
    vTaskDelay(1 / portTICK_RATE_MS);
    printf("Timer: %11lld microseconds\n", esp_timer_get_time()); 

}