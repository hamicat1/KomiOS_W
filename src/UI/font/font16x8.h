#ifndef FONT16X8_H
#define FONT16X8_H

#include <Arduino.h>


typedef struct {
    const unsigned char *data; // 位图数据指针
    uint8_t width;             // 宽度
    uint8_t height;            // 高度
} fonts16x8_t;

// 声明图标数组
extern const fonts16x8_t fonts16x8[];
extern const uint8_t font16x8_COUNT; // 图标总数



#endif
