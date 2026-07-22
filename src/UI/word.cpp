#include "word.h"

const k_word_en_t words_en[] = {
    {"FILE"},
};

//lang:0=en,1=cn
const char* k_word_base(char *str,uint8_t lang){
  uint8_t index=0;
  if (strcmp(str,"file")==0){
    index=0;
  }
  else{
    return str;
  }

  if (lang==0){
    const k_word_en_t *word=&words_en[index];
  }
  const k_word_en_t *word=&words_en[index];
  return word->data;
  
}
