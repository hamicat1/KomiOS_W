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
char currentFolder[128];

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

int k_menu_fileNew(char* currentFol){
  k_sel=1;
  int k_page=1;
  k_key_notpress();
  while(k_exit){
    k_screen_clear();
    k_desktop_window("FILE ACTIONS");
    k_system();
    if (k_page==1){
      k_screen_word("Text(.txt)",true,10,12,"font3x8",0);
      k_icon_show(0,12,18,0,true);
      k_screen_word("Music(.mus)",true,10,22,"font3x8",0);
      k_icon_show(0,22,18,0,true);
      k_screen_word("NewFolder",true,10,32,"font3x8",0);
      k_icon_show(0,32,0,0,true);
      k_screen_word(" ",true,10,42,"font3x8",0);
      k_icon_show(0,42,18,0,true);
      k_screen_word(" ",true,10,52,"font3x8",0);
      k_icon_show(0,52,18,0,true);
    }else{
      k_screen_word(" ",true,10,12,"font3x8",0);
      k_icon_show(0,12,18,0,true);
    }
    if(UP_KEY==0){
      k_sel-=1;
      k_key_notpress();
      if(k_sel<=0&&k_page==2){
        k_sel=5;
        k_page=1;
      }
    }
    if(DOWN_KEY==0){
      k_sel+=1;
      k_key_notpress();
      if(k_sel>5 && k_page==1){
        k_sel=1;
        k_page=2;
      }
    }
    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_screen_display();
    if(SEL_KEY==0){
      char newFileName[64];
      if(k_sel==1 && k_page==1){
        snprintf(newFileName, sizeof(newFileName), "%s/%s", currentFol, "NewFile.txt");
        k_desktop_charEdit("RENAME",11,newFileName,true);
        writeFile(FFat,newFileName," ");
      }
      if(k_sel==2){
        snprintf(newFileName, sizeof(newFileName), "%s/%s", currentFol, "NewFile.mus");
        k_desktop_charEdit("RENAME",11,newFileName,true);
        writeFile(FFat,newFileName," ");
      }
      if(k_sel==3){
        snprintf(newFileName, sizeof(newFileName), "%s/%s", currentFol, "NewFolder");
        k_desktop_charEdit("RENAME",11,newFileName,true);
        createFolder(FFat,newFileName);
      }
      
      
    }
    k_screen_invertRect(0,k_sel*10+1,128,9);
    if(BACK_KEY==0){
      return 0;
    }
  }
  k_key_notpress();
}

int k_menu_fileMenu(bool drive){
  k_sel=1;
  int k_page=1;
  k_key_notpress();
  while(k_exit){
    k_screen_clear();
    k_desktop_window("FILE ACTIONS");
    k_system();
    if (!drive){
      if (k_page==1){
        k_screen_word("OPEN",true,10,12,"font3x8",0);
        k_icon_show(0,12,14,0,true);
        k_screen_word("Copy",true,10,22,"font3x8",0);
        k_icon_show(0,22,15,0,true);
        k_screen_word("Rename",true,10,32,"font3x8",0);
        k_icon_show(0,32,16,0,true);
        k_screen_word("Delete",true,10,42,"font3x8",0);
        k_icon_show(0,42,17,0,true);
        k_screen_word("New",true,10,52,"font3x8",0);
        k_icon_show(0,52,20,0,true);
      }else{
        k_screen_word("Info",true,10,12,"font3x8",0);
        k_icon_show(0,12,6,0,true);
      }
    }else{
      k_screen_word("OPEN",true,10,12,"font3x8",0);
      k_icon_show(0,12,14,0,true);
      k_screen_word("FORMAT",true,10,22,"font3x8",0);
      k_icon_show(0,22,14,0,true);
    }
    if (drive){
      k_desktop_menusel(2);
    }
    else{
      if(UP_KEY==0){
        k_sel-=1;
        k_key_notpress();
        if(k_sel<=0&&k_page==2){
          k_sel=5;
          k_page=1;
        }
      }
      if(DOWN_KEY==0){
        k_sel+=1;
        k_key_notpress();
        if(k_sel>5 && k_page==1){
          k_sel=1;
          k_page=2;
        }
      }
    }
    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_screen_display();
    if (!drive){
      if(k_sel==1 && k_page==1){
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
      if(k_sel==5){
        if(SEL_KEY==0){
          return 5;
        }
      }
      if(k_sel==1 && k_page==2){
        if(SEL_KEY==0){
          return 6;
        }
      }
    }else{
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
    }
    k_screen_invertRect(0,k_sel*10+1,128,9);
    if(BACK_KEY==0){
      return 0;
    }
  }
  k_key_notpress();
}

char* open_items[] = {
    "AUTO SELECT",
    "Text editor",
    "Music player",

};

const uint8_t open_icons[] = {
    13,
    13,
    13

};
const int open_count = 3;

int k_menu_fileOpen(){
  k_sel=1;
  k_exit=true;
  k_key_notpress();
  while(k_exit){
    k_screen_clear();
    k_desktop_window("OPEN PATH");
    k_menu_y=12;
    for (int i = 0; i < open_count; i++) {
      k_screen_word(open_items[i],true,10,k_menu_y,"font3x8",0);
      k_icon_show(0,k_menu_y,open_icons[i],0,true);
      k_menu_y+=10;
    }
    k_system();
    k_desktop_menusel(open_count);
    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_screen_display();
    if(k_sel==1){
      if(SEL_KEY==0){
        return 0;
      }
    }
    if(k_sel==2){
      if(SEL_KEY==0){
        return 1;
      }
    }
    if(k_sel==3){
      if(SEL_KEY==0){
        return 2;
      }
    }
    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_exit=true;
    if(BACK_KEY==0){
      return 0;
    }

  }
  k_key_notpress();
}

void k_menu_fileFlash(char* currentFol){
  int filecount;
  int sel;
  int k_fsel;
  char oldFullPath[128];
  char fileSize[8];
  char pageStr[3];
  strcpy(currentFolder,currentFol);
  currentPage=0;
  k_fsel=1;
  k_exit=true;
  k_key_notpress();
  k_desktop_icon(true,false,"fileread",19);
  k_desktop_icon(false,false,"",0);
  filecount=showFilePage(FFat,currentFolder,currentPage);
  while(k_exit){
    k_screen_clear();
    k_desktop_window("FILE");
    k_screen_word(currentFolder,true,0,56,"font3x8",0);
    sprintf(pageStr, "%d", currentPage);
    k_screen_word(pageStr,true,110,56,"font3x8",0);
    sprintf(pageStr, "%d", k_fsel);
    k_screen_word(pageStr,true,110,46,"font3x8",0);
    k_menu_y=12;
    
    for(int i=0;i<filecount;i++){
      k_screen_word(pageBuffer[i],true,10,k_menu_y,"font3x8",0);
      if (isDirBuffer[i]){
        k_icon_show(0,k_menu_y,0,0,true);
      }else{
        k_icon_show(0,k_menu_y,18,0,true);
        snprintf(oldFullPath, sizeof(oldFullPath), "%s/%s", currentFol, pageBuffer[i]);
        fileInfo(FFat,oldFullPath,fileSize);
        k_screen_word(fileSize,true,64,k_menu_y,"font3x8",0);
      }
      k_menu_y+=10;
      
    }
    k_system();
    if(UP_KEY==0){
      k_fsel-=1;
      k_key_notpress();
      if(k_fsel<=0){
        k_fsel=1;
        if(currentPage>0){
          k_fsel=MAX_LINES;
          currentPage-=1;
          k_desktop_icon(true,false,"fileread",19);
          k_desktop_icon(false,false,"",0);
          filecount=showFilePage(FFat,currentFolder,currentPage);
        }
      }
    }
    if(DOWN_KEY==0){
      k_fsel+=1;
      k_key_notpress();
      if(k_fsel>filecount&&filecount>=MAX_LINES){
        k_fsel=1;
        currentPage++;
        k_desktop_icon(true,false,"fileread",19);
        k_desktop_icon(false,false,"",0);
        filecount=showFilePage(FFat,currentFolder,currentPage);
      }
      if(k_fsel>filecount){
        k_fsel-=1;
      }
    }
    k_screen_invertRect(0,k_fsel*10+1,128,9);
    k_screen_display();
    if(SEL_KEY==0){
      sel=k_menu_fileMenu(false);
      k_key_notpress();
      
      snprintf(oldFullPath, sizeof(oldFullPath), "%s/%s", currentFol, pageBuffer[k_fsel - 1]);
      if (sel==1){
        if (isDirBuffer[k_fsel - 1]){
          char folderName[128];
          snprintf(folderName, sizeof(folderName), "%s/%s", currentFol, pageBuffer[k_fsel-1]);
          k_menu_fileFlash(folderName);
          k_desktop_icon(true,false,"fileread",19);
          k_desktop_icon(false,false,"",0);
          strcpy(currentFolder,currentFol);
          filecount=showFilePage(FFat,currentFolder,currentPage);
        }else{
          const char* dot = strrchr(pageBuffer[k_fsel-1], '.');
          if (dot != NULL) {
            const char* ext = dot + 1;
            int k_ret;
            k_ret=k_menu_fileOpen();
            if(k_ret==1){
              k_app_textEdit(oldFullPath);
            }
            if(k_ret==2){
              k_app_musicPlayer(oldFullPath);
            }

            if (strcasecmp(ext, "txt") == 0) {
              Serial.println("Text File");
              k_app_textEdit(oldFullPath);
            } else if (strcasecmp(ext, "mus") == 0) {
              Serial.println("Audio File");
              k_app_musicPlayer(oldFullPath);
            }
            else {
              Serial.println("Unknown Format");
              if(k_ret==1){
                k_app_textEdit(oldFullPath);
              }
              if(k_ret==2){
                k_app_musicPlayer(oldFullPath);
              }
            }
          
          } else {
            Serial.println("No Extension");
          }
        }
      }
      if (sel==3){
        char newFileName[128];
        char newFullPath[128];
        strncpy(newFileName, pageBuffer[k_fsel - 1], sizeof(newFileName) - 1);
        k_desktop_charEdit("RENAME",11,newFileName,true);
        snprintf(newFullPath, sizeof(newFullPath), "%s/%s", currentFol, newFileName);
        renameFile(FFat,oldFullPath, newFullPath);
      }
      if (sel==4){
        deleteFile(FFat,oldFullPath);
      }
      if (sel==5){
        k_menu_fileNew(currentFol);
      }
      if (sel==6){
        char fileInfoStr[128];
        fileInfo(FFat,oldFullPath,fileSize);
        snprintf(fileInfoStr,sizeof(fileInfoStr),"%s\n%s",oldFullPath,fileSize);
        k_desktop_noticeWindow("INFO",fileInfoStr,6,true);
      }
      filecount=showFilePage(FFat,currentFolder,currentPage);
      k_key_notpress();
    }
    
    
    k_desktop_icon(false,true,"fileread",19);
    k_screen_invertRect(0,k_fsel*10+1,128,9);
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
      k_screen_word(driver_items[i],true,10,k_menu_y,"font3x8",0);
      k_icon_show(0,k_menu_y,driver_icons[i],0,true);
      k_menu_y+=10;
    }
    k_system();
    k_desktop_menusel(driver_count);
    k_screen_invertRect(0,k_sel*10+1,128,9);
    k_screen_display();
    if(k_sel==1){
      if(SEL_KEY==0){
        int k_ret=1;
        k_ret=k_menu_fileMenu(true);
        if (k_ret==1){
          k_menu_fileFlash("/");
        }
        if (k_ret==2){
          if (k_desktop_boolSel("FORMAT","Are you really want to format FLASH drive?\nThis action would not to be erasable",true)){
            formatDrive();
          }
          
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