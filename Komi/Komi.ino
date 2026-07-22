/*
 * Copyright 2026 Hamicat
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "komiapi.h"
uint16_t k_menu_sel=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println(ESP.getFreeHeap());
  Serial.printf("Min Stack Free: %d\n", uxTaskGetStackHighWaterMark(NULL));
  esp_reset_reason_t reason = esp_reset_reason();
  Serial.println(reason);

  //k_wifi_init();
  k_sys_init(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  k_system();
  if (k_menu_sel==0){
    k_desktop_init();
  }
  if (SEL_KEY==0){
    k_desktop_menu();
  }
}

