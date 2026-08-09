#ifndef FILE_H
#define FILE_H

#include "../../komiapi.h"
#include "FS.h"
#include "FFat.h"
#include "EEPROM.h"

#define FORMAT_FFAT false

void writeFile(fs::FS &fs, const char * path, const char * message);
void createFolder(fs::FS &fs, const char* path);
void renameFile(fs::FS &fs, const char * path1, const char * path2);
void deleteFile(fs::FS &fs, const char * path);
void fileInfo(fs::FS &fs,const char * fullPath,char* size,size_t bufSize);
void formatDrive();
void k_file_init();

#endif
