#ifndef SCREEN_H
#define SCREEN_H

#include "../../komiapi.h"
#include "../oled/oled.h"

void k_screen_init();
void k_screen_text(char str[],bool white,uint8_t posx,uint8_t posy,char font[],uint8_t size);
void k_screen_display();
void k_screen_clear();
void k_screen_dim(uint8_t dim_sta);
void k_screen_line(uint8_t x0,uint8_t y0,uint8_t x1,uint8_t y1,bool white);
void k_screen_bmp(uint8_t x,uint8_t y,const unsigned char bitmapnam[],uint8_t w,uint8_t h,bool white);
void k_screen_word(char *str,bool white,uint8_t posx,uint8_t posy,char font[],int charLim);
void k_screen_fillRect(uint8_t x0,uint8_t y0,uint8_t x1,uint8_t y1,bool white);
void k_screen_invertRect(uint8_t x0,uint8_t y0,uint8_t x1,uint8_t y1);
void k_screen_blurRect(uint8_t x,uint8_t y,uint8_t w,uint8_t h);



#endif
