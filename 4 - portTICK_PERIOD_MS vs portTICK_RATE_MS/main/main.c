#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/timers.h"


void app_main(void)
{
    printf("\n");
    printf("the portTICK_PERIOD_MS is %d\n", portTICK_PERIOD_MS);
    printf("the portTICK_RATE_MS is %d\n", portTICK_RATE_MS); // versão antiga



}