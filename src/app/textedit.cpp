#include "textedit.h"

#define MAX_TXT_LINES 500
#define MAX_LINE_LEN 64
char txtBuffer[MAX_TXT_LINES][MAX_LINE_LEN]; // 存储每行文本
int totalLines = 0;
int currentLineIndex = 0; // 当前屏幕第一行的索引

#define LINES_PER_SCREEN 5

bool loadTextFile(const char* path) {
  k_desktop_icon(true,false,"fileread",19);
  k_desktop_icon(false,false,"",0);
  k_screen_display();
  File file = FFat.open(path, FILE_READ);
  if (!file) return false;

  totalLines = 0;
  while (file.available() && totalLines < MAX_TXT_LINES) {
    String line = file.readStringUntil('\n');
    line.trim(); // 去除首尾空白
    if (line.endsWith("\r")) {
      line.remove(line.length() - 1);
    }
    int len = line.length();
    if (len >= MAX_LINE_LEN) {
      len = MAX_LINE_LEN - 1; // 预留空间给 '\0'
    }
    strncpy(txtBuffer[totalLines], line.c_str(), len);
    txtBuffer[totalLines][len] = '\0';
    totalLines++;
  }
  file.close();
  k_desktop_icon(false,true,"fileread",19);

  return true;
}
bool saveTextFile(const char* path) {
  k_desktop_icon(true,false,"fileread",19);
  k_desktop_icon(false,false,"",0);
  k_screen_display();
  File file = FFat.open(path, FILE_WRITE);
  if (!file) return false;

  for (int i = 0; i < totalLines; i++) {
    file.println(txtBuffer[i]); 
  }
  file.close();
  k_desktop_icon(false,true,"fileread",19);
  return true;
}
void k_app_textEdit(const char * path){
  bool showTitle=true;
  currentLineIndex = 0; // 重置到开头
  memset(txtBuffer,0,sizeof(txtBuffer));
  if (!loadTextFile(path)) {
    k_screen_word((char*)"Load Error", true, 0, 0, "font3x8", 0);
    k_screen_display();
    delay(2000);
    return;
  }
  k_key_notpress();
  while(BACK_KEY==1){
    k_screen_clear();
    if (showTitle){
      k_desktop_window((char*)path);
    }
    for(int i=0;i<LINES_PER_SCREEN;i++){
      int lineIdx=currentLineIndex+i;
      if(lineIdx,totalLines){
        k_screen_word((char*)txtBuffer[lineIdx],true,0,i*9+12,"font3x8",0);

      }
    }
    char bufferA[8];
    sprintf(bufferA,"%d",totalLines);
    k_screen_word(bufferA,true,120,50,"font3x8",0);
    k_screen_display();
    k_system();
    if(SEL_KEY==0){
      char editLine[64];
      k_desktop_charEdit("EDIT",MAX_LINE_LEN,txtBuffer[currentLineIndex],false);

    }
    if(DOWN_KEY==0){  
      currentLineIndex++;
      k_key_notpress();
      if(currentLineIndex>=totalLines){
        totalLines++;
      }
    }
    if(UP_KEY==0){
      if(currentLineIndex>0){
        currentLineIndex--;
        k_key_notpress();
      }
    }
  }
  if (k_desktop_boolSel("SAVE","Save changes?",true)){
    if (!saveTextFile(path)) {
      k_screen_word((char*)"Save Error", true, 0, 0, "font3x8", 0);
      k_screen_display();
      delay(2000);
      return;
    }
  }
}