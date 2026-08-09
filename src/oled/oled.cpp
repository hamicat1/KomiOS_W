#include "oled.h"

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT,
OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);



uint8_t screenSnapshot[1024];

void k_saveScreen() {
  memcpy(&screenSnapshot, display.getBuffer(), 1024);
}

void k_restoreScreen() {
  memcpy(display.getBuffer(), screenSnapshot, 1024);
  display.display(); 
}

void oled_init(){

  if(!display.begin(SSD1306_SWITCHCAPVCC)) {
  Serial.println(F("SSD1306 allocation failed"));
  for(;;); // Don't proceed, loop forever
  }
  display.display();
  delay(500);

}

void oled_display(){
  display.display();
}

void oled_clear(){
  display.clearDisplay();
}

void oled_dim(uint8_t dim_sta){
  display.ssd1306_command(SSD1306_SETCONTRAST);
  display.ssd1306_command(dim_sta);
}

void oled_text(char str[],bool white,uint8_t posx,uint8_t posy,char font[],uint8_t size){
  display.setTextSize(size);      // Normal 1:1 pixel scale
  display.setTextColor(white?SSD1306_WHITE:SSD1306_BLACK); // Draw white text
  display.setCursor(posx, posy);     // Start at top-left corner
  display.cp437(true); 
  display.write(str);
}

void oled_line(uint8_t x0,uint8_t y0,uint8_t x1,uint8_t y1,bool white){

  display.drawLine(x0,y0,x1,y1,white?SSD1306_WHITE:SSD1306_BLACK);
}

void oled_bmp(uint8_t x,uint8_t y,const unsigned char bitmap[],uint8_t w,uint8_t h,bool white){

  display.drawBitmap(x,y,bitmap,w,h,white?SSD1306_WHITE:SSD1306_BLACK);
}

void oled_fillRect(uint8_t x0,uint8_t y0,uint8_t x1,uint8_t y1,bool white){
  display.fillRect(x0, y0, x1, y1, white ? SSD1306_WHITE:SSD1306_BLACK);
}
void oled_invertRect(uint8_t x,uint8_t y,uint8_t w,uint8_t h){
  for (uint8_t i = 0; i < w; i++) {
    for (uint8_t j = 0; j < h; j++) {
      bool pixel = display.getPixel(x + i, y + j);
      display.drawPixel(x + i, y + j, !pixel ? WHITE : BLACK);
    }
  }
}
void oled_blurRect(uint8_t x,uint8_t y,uint8_t w,uint8_t h){
  uint8_t dir=1;
  for (uint8_t i = 0; i < w; i+=1) {
    if (dir%2==0){
      dir=1;
    }
    else{
      dir=0;
    }
    for (dir; dir < h; dir+=2) {
      display.drawPixel(x + i, y + dir,WHITE);
    }
  }
}