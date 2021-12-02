#include <stdio.h>
#include "esp_log.h"

#define TAG "MY TAG"

void app_main(void)
{
    printf("Hello World! \n");
    ESP_LOGI(TAG,"Message");
}
