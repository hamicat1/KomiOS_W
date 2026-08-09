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
void fileInfo(fs::FS &fs,const char * fullPath,char* size,size_t bufSize){
    File file=fs.open(fullPath,FILE_READ);
    if(file){
        size_t fSize=file.size();
        if(fSize>=1024){
            snprintf(size,bufSize,"%dKB",(int)(fSize/1024));
        }else{
            snprintf(size,bufSize,"%dB",(int)fSize);
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
  const char* content_j = 
    "CLOCK=時計\n"
    "FILE=ファイル\n"
    "SETTING=設定\n"
    "BEEP=ビープ音\n"
    "OPEN=開く\n"
    "COPY=コピー\n"
    "RENAME=名前変更\n"
    "DELETE=削除\n"
    "NEW=新規\n"
    "INFO=情報\n"
    "DONE=完了\n"
    "FAILED=失敗\n"
    "AUTO SELECT=自動選択\n"
    "EDIT=編集\n"
    "SAVE=保存\n"
    "MONDAY=月曜日\n"
    "TUESDAY=火曜日\n"
    "WEDNESDAY=水曜日\n"
    "THURSDAY=木曜日\n"
    "FRIDAY=金曜日\n"
    "SATURDAY=土曜日\n"
    "SUNDAY=日曜日\n"
    "SCREEN=画面\n"
    "SPEAKER=スピーカー\n"
    "TIME/DATE=日時\n"
    "LANGUAGE=言語\n"
    "SYSTEM INFO=システム情報\n"
    "REBOOT=再起動\n"
    "BRIGHT=明るさ\n";

  writeFile(FFat, "/Japanese.lng", content_j);
  const char* content_c = 
    "CLOCK=时钟\n"
    "FILE=文件\n"
    "SETTING=设置\n"
    "BEEP=声音\n"
    "OPEN=打开\n"
    "COPY=复制\n"
    "RENAME=重命名\n"
    "DELETE=删除\n"
    "NEW=新建\n"
    "INFO=属性\n"
    "DONE=完成\n"
    "FAILED=失败\n"
    "AUTO SELECT=自动选择\n"
    "EDIT=编辑\n"
    "SAVE=保存\n"
    "MONDAY=星期一\n"
    "TUESDAY=星期二\n"
    "WEDNESDAY=星期三\n"
    "THURSDAY=星期四\n"
    "FRIDAY=星期五\n"
    "SATURDAY=星期六\n"
    "SUNDAY=星期天\n"
    "SCREEN=屏幕\n"
    "SPEAKER=蜂鸣器\n"
    "TIME/DATE=时间/日期\n"
    "LANGUAGE=语言\n"
    "SYSTEM INFO=系统信息\n"
    "REBOOT=重启\n"
    "BRIGHT=亮度\n";

  writeFile(FFat, "/Simp_chinese.lng", content_c);
  const char* content_f = 
    "FILE=Datei\n"
    "OPEN=öffnen\n"
    "CLOCK=Uhr\n"
    "FILE=Datei\n"
    "SETTING=Einstellung\n"
    "BEEP=Signalton\n"
    "OPEN=Öffnen\n"
    "COPY=Kopieren\n"
    "RENAME=Umbenennen\n"
    "DELETE=Löschen\n"
    "NEW=Neu\n"
    "INFO=Info\n"
    "DONE=Fertig\n"
    "FAILED=Fehlgeschlagen\n"
    "AUTO SELECT=Auto-Auswahl\n"
    "EDIT=Bearbeiten\n"
    "SAVE=Speichern\n"
    "MONDAY=Montag\n"
    "TUESDAY=Dienstag\n"
    "WEDNESDAY=Mittwoch\n"
    "THURSDAY=Donnerstag\n"
    "FRIDAY=Freitag\n"
    "SATURDAY=Samstag\n"
    "SUNDAY=Sonntag\n"
    "SCREEN=Bildschirm\n"
    "SPEAKER=Lautsprecher\n"
    "TIME/DATE=Zeit/Datum\n"
    "LANGUAGE=Sprache\n"
    "SYSTEM INFO=Systeminfo\n"
    "REBOOT=Neustart\n"
    "BRIGHT=Helligkeit\n";

  writeFile(FFat, "/Dustch.lng", content_f);
    const char* content_v = 
    "FILE=Tệp\n"
    "OPEN=Mở\n"
    "COPY=Sao chép\n"
    "RENAME=Đổi tên\n"
    "DELETE=Xóa\n"
    "NEW=Mới\n"
    "INFO=Thông tin\n"
    "DONE=Hoàn thành\n"
    "FAILED=Thất bại\n"
    "AUTO SELECT=Tự động chọn\n"
    "EDIT=Chỉnh sửa\n"
    "SAVE=Lưu\n";

  writeFile(FFat, "/Vietnam.lng", content_v);
    const char* content_r = 
    "FILE=Файл\n"
    "OPEN=Открыть\n"
    "COPY=Копировать\n"
    "RENAME=Переименовать\n"
    "DELETE=Удалить\n"
    "NEW=Новый\n"
    "INFO=Информация\n"
    "DONE=Готово\n"
    "FAILED=Ошибка\n"
    "AUTO SELECT=Автовыбор\n"
    "EDIT=Редактировать\n"
    "SAVE=Сохранить\n";

  writeFile(FFat, "/Russian.lng", content_r);
  const char* content = 
    "70,500,\"A0 Test\"\n"
    "73,500,\"A0 Test\"\n"
    "72,500,\"A0 Test\"\n"
    "68,500,\"A0 Test\"\n"
    "65,800,\"A0 Test\"\n";
  writeFile(FFat, "/A0.mus", content);
  const char* content_m = 
    "76,400,\" \"\n"
    "72,400,\n"
    "76,400,\n"
    "72,400,\n"
    "76,400,\n"
    "72,400,\n"
    "0,100,\n"
    "72,400,\"snowfall\"\n"
    "67,400,\n"
    "69,400,\n"
    "65,400,\n"
    "69,400,\n"
    "65,400,\n"
    "69,400,\n"
    "65,400,\n"

    "69,400,\n"
    "70,400,\n"
    "69,400,\n"
    "70,400,\n"
    "69,400,\n"
    "70,400,\n"
    "69,400,\n"
    "70,400,\n"
    
    "72,400,\n"
    "66,400,\n"
    "64,400,\n"
    "66,400,\n"
    "72,400,\n"
    "66,400,\n"
    "64,400,\n"
    "66,400,\n"

    "72,800,\n"
    "72,800,\n"
    "72,800,\n"
    "0,100,\n"
    "72,400,\"snowfall\"\n"
    "67,400,\n"
    "69,400,\n"
    "65,400,\n"
    "69,400,\n"
    "65,400,\n"
    "69,400,\n"
    "65,400,\n"
     

    ;
  writeFile(FFat, "/snowfall.mus", content_m);
  writeFile(FFat, "/hello.txt", "hello world!");
  if(!EEPROM.begin(1000)){
    k_desktop_noticeWindow("FAILED","Failed to initialise EEPROM",6,true);
  }
}


