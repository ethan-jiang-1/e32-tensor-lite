/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "../main_functions.h"
#include "esp_log.h"

#define TAG "MAIN"

extern "C" void app_main(void) {
  ESP_LOGI(TAG, "setup start");
  setup();
  ESP_LOGI(TAG, "Setup done");

  for (int i=0; i<30; i++) {
    ESP_LOGI(TAG, "loop %d", i);
    loop();
  }

  ESP_LOGI(TAG, "end of loop, ESP32 stopped");
}
