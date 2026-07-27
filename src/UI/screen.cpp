#include "screen.h"

void k_screen_init(){
  oled_init();
}
void k_screen_display(){
  oled_display();
}
void k_screen_clear(){
  oled_clear();
}
void k_screen_dim(uint8_t dim_sta){
  oled_dim(dim_sta);
}

void k_screen_text(char str[],bool white,uint8_t posx,uint8_t posy,char font[],uint8_t size){
  oled_text(str,white,posx,posy,font,size);
}

void k_screen_line(uint8_t x0,uint8_t y0,uint8_t x1,uint8_t y1,bool white){
  oled_line(x0,y0,x1,y1,white);
}

void k_screen_bmp(uint8_t x,uint8_t y,const unsigned char bitmap[],uint8_t w,uint8_t h,bool white){
  oled_bmp(x,y,bitmap,8,8,white);
}

//font:font3x8,Defaut
void k_screen_word(char *str,bool white,uint8_t posx,uint8_t posy,char font[],int charLim){
  
  const char *wordstr=k_word_base(str,0);
  uint16_t str_len=strlen(wordstr);
  char k_word_temp;
  uint8_t xskip;
  uint8_t word_code=0;
  if (strcmp(font,"font3x8")==0){
    xskip=4;
  }
  uint8_t maxCharsPerLine = (128 - posx) / xskip;
  if (charLim > 0 && charLim < maxCharsPerLine) {
    maxCharsPerLine = charLim;
  }
  uint8_t currentX = posx;
  uint8_t currentY = posy;
  uint8_t charsOnLine = 0;
  for(int i=0;i<str_len;i++){
    k_word_temp=wordstr[i];
    if (k_word_temp == '\n') {
      currentX = posx;
      currentY += 8; // 字体高度
      charsOnLine = 0;
      continue;
    }
    if (charsOnLine >= maxCharsPerLine) {
      currentX = posx;
      currentY += 8;
      charsOnLine = 0;     
      if (currentY > 64) break; 
    }
    word_code=k_word_temp-32;
    k_icon_show(currentX,currentY,word_code,1,white);
    currentX += xskip;
    charsOnLine++;
  }
}

void k_screen_fillRect(uint8_t x0,uint8_t y0,uint8_t x1,uint8_t y1,bool white){
  oled_fillRect(x0, y0, x1, y1, white);
}

void k_screen_invertRect(uint8_t x0,uint8_t y0,uint8_t x1,uint8_t y1){
  oled_invertRect(x0, y0, x1, y1);
}
void k_screen_blurRect(uint8_t x,uint8_t y,uint8_t w,uint8_t h){
  oled_blurRect(x,y,w,h);
}