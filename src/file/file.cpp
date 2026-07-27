#include "file.h"

void writeFile(fs::FS &fs, const char * path, const char * message){
    k_desktop_icon(true,false,"fileread",19);
    k_desktop_icon(false,false,"",0);
    k_screen_display();
    Serial.printf("Writing file: %s\r\n", path);

    File file = fs.open(path, FILE_WRITE);
    if(!file){
        k_desktop_noticeWindow("FAILED","- failed to open file for writing",6,true);
        return;
    }
    if(file.print(message)){
        k_desktop_noticeWindow("DONE","- file written",6,true);
    } else {
        k_desktop_noticeWindow("FAILED","- write failed",6,true);
    }
    file.close();
    k_desktop_icon(false,true,"fileread",19);
}

void createFolder(fs::FS &fs, const char* path){
    if (!fs.exists(path)){
        if(fs.mkdir(path)){
            k_desktop_noticeWindow("DONE","- folder created",6,true);
        }else{
            k_desktop_noticeWindow("DONE","- create failed",6,true);
        }
    }else{
        k_desktop_noticeWindow("FAILED","- folder exists",6,true);
    }
}

void renameFile(fs::FS &fs, const char * path1, const char * path2){
    k_desktop_icon(true,false,"fileread",19);
    k_desktop_icon(false,false,"",0);
    k_screen_display();
    Serial.printf("Renaming file %s to %s\r\n", path1, path2);
    if (fs.rename(path1, path2)) {
        k_desktop_noticeWindow("DONE","- file renamed",6,true);
    } else {
        k_desktop_noticeWindow("DONE","- rename failed",6,true);

    }
    k_desktop_icon(false,true,"fileread",19);
}

void deleteFile(fs::FS &fs, const char * path){
    k_desktop_icon(true,false,"fileread",19);
    k_desktop_icon(false,false,"",0);
    k_screen_display();
    Serial.printf("Deleting file: %s\r\n", path);
    if(fs.remove(path)){
        k_desktop_noticeWindow("DONE","- file deleted",6,true);
    } else {
        k_desktop_noticeWindow("DONE","- delete failed",6,true);
    }
    k_desktop_icon(false,true,"fileread",19);
}
void fileInfo(fs::FS &fs,const char * fullPath,char* size){
    File file=FFat.open(fullPath,FILE_READ);
    if(file){
        size_t fSize=file.size();
        if(fSize>=1024){
            sprintf(size,"%dKB",(int)(fSize/1024));
        }else{
            sprintf(size,"%dB",(int)fSize);
        }
    }
    file.close();
}

void formatDrive(){
    k_desktop_icon(true,false,"fileread",19);
    k_desktop_icon(false,false,"",0);
    k_screen_display();
    FFat.end();
    if(FFat.format()){
        k_desktop_noticeWindow("DONE","- formated",6,true);
    } else {
        k_desktop_noticeWindow("DONE","- format failed",6,true);
    }
    k_desktop_icon(false,true,"fileread",19);
    if(!FFat.begin()){
      k_desktop_noticeWindow("FFAT FAILED","FFAT MOUNT FAILED",6,true);
      return;
    }
    
}

void k_file_init(){
  if (FORMAT_FFAT) FFat.format();
  if(!FFat.begin()){
      k_desktop_noticeWindow("FFAT FAILED","FFAT MOUNT FAILED",6,true);
      return;
  }
  const char* content_f = 
    "66,400,\"I zu re\"\n"
    "66,400,\"\"\n"
    "66,400,\"\"\n"

    "74,400,\"Hana to chiru\"\n"
    "76,400,\"\"\n"
    "73,400,\"\"\n"
    "74,400,\"\"\n"
    "69,800,\"\"\n"
    
    "66,400,\"Watashi no ino chi\"\n"
    "69,400,\"\"\n"
    "71,400,\"\"\n"
    "71,400,\"\"\n"
    "69,400,\"\"\n"
    "71,400,\"\"\n"
    "66,800,\"\"\n"
    
    "64,400,\"Kae ra nu toki yubi ori kazo ete mo\"\n"
    "66,400,\"\"\n"
    "67,400,\"\"\n"
    "66,400,\"\"\n"
    "64,400,\"\"\n"
    "67,400,\"\"\n"
    "65,400,\"\"\n"
    "71,400,\"\"\n"
    "73,400,\"\"\n"
    "74,400,\"\"\n"
    "73,400,\"\"\n"
    "68,400,\"\"\n"
    "70,400,\"\"\n"
    "71,200,\"\"\n"
    "73,800,\"\"\n";
  writeFile(FFat, "/fuyunohana.mus", content_f);
  const char* content = 
    "70,500,\"A0 Test\"\n"
    "73,500,\"A0 Test\"\n"
    "72,500,\"A0 Test\"\n"
    "68,500,\"A0 Test\"\n"
    "65,800,\"A0 Test\"\n";
  writeFile(FFat, "/A0.mus", content);
  writeFile(FFat, "/hello.txt", "hello world!");
}


