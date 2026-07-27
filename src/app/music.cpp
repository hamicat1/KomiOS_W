#include "music.h"

#define MAX_FILE_SIZE 2048 // 根据歌曲长度调整
#define MAX_NOTES 100
#define MAX_TEXT_LEN 32
struct NoteItem {
    uint32_t freq;
    uint32_t duration;
    char text[MAX_TEXT_LEN];
};
NoteItem musicBuffer[MAX_NOTES];
int noteCount = 0;
char fileBuffer[MAX_FILE_SIZE]; 


bool parseMusicFile(const char* filePath) {
  k_desktop_icon(true,false,"fileread",19);
  k_desktop_icon(false,false,"",0);
  k_screen_display();
  File file = FFat.open(filePath, FILE_READ);
  if (!file) return false;

  size_t bytesRead = file.readBytes(fileBuffer, MAX_FILE_SIZE - 1);
  file.close();
  k_desktop_icon(false,true,"fileread",19);
  if (bytesRead == 0) return false;
  fileBuffer[bytesRead] = '\0';

  noteCount = 0;
  char* lineStart = fileBuffer;
  char* lineEnd;
  while (lineStart != NULL && noteCount < MAX_NOTES) {
    lineEnd = strchr(lineStart, '\n');
    if (lineEnd != NULL) {
      *lineEnd = '\0';
    }
    if (strlen(lineStart) > 0) {
      long freq = 0;
      long duration = 0;
      char textBuf[MAX_TEXT_LEN] = {0};
      char* pComma1 = strchr(lineStart, ',');
      if (pComma1) {
        *pComma1 = '\0';
        freq = atoi(lineStart);
        char* pComma2 = strchr(pComma1 + 1, ',');
        if (pComma2) {
            *pComma2 = '\0';
            duration = atoi(pComma1 + 1);
            char* pQuote1 = strchr(pComma2 + 1, '"');
            char* pQuote2 = NULL;
            if (pQuote1) {
              pQuote2 = strchr(pQuote1 + 1, '"');
              if (pQuote2) {
                *pQuote2 = '\0';
                strncpy(textBuf, pQuote1 + 1, MAX_TEXT_LEN - 1);
              }
            }
        }
      }
      if (duration > 0) {
          musicBuffer[noteCount].freq = freq;
          musicBuffer[noteCount].duration = duration;
          strncpy(musicBuffer[noteCount].text, textBuf, MAX_TEXT_LEN - 1);
          noteCount++;
      }
    }
    if (lineEnd != NULL) {
      lineStart = lineEnd + 1;
    } else {
      lineStart = NULL;
    }
  }
  return true;
}

void k_app_musicPlayer(const char * path){
  if (!parseMusicFile(path)){
    k_desktop_noticeWindow("FAILED","Failed to open music file",6,true);
    return;
  }
  if (noteCount == 0) { 
    k_desktop_noticeWindow("INFO","File is Empty",6,true);
    return;
  }
  for(int i=0;i<noteCount;i++){
    k_screen_clear();
    k_screen_word((char*)path,true,0,0,"font3x8",0);
    if(strlen(musicBuffer[i].text)>0){
      k_screen_word(musicBuffer[i].text,true,0,32,"font3x8",0);
      k_screen_display();
    }
    k_beep_note(musicBuffer[i].freq,musicBuffer[i].duration);
    if(BACK_KEY==0){
      break;
    }
  }
  k_beep_note(60,0);
  noteCount=0;

}