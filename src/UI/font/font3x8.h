#ifndef FONT3X8_H
#define FONT3X8_H

#include <Arduino.h>


typedef struct {
    const unsigned char *data; // 位图数据指针
    uint8_t width;             // 宽度
    uint8_t height;            // 高度
} fonts3x8_t;

// 声明图标数组
extern const fonts3x8_t fonts3x8[];
extern const uint8_t font3x8_COUNT; // 图标总数



#endif
