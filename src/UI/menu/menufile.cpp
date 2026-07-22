#include "menufile.h"
char* driver_items[] = {
    "FLASH",
    "EEPROM",

};

const uint8_t driver_icons[] = {
    13,
    13

};
const int driver_count = 2;

#define MAX_LINES 4     // 最多显示行数 (64px / 8px = 8)
#define MAX_NAME_LEN 20
char pageBuffer[MAX_LINES][MAX_NAME_LEN + 1]; // 二维数组存储当前页
bool isDirBuffer[MAX_LINES];
int currentPage=0;
char currentFolder[16];

int showFilePage(fs::FS &fs, const char * dirname,int page) {
  File root = fs.open(dirname);
  if (!root) {
    k_desktop_noticeWindow("ERROR","Failed open DIR",6,true);
    return 0;
  }
  if(!root.isDirectory()){
    k_desktop_noticeWindow("ERROR","NOT a DIR",6,true);
    return 0;
  }
  memset(pageBuffer, 0, sizeof(pageBuffer));
  memset(isDirBuffer, 0, sizeof(isDirBuffer));
  int fileCount = 0;      // 当前目录下的文件总数
  int displayIndex = 0;
  int count=0;

  int startIdx = page * MAX_LINES;
  File file = root.openNextFile();
  while(file){
    if (fileCount < startIdx){
      fileCount++;
      file = root.openNextFile();
      continue;
    }
    if (displayIndex >= MAX_LINES){
      break;
    }
    const char *name = file.name();
    strncpy(pageBuffer[displayIndex], name, MAX_NAME_LEN);
    pageBuffer[displayIndex][MAX_NAME_LEN] = '\0';
    if(file.isDirectory()){
      isDirBuffer[displayIndex] = true;
    } else {
      isDirBuffer[displayIndex] = false;
    }

    file = root.openNextFile();
    count++;
    displayIndex++;
    fileCount++;
  }
  root.close();
  return count;
}


int k_menu_fileMenu(bool drive){
  k_sel=1;
  k_key_notpress();
  while(k_exit){
    k_screen_clear();
    k_desktop_window("FILE ACTIONS");
    k_system();
    k_screen_word("OPEN",true,10,12,"font3x8");
    k_icon_show(0,12,14,0,true);
    k_screen_word("Copy",true,10,22,"font3x8");
    k_icon_show(0,22,15,0,true);
    k_screen_word("Rename",true,10,32,"font3x8");
    k_icon_show(0,32,16,0,true);
    k_screen_word("Delete",true,10,42,"font3x8");
    k_icon_show(0,42,17,0,true);
    if (drive){
      k_desktop_menusel(1);
    }
    else{
      k_desktop_menusel(4);
    }
    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_screen_display();
    if(k_sel==1){
      if(SEL_KEY==0){
        return 1;
      }
    }
    if(k_sel==2){
      if(SEL_KEY==0){
        return 2;
      }
    }
    if(k_sel==3){
      if(SEL_KEY==0){
        return 3;
      }
    }
    if(k_sel==4){
      if(SEL_KEY==0){
        return 4;
      }
    }
    k_screen_invertRect(0,k_sel*10+1,128,9);
    if(BACK_KEY==0){
      return 0;
    }
  }
  k_key_notpress();
}

void k_menu_fileFlash(char* currentFol){
  int filecount;
  char pageStr[3];
  strcpy(currentFolder,currentFol);
  currentPage=0;
  k_sel=1;
  k_exit=true;
  k_key_notpress();
  while(k_exit){
    k_screen_clear();
    k_desktop_window("FILE");
    k_screen_word(currentFolder,true,0,56,"font3x8");
    sprintf(pageStr, "%d", currentPage);
    k_screen_word(pageStr,true,110,56,"font3x8");
    sprintf(pageStr, "%d", k_sel);
    k_screen_word(pageStr,true,110,46,"font3x8");
    k_menu_y=12;
    filecount=showFilePage(FFat,currentFolder,currentPage);
    for(int i=0;i<filecount;i++){
      k_screen_word(pageBuffer[i],true,10,k_menu_y,"font3x8");
      if (isDirBuffer[i]){
        k_icon_show(0,k_menu_y,0,0,true);
      }else{
        k_icon_show(0,k_menu_y,18,0,true);
      }
      
      k_menu_y+=10;
      
    }
    k_system();
    if(UP_KEY==0){
      k_sel-=1;
      k_key_notpress();
      if(k_sel<=0){
        k_sel=1;
        if(currentPage>0){
          k_sel=MAX_LINES;
          currentPage-=1;
        }
      }
    }
    if(DOWN_KEY==0){
      k_sel+=1;
      k_key_notpress();
      if(k_sel>filecount&&filecount>=MAX_LINES){
        k_sel=1;
        currentPage++;
      }
      if(k_sel>filecount){
        k_sel-=1;
      }
    }
    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_screen_display();
    if(SEL_KEY==0){
      k_menu_fileMenu(false);
      k_key_notpress();
    }
    
    

    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_exit=true;
    if(BACK_KEY==0){
      k_exit=false;
    }

  }
  k_key_notpress();
}

void k_menu_file(){
  k_sel=1;
  k_exit=true;
  k_key_notpress();
  while(k_exit){
    k_screen_clear();
    k_desktop_window("FILE");
    k_menu_y=12;
    for (int i = 0; i < driver_count; i++) {
      k_screen_word(driver_items[i],true,10,k_menu_y,"font3x8");
      k_icon_show(0,k_menu_y,driver_icons[i],0,true);
      k_menu_y+=10;
    }
    k_system();
    k_desktop_menusel(driver_count);
    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_screen_display();
    if(k_sel==1){
      if(SEL_KEY==0){
        if (k_menu_fileMenu(true)==1){
          k_menu_fileFlash("/");
        }
      }
    }
    if(k_sel==2){
      if(SEL_KEY==0){
        
      }
    }
    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_exit=true;
    if(BACK_KEY==0){
      k_exit=false;
    }

  }
  k_key_notpress();
}