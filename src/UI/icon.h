#ifndef ICON_H
#define ICON_H

#include "screen.h"
#include "font/font3x8.h"
#include "font/font8x8.h"

#define LOGO_HEIGHT   8
#define LOGO_WIDTH    8



typedef struct {
    const unsigned char *data; // 位图数据指针
    uint8_t width;             // 宽度
    uint8_t height;            // 高度
} Icon_t;

// 声明图标数组
extern const Icon_t icons[];
extern const uint8_t ICON_COUNT; // 图标总数

typedef struct {
    const unsigned char *data; // 位图数据指针
    uint8_t width;             // 宽度
    uint8_t height;            // 高度
} Battery_t;

// 声明图标数组
extern const Battery_t battery[];
extern const uint8_t battery_COUNT; // 图标总数


typedef struct {
  uint32_t code; // Unicode 码点
  uint8_t len;   // 占用字节数 (1, 2, 3)
} Utf8CharInfo;

void k_icon_show(uint8_t x,uint8_t y,uint8_t index,uint8_t bank,bool white);
uint8_t k_font_char(uint8_t x,uint8_t y,uint16_t index,char font[],bool white);
Utf8CharInfo k_font_unicode(const char *str);
#endif
