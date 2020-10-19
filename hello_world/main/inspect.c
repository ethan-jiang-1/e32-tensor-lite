#include <freertos/FreeRTOS.h>
//#include "sdkconfig.h"
#include "esp_log.h"

#define TAG "inspect"

void inspect_memory(const char* mark)
{
    int free_mem_all = esp_get_free_heap_size();
    int free_mem_fast = heap_caps_get_free_size(MALLOC_CAP_8BIT | MALLOC_CAP_INTERNAL);
    int free_mem_slow = heap_caps_get_free_size(MALLOC_CAP_8BIT | MALLOC_CAP_SPIRAM);
    ESP_LOGW(TAG, "%s %d %d %d", mark, free_mem_all, free_mem_fast, free_mem_slow);
}

void inspect_number(const char* mark, size_t num)
{
    ESP_LOGW(TAG, "%s %d", mark, num);
}

void inspect_pointer(const char* mark, void* p)
{
    ESP_LOGW(TAG, "%s %p", mark, p);
}