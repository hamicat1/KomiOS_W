#include "file.h"

void writeFile(fs::FS &fs, const char * path, const char * message){
    Serial.printf("Writing file: %s\r\n", path);

    File file = fs.open(path, FILE_WRITE);
    if(!file){
        Serial.println("- failed to open file for writing");
        return;
    }
    if(file.print(message)){
        Serial.println("- file written");
    } else {
        Serial.println("- write failed");
    }
    file.close();
}


void k_file_init(){
  if (FORMAT_FFAT) FFat.format();
  if(!FFat.begin()){
      k_desktop_noticeWindow("FFAT FAILED","MOUNT FAILED",6,true);
      return;
  }
  writeFile(FFat, "/hello.txt", "Hello ");
  writeFile(FFat, "/hell1.txt", "Hello ");
  writeFile(FFat, "/hell2.txt", "Hello ");
  writeFile(FFat, "/hell3.txt", "Hello ");
  writeFile(FFat, "/hell4.txt", "Hello ");
  writeFile(FFat, "/hell5.txt", "Hello ");
  writeFile(FFat, "/hell6.txt", "Hello ");
  writeFile(FFat, "/hell7.txt", "Hello ");
  writeFile(FFat, "/hell8.txt", "Hello ");
  writeFile(FFat, "/hell9.txt", "Hello ");
}


