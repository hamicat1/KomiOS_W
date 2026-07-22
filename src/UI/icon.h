#ifndef ICON_H
#define ICON_H

#include "screen.h"

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
    const unsigned char *data; // 位图数据指针
    uint8_t width;             // 宽度
    uint8_t height;            // 高度
} fonts3x8_t;

// 声明图标数组
extern const fonts3x8_t fonts3x8[];
extern const uint8_t font3x8_COUNT; // 图标总数




void k_icon_show(uint8_t x,uint8_t y,uint8_t index,uint8_t bank,bool white);
#endif
