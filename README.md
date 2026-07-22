# KomiOS_W
基于ESP32S3，Arduino框架的便携式用户操作界面
饿啊，这个项目拖了一年多了，这次暑假终于开始做了
那么首先本项目基于Apache 2.0协议开源。
然后就是项目放在Komi文件夹里了，上传的话就去项目文件夹的bulid文件夹里找。
项目配置只需要设置为适配板子的就行，我这里是ESP32S3 N16R8，所以就是：
Flash Mode:QIO 120MHz
Flash Size:16MB(128Mb)
Partition Scheme:"16M Flash(3MB APP/9.9MB FATFS)"
PSRAM:"OPI PSRAM"
其他保持默认就行。
外设GPIO引脚：
SSD1306 SPI
D0:12
D1:11
RESET:8
DC:9
CS:10
按键
选择：BOOT 0
上：7
下：5
返回：4
切换：16
开关：18
蜂鸣器：6

使用的第三方库：
adafruit/Adafruit-GFX-Library
adafruit/Adafruit_SSD1306
adafruit/Adafruit_BusIO
fbiego/ESP32Time
使用的内置库：
Arduino
esp_system
sep_task_wdt
fs
ffat

使用方法我先不写
