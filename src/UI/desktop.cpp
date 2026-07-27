/*
 * Copyright 2026 Hamicat
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "desktop.h"
char timeBuffer[9];
bool k_exit=true;
const char* weekdays[] = {
    "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", 
    "THURSDAY", "FRIDAY", "SATURDAY"
  };
void k_desktop_init(){
  struct tm timeinfo = rtc.getTimeStruct();
  strftime(timeBuffer, sizeof(timeBuffer), "%H:%M", &timeinfo);
  k_screen_clear();
  k_screen_text(timeBuffer,true,0,32,"Defaut",3);
  k_icon_show(120,0,7,2,true);
  k_icon_show(120,28,1,0,true);
  int dayIndex = timeinfo.tm_wday;
  char weekBuffer[10]; 
  strncpy(weekBuffer, weekdays[dayIndex], sizeof(weekBuffer) - 1);
  weekBuffer[sizeof(weekBuffer) - 1] = '\0';
  k_screen_word(weekBuffer,true,0,56,"font3x8",0);
  k_screen_display();

}

void k_desktop_letter(){
  int temp=0;
  k_screen_clear();
  for(int y=0;y<64;y+=10){
    for(int x=0;x<128;x+=4){
        k_icon_show(x,y,temp,1,true);
        k_screen_display();
      temp+=1;
      if(temp==59){
        break;
      }
    }
    if(temp==59){
      break;
    }
  }

  delay(10000);
}
int k_sel=1;
uint8_t k_sel_lim;

uint16_t k_menu_y;
char barIconName[16][16];
uint8_t barIcon[16];
uint8_t barIconCount=0;
void k_desktop_icon(bool add,bool del,char* name,uint8_t icon){
  if (add){
    if(barIconCount<16){
      for(int i=0;i<barIconCount;i++){
        if(strcmp(barIconName[i],name)==0)return;
      }
      strcpy(barIconName[barIconCount],name);
      barIcon[barIconCount]=icon;
      barIconCount++;
    }
  }else if(del){
    for(int i=0;i<barIconCount;i++){
      if (strcmp(barIconName[i],name)==0){
        for(int j=i;j<barIconCount-1;j++){
          strcpy(barIconName[j],barIconName[j+1]);
          barIcon[j]=barIcon[j+1];
        }
        barIconCount--;
        break;
      }
    }
  }else{
    uint8_t startX=111;
    for (int i=0;i<barIconCount;i++){
      k_icon_show(startX,0,barIcon[i],0,true);
      startX-=9;
    }
  }
}

void k_desktop_window(char* title){
  k_exit=true;
  struct tm timeinfo = rtc.getTimeStruct();
  strftime(timeBuffer, sizeof(timeBuffer), "%H:%M", &timeinfo);
  k_screen_word(timeBuffer,true,0,0,"font3x8",0);
  k_screen_word(title,true,26,0,"font3x8",0);
  k_desktop_icon(false,false,"",0);
  k_screen_line(0,10,128,10,true);
  k_screen_line(22,0,22,10,true);
}
void k_desktop_noticeWindow(char* title,char* index,uint8_t icon,bool while_e){
  k_exit=true;
  k_screen_fillRect(64,0,64,64,false);
  k_screen_line(64,10,128,10,true);
  k_screen_line(64,0,64,64,true);
  k_screen_word(title,true,65,0,"font3x8",0);
  k_icon_show(65,11,icon,0,true);
  k_screen_word(index,true,65,20,"font3x8",13);
  k_icon_show(120,24,10,0,true);
  k_screen_blurRect(0,0,63,64);
  if (while_e){
    k_beep_notice(1);
    while(k_exit){
      k_screen_display();
      k_system();
      if(SEL_KEY==0){
        k_screen_fillRect(64,0,64,64,false);
        k_screen_display();
        k_key_notpress();
        k_exit=false;
        
      }
    }
  }
}

void k_desktop_keyIcon(uint8_t icon,uint8_t icon2,uint8_t icon3){
  k_exit=true;
  k_icon_show(120,12,icon,0,true);
  k_icon_show(120,24,icon2,0,true);
  k_icon_show(120,56,icon3,0,true);
}


bool k_desktop_boolSel(char* title,char* index,bool cross){
  k_exit=true;
  k_screen_clear();
  k_desktop_noticeWindow(title,index,9,false);
  k_beep_notice(2);
  if (cross){
    k_icon_show(120,56,11,0,true);
  }
  while(k_exit){
    k_screen_display();
    k_system();
    if(DOWN_KEY==0 && cross){
      k_key_notpress();
      return false;
    }
    if(SEL_KEY==0){
      k_key_notpress();
      return true;
    }
  }
}

uint16_t k_desktop_numSel(char* title,uint16_t min_lim,uint16_t max_lim,uint16_t pre_val){
  k_exit=true;
  k_screen_clear();
  k_desktop_window(title);
  k_screen_fillRect(0, 60, 128, 64, true);
  uint16_t sel_unit=128/(max_lim-min_lim);
  uint16_t temp_sel=pre_val-min_lim;
  char strtemp[8];
  while(k_exit){
    k_screen_fillRect(0, 61, 128, 63, false);
    k_screen_fillRect(0,61,temp_sel*sel_unit,63,true);
    sprintf(strtemp,"%d",(temp_sel+min_lim));
    k_screen_fillRect(0, 12, 12, 20, false);
    k_screen_word(strtemp,true,0,12,"font3x8",0);
    sprintf(strtemp,"%d",(sel_unit));
    k_screen_word(strtemp,true,0,30,"font3x8",0);
    k_screen_display();
    if (strcmp(title,"BRIGHT")==0){
      bright=(temp_sel+min_lim);
    }
    k_system();
    if(UP_KEY==0){
      temp_sel+=1;
      k_beep_tone(600, 5);
    }
    if(DOWN_KEY==0){
      temp_sel-=1;
      k_beep_tone(600, 5);
    }
    if(temp_sel<=1){
      temp_sel=1;
    }
    if(temp_sel>(max_lim-min_lim)){
      temp_sel=(max_lim-min_lim);
    }
    if(BACK_KEY==0||SEL_KEY==0){
      k_exit=false;
    }
  }
  k_key_notpress();
  return temp_sel+min_lim;
}


uint16_t k_desktop_charEdit(char* title,uint16_t max_lim,char* pre_val,bool file){
  uint8_t cursor=0;
  int keyCursor=1;
  int len=strlen(pre_val)+1;
  char charSet[]="1234567890QWERTYUIOPASDFGHJKLZXCVBNM/_-,. ";
  if (file){
    strcpy(charSet, "QWERTYUIOPASDFGHJKLZXCVBNM/_,. ");
  }
  int charSetLen=sizeof(charSet)-1;
  k_exit=true;
  k_key_notpress();
  while(k_exit){
    len=strlen(pre_val)+1;
    k_screen_clear();
    k_desktop_window(title);
    k_screen_fillRect(0, 20, 128, 44, true);
    int displayLen = len + 1;
    if (displayLen > max_lim) displayLen = max_lim;
    for (int i=0;i<len;i++){
      bool isCursor=(i==cursor);
      char tempStr[2];
      if (i < len) {
        tempStr[0] = pre_val[i];
      } else {
        tempStr[0] = ' '; 
      }
      tempStr[1] = '\0'; // 确保字符串结束      
      uint8_t posX = i * 4; // 统一X坐标步长
      if(isCursor){
        k_screen_fillRect(i*4,10,4,9,true);
        k_screen_word(tempStr,false,i*4,11,"font3x8",0);
      }else{
        k_screen_word(tempStr,true,i*4,11,"font3x8",0);
      }
    }
    int charBuf=0;
    int charSetDisp=charSetLen/10+2;
    for(int j=2;j<charSetDisp;j++){
      for(int i=0;i<10;i++){
        char singleCharStr[2];
        singleCharStr[0] = charSet[charBuf]; // 获取特定字符
        singleCharStr[1] = '\0'; 
        k_screen_word(singleCharStr,false,i*6+1,j*10,"font3x8",0);
        if (charBuf==keyCursor-1){
          k_screen_invertRect(i*6,j*10-1,5,10);
        }
        charBuf++;
      }
    }
    k_screen_word("<-",false,110,30,"font3x8",0);
    k_screen_word("->",false,110,40,"font3x8",0);
    k_screen_word("DONE",false,110,50,"font3x8",0);
    if (keyCursor==charSetLen+1){
      k_screen_invertRect(109,29,9,10);
    }
    if (keyCursor==charSetLen+2){
      k_screen_invertRect(109,39,9,10);
    }
    if (keyCursor==charSetLen+3){
      k_screen_invertRect(109,49,18,10);
    }
    k_screen_display();
    k_system();
    if(UP_KEY==0){
      keyCursor-=1;
      k_beep_tone(600, 5);
      if(keyCursor<=0){
        keyCursor=1;
      }
      k_key_notpress();
    }

    if(DOWN_KEY==0){
      keyCursor+=1;
      k_beep_tone(600, 5);
      if(keyCursor>charSetLen+3){
        keyCursor=charSetLen+3;
      }
      k_key_notpress();
    }
    if(SWITCH_KEY==0){
      cursor+=1;
      k_beep_tone(1000, 5);
      k_key_notpress();
    }
    if(SEL_KEY==0){
      if (keyCursor==charSetLen+1){
        cursor-=1;
        k_key_notpress();
        continue;
      }
      if (keyCursor==charSetLen+2){
        cursor+=1;
        k_key_notpress();
        continue;
      }
      if (keyCursor==charSetLen+3){
        k_key_notpress();
        continue;
      }
      pre_val[cursor] = charSet[keyCursor-1];

    }
    k_exit=true;
    if(BACK_KEY==0){
      k_exit=false;
    }
  }
  k_key_notpress();
  return 0;
}


void k_desktop_timeSel(){
  k_exit=true;
  struct tm timeinfo = rtc.getTimeStruct();
  int temp_sel_min=timeinfo.tm_min;
  int temp_sel_hour=timeinfo.tm_hour;
  int temp_sel_day=timeinfo.tm_mday;
  int temp_sel_month=timeinfo.tm_mon+1;
  int temp_sel_year=timeinfo.tm_year+1900;
  int temp_sel=0;
  char strtemp[8];
  while(k_exit){
    k_screen_clear();
    k_desktop_window("TIME/DATE");
    k_screen_fillRect(0, 12, 20, 10, true);
    k_screen_line(10,13,10,20,false);

    sprintf(strtemp,"%d",temp_sel_hour);
    k_screen_word(strtemp,false,1,13,"font3x8",0);
    sprintf(strtemp,"%d",temp_sel_min);
    k_screen_word(strtemp,false,12,13,"font3x8",0);
    
    k_screen_fillRect(0, 24, 37, 10, true);
    k_screen_line(17,25,17,32,false);
    k_screen_line(27,25,27,32,false);
    sprintf(strtemp,"%d",temp_sel_year);
    k_screen_word(strtemp,false,1,25,"font3x8",0);
    sprintf(strtemp,"%d",temp_sel_month);
    k_screen_word(strtemp,false,19,25,"font3x8",0);
    sprintf(strtemp,"%d",temp_sel_day);
    k_screen_word(strtemp,false,29,25,"font3x8",0);
    if (temp_sel==0){
      k_screen_invertRect(0,12,9,10);
    }
    if (temp_sel==1){
      k_screen_invertRect(11,12,9,10);
    }
    if (temp_sel==2){
      k_screen_invertRect(0,24,18,10);
    }
    if (temp_sel==3){
      k_screen_invertRect(18,24,9,10);
    }
    if (temp_sel==4){
      k_screen_invertRect(28,24,9,10);
    }
    k_screen_display();
    k_system();
    if(UP_KEY==0){
      if(temp_sel==0){
        temp_sel_hour+=1;
      }
      if(temp_sel==1){
        temp_sel_min+=1;
      }
      if(temp_sel==2){
        temp_sel_year+=1;
      }
      if(temp_sel==3){
        temp_sel_month+=1;
      }
      if(temp_sel==4){
        temp_sel_day+=1;
      }
      k_beep_tone(600, 5);
      k_key_notpress();
    }
    if(DOWN_KEY==0){
      if(temp_sel==0){
        temp_sel_hour-=1;
      }
      if(temp_sel==1){
        temp_sel_min-=1;
      }
      if(temp_sel==2){
        temp_sel_year-=1;
      }
      if(temp_sel==3){
        temp_sel_month-=1;
      }
      if(temp_sel==4){
        temp_sel_day-=1;
      }
      k_beep_tone(600, 5);
      k_key_notpress();
    }
    if (temp_sel_hour<0){
      temp_sel_hour=23;
    }
    if (temp_sel_hour>23){
      temp_sel_hour=0;
    }
    if (temp_sel_min<0){
      temp_sel_min=59;
    }
    if (temp_sel_min>59){
      temp_sel_min=0;
    }
    if (temp_sel_month<1){
      temp_sel_month=12;
    }
    if (temp_sel_month>12){
      temp_sel_month=1;
    }
    if (temp_sel_day<1){
      temp_sel_day=31;
    }
    if (temp_sel_day>31){
      temp_sel_day=1;
    }
    if(SWITCH_KEY==0){
      temp_sel+=1;
      if (temp_sel>4){
        temp_sel=0;
      }
      k_beep_tone(1000, 5);
      k_key_notpress();
    }

    if(BACK_KEY==0||SEL_KEY==0){
      k_exit=false;
    }
  }
  k_key_notpress();
  rtc.setTime(0,temp_sel_min,temp_sel_hour,temp_sel_day,temp_sel_month,temp_sel_year);
  
}

void k_desktop_notice(char* title,char* index){
  k_saveScreen();
  k_screen_fillRect(0, 0, 128, 30, true);
  k_screen_word(title,false,0,0,"font3x8",0);
  k_screen_word(index,false,0,15,"font3x8",0);
  k_screen_line(0,28,128,28,false);
  k_screen_display();
  k_beep_notice(1);
  int led=0;
  while(k_key_pressed()==false){
    led+=1;
    if (led>=10){
      led=0;
    }
    k_neopixel(0,led,led);
    delay(100);
    k_system();
  }
  k_neopixel(0,0,0);
  k_key_notpress();
  k_restoreScreen();
}
void k_desktop_menusel(uint32_t k_sel_lim){
    if(UP_KEY==0){
      k_sel-=1;
      k_key_notpress();
      if(k_sel<=0){
        k_sel=k_sel_lim;
      }
    }
    if(DOWN_KEY==0){
      k_sel+=1;
      k_key_notpress();
      if(k_sel>k_sel_lim){
        k_sel=1;
      }
    }
}
void k_menuthing_calendar(){
  struct tm timeinfo = rtc.getTimeStruct();
  k_screen_fillRect(2, 12, 36, 36, false);
  strftime(timeBuffer, sizeof(timeBuffer), "%m", &timeinfo);
  k_screen_word(timeBuffer,true,4,14,"font3x8",0);
  strftime(timeBuffer, sizeof(timeBuffer), "%d", &timeinfo);
  k_screen_text(timeBuffer,true,4,22,"font3x8",3);
}



void k_desktop_menu(){
  char buffer[16];
  k_exit=true;
  k_key_notpress();
  while(k_exit){
    struct tm timeinfo = rtc.getTimeStruct();
    strftime(timeBuffer, sizeof(timeBuffer), "%H:%M", &timeinfo);
    k_screen_clear();
    k_screen_word(timeBuffer,true,0,0,"font3x8",0);
    sprintf(buffer,"%d",k_sel);
    k_screen_word(buffer,true,124,10,"font3x8",0);
    k_system();
    k_desktop_menusel(4);
    k_screen_fillRect(0, 10, 40, 64, true);

    if(k_sel==1){
      k_screen_text("Clock",true,42,10,"font3x8",1);
      k_icon_show(42,20,8,0,true);
      if(SEL_KEY==0){
        //k_menu_clock();
      }
    }
    if(k_sel==2){
      k_screen_text("File",true,42,10,"font3x8",1);
      k_icon_show(42,20,0,0,true);
      if(SEL_KEY==0){
        k_menu_file();
      }
    }
    if(k_sel==3){
      k_screen_text("Settings",true,42,10,"font3x8",1);
      k_icon_show(42,20,2,0,true);
      if(SEL_KEY==0){
        k_menu_setting();
      }
    }
    if(k_sel==4){
      k_screen_text("Tone",true,42,10,"font3x8",1);
      k_icon_show(42,20,3,0,true);
      if(SEL_KEY==0){
        k_menu_beep();
      }
    }
    k_menuthing_calendar();

    k_screen_display();
    if(SWITCH_KEY==0){
      k_key_notpress();
      k_screen_invertRect(0,10,128,54);
      k_screen_display();
      while(SWITCH_KEY==1){

      }
      k_key_notpress();
    }
    k_exit=true;
    if(BACK_KEY==0){
      k_exit=false;
    }
    

  }
  k_key_notpress();
}




