#ifndef FONT8X8_H
#define FONT8X8_H

#include <Arduino.h>


typedef struct {
    const unsigned char *data; // 位图数据指针
    uint8_t width;             // 宽度
    uint8_t height;            // 高度
    uint16_t index;             //码点
} fonts8x8_t;

// 声明图标数组
extern const fonts8x8_t fonts8x8[];
extern const uint16_t font8x8_COUNT; // 图标总数




#endif
