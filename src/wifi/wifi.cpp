#include "wifi.h"

const char* ssid = "CMCC-A0";
const char* password = "0580jun8857885";



void k_wifi_init() {
  //esp_reset_reason_t reason = esp_reset_reason();
  //Serial.println(reason);
  //k_desktop_notice("WIFI", "CONNECT WITH PRE-SET");

  //k_desktop_notice("WIFI", "Connect DONE");
  //k_screen_display();
  //int timeout = 0;
  //const int max_timeout = 40;
  WiFi.disconnect(true);
  Serial.printf("Connecting to %s ", ssid);
  WiFi.begin(ssid, password,1);
  while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      esp_task_wdt_reset();
      Serial.print(".");
      Serial.printf(" (Status: %d)", WiFi.status());
  }
  Serial.println(" CONNECTED");
    //timeout++;
    //k_screen_word("dick",true,0,0,"font3x8");
    //k_screen_display();
    //if (timeout >= max_timeout) {
    //k_desktop_notice("WIFI", "Connect Failed");
    //WiFi.disconnect();
    //delay(2000);
    //return; // 退出函数，避免死锁
    //}
  //}
  //k_desktop_notice("WIFI", "Connected!");

}
