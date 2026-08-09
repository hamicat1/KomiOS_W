#include "word.h"

//lang:0=en,1=





#define MAX_KEYS 50
typedef struct {
    char key[20];
    char text[64];
} WordEntry;

WordEntry wordCache[MAX_KEYS]={
  {"CLOCK","Clock"},
  {"FILE","File"},
  {"SETTING","Setting"},
  {"BEEP","Beep"},
  {"OPEN","OPEN"},
  {"COPY","Copy"},
  {"RENAME","Rename"},
  {"DELETE","Delete"},
  {"NEW","New"},
  {"INFO","Info"},
  {"DONE","Done"},
  {"FAILED","Falied"},
  {"AUTO SELECT","AUTO SELECT"},
  {"EDIT","Edit"},
  {"SAVE","Save"},
  {"MONDAY","MONDAY"},
  {"TUESDAY","TUESDAY"},
  {"WEDNESDAY","WEDNESDAY"},
  {"THURSDAY","THURSDAY"},
  {"FRIDAY","FRIDAY"},
  {"SATURDAY","SATURDAY"},
  {"SUNDAY","SUNDAY"},
  {"SCREEN","Screen"},
  {"SPEAKER","Speaker"},
  {"TIME/DATE","Time/Date"},
  {"LANGUAGE","Language"},
  {"SYSTEM INFO","Syetem info"},
  {"REBOOT","REBOOT"},
  {"BRIGHT","Bright"},
};
uint8_t wordCount = 29;





bool k_word_loadLanguage(const char* filename) {
  File f = FFat.open(filename, "r");
  if (!f) return false;
  wordCount = 0; // 清空计数
  memset(wordCache, 0, sizeof(wordCache)); // 可选：清空旧数据

  while (f.available() && wordCount < MAX_KEYS) {
    String line = f.readStringUntil('\n');
    int eq = line.indexOf('=');
    if (eq > 0) {
      // 提取 Key
      String k = line.substring(0, eq);
      strncpy(wordCache[wordCount].key, k.c_str(), 19);
      
      // 提取 Value
      String v = line.substring(eq + 1);
      v.trim(); // 去除 \r\n
      strncpy(wordCache[wordCount].text, v.c_str(), 63);
      
      wordCount++;
    }
  }
  f.close();
  k_desktop_noticeWindow("DONE","SET DONE",6,true);
  return true;
}


const char* k_word_base(const char* key_en){
  for (uint8_t i = 0; i < wordCount; i++) {
    if (strcmp(wordCache[i].key, key_en) == 0) {
        return wordCache[i].text;
    }
  }
  return key_en;
}

