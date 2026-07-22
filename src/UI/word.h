#ifndef WORD_H
#define WORD_H

#include "../../komiapi.h"

typedef struct {
    const char *data;
} k_word_en_t;

extern const k_word_en_t words_en[];

const char* k_word_base(char *str,uint8_t lang);

#endif
