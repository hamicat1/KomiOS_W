#ifndef OLED_H
#define OLED_H

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for SSD1306 display connected using software SPI (default case):
#define OLED_MOSI  11
#define OLED_CLK   12
#define OLED_DC    9
#define OLED_CS    10
#define OLED_RESET 8


#define SUPPORT_TRANSACTIONS

void k_saveScreen();
void k_restoreScreen();
void oled_init();
void oled_text(char str[],bool white,uint8_t posx,uint8_t posy,char font[],uint8_t size);
void oled_display();
void oled_clear();
void oled_dim(uint8_t dim_sta);
void oled_line(uint8_t x0,uint8_t y0,uint8_t x1,uint8_t y1,bool white);
void oled_bmp(uint8_t x,uint8_t y,const unsigned char bitmap[],uint8_t w,uint8_t h,bool white);
void oled_fillRect(uint8_t x0,uint8_t y0,uint8_t x1,uint8_t y1,bool white);
void oled_invertRect(uint8_t x0,uint8_t y0,uint8_t x1,uint8_t y1);
void oled_blurRect(uint8_t x,uint8_t y,uint8_t w,uint8_t h);
#endif
