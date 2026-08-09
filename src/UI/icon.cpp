#include "icon.h"



static const unsigned char PROGMEM icon_folder[] =
{ 0b11100000,
  0b10111100,
  0b10111111,
  0b10000001,
  0b10000001,
  0b10000001,
  0b10000001,
  0b11111111 };
static const unsigned char PROGMEM icon_menu[] =
{ 0b10111111,
  0b00000000,
  0b10111111,
  0b00000000,
  0b10111111,
  0b00000000,
  0b10111111,
  0b00000000 };
static const unsigned char PROGMEM icon_settings[] =
{ 0b00011000,
  0b01100110,
  0b01000010,
  0b10011001,
  0b10011001,
  0b01000010,
  0b01100110,
  0b00011000 };
static const unsigned char PROGMEM icon_beep[] =
{ 0b00000100,
  0b00001100,
  0b00010100,
  0b11100101,
  0b11100101,
  0b00010100,
  0b00001100,
  0b00000100 };
static const unsigned char PROGMEM icon_screen[] =
{ 0b11111111,
  0b10000101,
  0b10000011,
  0b10000001,
  0b11111111,
  0b00011000,
  0b00011000,
  0b00111100 };
static const unsigned char PROGMEM icon_time_date[] =
{ 0b10010000,
  0b11110000,
  0b10010000,
  0b10011110,
  0b11110101,
  0b00010111,
  0b00010001,
  0b00001110 };
static const unsigned char PROGMEM icon_info[] =
{ 0b00011000,
  0b00100100,
  0b01011010,
  0b10011001,
  0b10000001,
  0b01011010,
  0b00100100,
  0b00011000 };
static const unsigned char PROGMEM icon_cycle[] =
{ 0b00001000,
  0b00011100,
  0b01001010,
  0b10000001,
  0b10000001,
  0b01000010,
  0b00100100,
  0b00011000 };
static const unsigned char PROGMEM icon_clock[] =
{ 0b00011000,
  0b00100100,
  0b01011010,
  0b10011101,
  0b10011101,
  0b01000010,
  0b00100100,
  0b00011000 };
static const unsigned char PROGMEM icon_question[] =
{ 0b00011000,
  0b00100100,
  0b01011010,
  0b10100101,
  0b10001001,
  0b01000010,
  0b00101100,
  0b00011000 };
static const unsigned char PROGMEM icon_tick[] =
{ 0b00000000,
  0b00000001,
  0b00000011,
  0b00000110,
  0b00001100,
  0b10011000,
  0b01110000,
  0b00100000 };
static const unsigned char PROGMEM icon_cross[] =
{ 0b11000000,
  0b01100010,
  0b00110100,
  0b00011000,
  0b00011100,
  0b00100110,
  0b01000011,
  0b00000001 };
static const unsigned char PROGMEM icon_empty[] =
{ 0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM icon_drive[] =
{ 0b11111111,
  0b10000111,
  0b10000011,
  0b10000001,
  0b10000001,
  0b11111111,
  0b10000101,
  0b11111111 };
static const unsigned char PROGMEM icon_open[] =
{ 0b00000000,
  0b00000000,
  0b00011000,
  0b00100100,
  0b00100100,
  0b01000010,
  0b01000111,
  0b10000010 };
static const unsigned char PROGMEM icon_copy[] =
{ 0b11100000,
  0b10110000,
  0b10010000,
  0b11110000,
  0b00001110,
  0b00001111,
  0b00001111,
  0b00001111 };
static const unsigned char PROGMEM icon_rename[] =
{ 0b00001010,
  0b00010100,
  0b00101000,
  0b01110000,
  0b01000000,
  0b11111100,
  0b10000100,
  0b11111100 };
static const unsigned char PROGMEM icon_delete[] =
{ 0b00011000,
  0b11111111,
  0b00000000,
  0b11111111,
  0b10100101,
  0b10100101,
  0b10100101,
  0b01111110 };
static const unsigned char PROGMEM icon_file[] =
{ 0b11111100,
  0b10000110,
  0b10000111,
  0b10000001,
  0b10000001,
  0b10000001,
  0b10000001,
  0b11111111 };
static const unsigned char PROGMEM icon_loading[] =
{ 0b01001001,
  0b10010010,
  0b00100100,
  0b01001001,
  0b10010010,
  0b00100100,
  0b01001001,
  0b10010010 };
static const unsigned char PROGMEM icon_new[] =
{ 0b00011000,
  0b00011000,
  0b00011000,
  0b11111111,
  0b11111111,
  0b00011000,
  0b00011000,
  0b00011000 };
static const unsigned char PROGMEM icon_upper[] =
{ 0b00011000,
  0b00111100,
  0b01111110,
  0b11111111,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000 };
static const unsigned char PROGMEM icon_smbl[] =
{ 0b01000010,
  0b10100011,
  0b00100110,
  0b01010010,
  0b00010011,
  0b01010110,
  0b00000010,
  0b00010000 };
static const unsigned char PROGMEM icon_up[] =
{ 0b00000000,
  0b00000000,
  0b00011000,
  0b00111100,
  0b01111110,
  0b11111111,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM icon_down[] =
{ 0b00000000,
  0b00000000,
  0b11111111,
  0b01111110,
  0b00111100,
  0b00011000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM icon_left[] =
{ 0b00000100,
  0b00001100,
  0b00011100,
  0b00111100,
  0b00111100,
  0b00011100,
  0b00001100,
  0b00000100 };
static const unsigned char PROGMEM icon_right[] =
{ 0b00100000,
  0b00110000,
  0b00111000,
  0b00111100,
  0b00111100,
  0b00111000,
  0b00110000,
  0b00100000 };
static const unsigned char PROGMEM icon_dot[] =
{ 0b00000000,
  0b00000000,
  0b00000000,
  0b00011000,
  0b00011000,
  0b00000000,
  0b00000000,
  0b00000000 };
static const unsigned char PROGMEM icon_lock[] =
{ 0b00011000,
  0b00100100,
  0b00100100,
  0b11111111,
  0b10000001,
  0b10011001,
  0b10000001,
  0b11111111 };
static const unsigned char PROGMEM icon_Alower[] =
{ 0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100000,
  0b10010000,
  0b10010000,
  0b01110000 };
static const unsigned char PROGMEM icon_Aupper[] =
{ 0b01100000,
  0b01100000,
  0b10010000,
  0b10010010,
  0b10010101,
  0b11110111,
  0b10010111,
  0b10010111 };
static const unsigned char PROGMEM icon_wire[] =
{ 0b00111100,
  0b01100111,
  0b10111100,
  0b10001110,
  0b01110001,
  0b00111101,
  0b11100110,
  0b00111100 };
static const unsigned char PROGMEM icon_language[] =
{ 0b00000100,
  0b00011111,
  0b00010001,
  0b01001010,
  0b10100100,
  0b10111011,
  0b11100000,
  0b10100000 };

const Icon_t icons[] = {
  {icon_folder, 8, 8},//0
  {icon_menu, 8, 8},
  {icon_settings, 8, 8},
  {icon_beep, 8, 8},
  {icon_screen, 8, 8},
  {icon_time_date, 8, 8},
  {icon_info, 8, 8},
  {icon_cycle, 8, 8},
  {icon_clock, 8, 8},
  {icon_question, 8, 8},
  {icon_tick, 8, 8},//10
  {icon_cross, 8, 8},
  {icon_empty, 8, 8},//12
  {icon_drive, 8, 8},
  {icon_open, 8, 8},
  {icon_copy, 8, 8},
  {icon_rename, 8, 8},
  {icon_delete, 8, 8},
  {icon_file, 8, 8},
  {icon_loading, 8, 8},
  {icon_new, 8, 8},//20
  {icon_upper, 8, 8},
  {icon_smbl, 8, 8},
  {icon_up, 8, 8},
  {icon_down, 8, 8},
  {icon_left, 8, 8},
  {icon_right, 8, 8},
  {icon_dot, 8, 8},
  {icon_lock, 8, 8},
  {icon_Alower, 8, 8},
  {icon_Aupper, 8, 8},//30
  {icon_wire, 8, 8},
  {icon_language, 8, 8},
};




static const unsigned char PROGMEM battery_0[] =
{ 0b11111110,
  0b10000010,
  0b10000010,
  0b10000011,
  0b10000011,
  0b10000010,
  0b10000010,
  0b11111110 };
static const unsigned char PROGMEM battery_20[] =
{ 0b11111110,
  0b11000010,
  0b11000010,
  0b11000011,
  0b11000011,
  0b11000010,
  0b11000010,
  0b11111110 };
static const unsigned char PROGMEM battery_40[] =
{ 0b11111110,
  0b11100010,
  0b11100010,
  0b11100011,
  0b11100011,
  0b11100010,
  0b11100010,
  0b11111110 };
static const unsigned char PROGMEM battery_60[] =
{ 0b11111110,
  0b11110010,
  0b11110010,
  0b11110011,
  0b11110011,
  0b11110010,
  0b11110010,
  0b11111110 };
static const unsigned char PROGMEM battery_80[] =
{ 0b11111110,
  0b11111010,
  0b11111010,
  0b11111011,
  0b11111011,
  0b11111010,
  0b11111010,
  0b11111110 };
static const unsigned char PROGMEM battery_100[] =
{ 0b11111110,
  0b11111110,
  0b11111110,
  0b11111111,
  0b11111111,
  0b11111110,
  0b11111110,
  0b11111110 };
static const unsigned char PROGMEM battery_crg[] =
{ 0b11111110,
  0b10001010,
  0b10010010,
  0b10111011,
  0b10010011,
  0b10100010,
  0b10100010,
  0b11111110 };

static const unsigned char PROGMEM battery_wire[] =
{ 0b00100000,
  0b01001110,
  0b11111011,
  0b01001110,
  0b10000000,
  0b00000100,
  0b00000110,
  0b11111111 };

const Battery_t battery[] = {
  {battery_0, 8, 8},//0
  {battery_20, 8, 8},
  {battery_40, 8, 8},
  {battery_60, 8, 8},
  {battery_80, 8, 8},
  {battery_100, 8, 8},
  {battery_crg, 8, 8},
  {battery_wire, 8, 8},
};






void k_icon_show(uint8_t x,uint8_t y,uint8_t index,uint8_t bank,bool white){
  if(bank==0){
    const Icon_t *icon=&icons[index];
    k_screen_bmp(x,y,icon->data,icon->width,icon->height,white);
  }
  if(bank==1){
    const fonts3x8_t *font=&fonts3x8[index];
    k_screen_bmp(x,y,font->data,font->width,font->height,white);
  }
  if(bank==2){
    const Battery_t *batt=&battery[index];
    k_screen_bmp(x,y,batt->data,batt->width,batt->height,white);
  }
  if(bank==3){
    const fonts8x8_t *font8=&fonts8x8[index];
    k_screen_bmp(x,y,font8->data,font8->width,font8->height,white);
  }


}

uint8_t k_font_char(uint8_t x,uint8_t y,uint16_t index,char font[],bool white){
  if(strcmp(font,"font3x8")==0){
    const fonts3x8_t *font=&fonts3x8[index-32];
    k_screen_bmp(x,y,font->data,font->width,font->height,white);
    return font->width;
  }
  if(strcmp(font,"font8x8")==0){
    const fonts8x8_t *font8=NULL;
    for (int i = 0; i < font8x8_COUNT; i++) {
      if (fonts8x8[i].index == index) {
        font8=&fonts8x8[i];
        break;
      }
    }
    k_screen_bmp(x,y,font8->data,font8->width,font8->height,white);
    return font8->width;
  }
}


Utf8CharInfo k_font_unicode(const char *str){
  Utf8CharInfo info = {0, 1};
  if (!str || !*str) return info;
  uint8_t c0 = (uint8_t)*str;
  if (c0 < 0x80) {
    info.code = c0;
    info.len = 1;
  }
  else if ((c0 & 0xE0) == 0xC0) {
    if (*(str + 1) == '\0') return info;
    info.code = ((uint32_t)(c0 & 0x1F) << 6) | ((uint8_t)*(str + 1) & 0x3F);
    info.len = 2;
  }
  else if ((c0 & 0xF0) == 0xE0) {
    if (*(str + 1) == '\0' || *(str + 2) == '\0') return info; // 边界保护
    info.code = ((uint32_t)(c0 & 0x0F) << 12) | 
                ((uint32_t)((uint8_t)*(str + 1) & 0x3F) << 6) | 
                ((uint8_t)*(str + 2) & 0x3F);
    info.len = 3;
  }
  else {
    info.len = 1;
  }
  return info;
}