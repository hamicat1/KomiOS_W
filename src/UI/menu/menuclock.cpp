#include "menuclock.h"

typedef struct{
  bool enable;
  uint8_t hour;
  uint8_t minute;
  uint8_t repeat; // 位掩码：bit0=周一, bit1=周二... bit7=每天
  uint8_t ring;
  bool closed;
} AlarmConfig;
AlarmConfig k_alarms[5]={
  {true,0,0,7,0,false},
  {false,0,0,7,0,false},
  {false,0,0,7,0,false},
  {false,0,0,7,0,false},
  {false,0,0,7,0,false},
};


void k_clock_alarmSet(int alarmNum){
  k_exit=true;
  bool temp_sel_enable=k_alarms[alarmNum].enable;
  int temp_sel_hour=k_alarms[alarmNum].hour;
  int temp_sel_min=k_alarms[alarmNum].minute;

  int temp_sel=0;
  char strtemp[8];
  k_key_notpress();
  while(k_exit){
    k_screen_clear();
    k_desktop_window("Alarm Set");

    k_screen_fillRect(0, 12, 20, 10, true);
    k_screen_line(10,13,10,20,false);

    if(temp_sel_enable){
      k_screen_fillRect(10, 13, 10, 8, false);
      k_icon_show(11,13,10,0,true);
    }else{
      k_screen_fillRect(0, 13, 10, 8, false);
      k_icon_show(1,13,11,0,true);
    }

    k_screen_fillRect(0, 24, 20, 10, true);
    k_screen_line(10,25,10,32,false);

    sprintf(strtemp,"%d",temp_sel_hour);
    k_screen_word(strtemp,false,1,25,"font3x8",0);
    sprintf(strtemp,"%d",temp_sel_min);
    k_screen_word(strtemp,false,12,25,"font3x8",0);
    
    if (temp_sel==0){
      k_screen_invertRect(0,12,20,10);
      k_desktop_keyIcon(10,12,11);
    }

    if (temp_sel==1){
      k_screen_invertRect(0,24,9,10);
      k_desktop_keyIcon(23,12,24);
    }
    if (temp_sel==2){
      k_screen_invertRect(11,24,9,10);
      k_desktop_keyIcon(23,12,24);
    }
    k_screen_display();
    k_system();
    if(UP_KEY==0){
      if(temp_sel==0){
        temp_sel_enable=true;
      }
      if(temp_sel==1){
        temp_sel_hour+=1;
      }
      if(temp_sel==2){
        temp_sel_min+=1;
      }

      k_beep_tone(600, 5);
      k_key_notpress();
    }
    if(DOWN_KEY==0){
      if(temp_sel==0){
        temp_sel_enable=false;
      }
      if(temp_sel==1){
        temp_sel_hour-=1;
      }
      if(temp_sel==2){
        temp_sel_min-=1;
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

    if(SWITCH_KEY==0){
      temp_sel+=1;
      if (temp_sel>2){
        temp_sel=0;
      }
      k_beep_tone(1000, 5);
      k_key_notpress();
    }

    if(BACK_KEY==0||SEL_KEY==0){
      k_exit=false;
    }
  }
  k_alarms[alarmNum].enable=temp_sel_enable;
  k_alarms[alarmNum].hour=temp_sel_hour;
  k_alarms[alarmNum].minute=temp_sel_min;
  struct tm timeinfo = rtc.getTimeStruct();
  if(timeinfo.tm_min!=temp_sel_min&&timeinfo.tm_hour!=temp_sel_hour){
    k_alarms[alarmNum].closed=false;
  }else{
    k_alarms[alarmNum].closed=true;
  }
}

void k_clock_alarm(bool menu){
  if (menu){
    uint8_t alarm_num=0;
    k_sel=1;
    k_exit=true;
    k_key_notpress();
    while(k_exit){
      k_screen_clear();
      k_desktop_window("Alarm");
      for(int i=0;i<5;i++){
        char buf[12];
        sprintf(buf,"%02d:%02d %d",k_alarms[i].hour,k_alarms[i].minute,k_alarms[i].repeat);
        k_screen_word(buf,true,10,12+i*10,FONT,0);
        if(k_alarms[i].enable){k_icon_show(0,12+i*10,8,0,true);}
      }
      k_screen_invertRect(0,k_sel*10+1,128,9);
      k_screen_display();
      k_system();
      k_desktop_menusel(5);
      if(SWITCH_KEY==0){
        if(k_alarms[k_sel-1].enable){
          k_alarms[k_sel-1].enable=false;
        }else{
          k_alarms[k_sel-1].enable=true;
        }
        k_key_notpress();
      }

      if(SEL_KEY==0){
        alarm_num=k_sel-1;
        k_clock_alarmSet(alarm_num);
        k_desktop_noticeWindow("DONE","SET DONE",6,true);
      }
      k_screen_invertRect(0,k_sel*10+1,128,9);
      k_exit=true;
      if(BACK_KEY==0){
        k_exit=false;
      }
    }
  }else{
    struct tm timeinfo = rtc.getTimeStruct();
    for(int i=0;i<5;i++){
      if(k_alarms[i].enable && timeinfo.tm_hour==k_alarms[i].hour && timeinfo.tm_min==k_alarms[i].minute){
        if(!k_alarms[i].closed){
          while(k_exit){
            k_screen_clear();
            k_icon_show(0,0,8,0,true);
            char buf[12];
            sprintf(buf,"%02d:%02d",k_alarms[i].hour,k_alarms[i].minute);
            k_screen_word(buf,true,10,10,FONT,0);
            k_screen_display();
            k_screen_word("Alarm!",true,10,30,FONT,0);
            k_screen_display();
            k_beep_notice(1);
            k_exit=true;
            if(BACK_KEY==0){
              k_exit=false;
              k_alarms[i].closed=true;
            }
          }
          k_key_notpress();
          return;
        }
      }else{k_alarms[i].closed=false;}
    }
  }

}



void k_menu_clock(){
  char timeBuffer[9];
  k_sel=1;
  k_exit=true;
  k_key_notpress();
  while(k_exit){
    struct tm timeinfo = rtc.getTimeStruct();
    strftime(timeBuffer, sizeof(timeBuffer), "%H:%M", &timeinfo);
    k_screen_clear();
    k_screen_text(timeBuffer,true,0,0,"Defaut",2);
    k_system();
    k_screen_word("World Times",true,10,30,"font3x8",0);
    k_icon_show(0,30,8,0,true);
    k_screen_word("Alarm",true,10,40,"font3x8",0);
    k_icon_show(0,40,8,0,true);
    k_screen_word("Timer",true,10,50,"font3x8",0);
    k_icon_show(0,50,8,0,true);
    k_screen_invertRect(0,k_sel*10+20,128,9);
    k_screen_display();
    k_desktop_menusel(3);
    if(k_sel==1){
      if(SEL_KEY==0){
        k_sel=1;
      }
    }
    if(k_sel==2){
      if(SEL_KEY==0){
        k_clock_alarm(true);
        k_sel=2;
      }
    }
    k_screen_invertRect(0,k_sel*10+20,128,9);
    k_exit=true;
    if(BACK_KEY==0){
      k_exit=false;
    }

  }
  k_key_notpress();
}