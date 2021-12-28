#include <M5StickCPlus.h>
#include "frame.h"
#include "welcome.h"
#include "error.h"
#include "bsod.h"

//https://github.com/VolosR/fAKEWINESP/blob/main/WINxp/WINxp.ino
//https://github.com/VolosR/M5ScickPlusTetris/blob/main/tet.h
//https://github.com/VolosR/M5ScickPlusTetris/blob/main/M5StickCPlusTetris.ino
//https://markdownlivepreview.com/
//https://github.com/m5stack/M5StickC-Plus/blob/master/src/M5Display.cpp
//https://toblum.github.io/gif2carray/
//https://redketchup.io/gif-resizer
//https://github.com/toblum/gif2carray

void setup() {  
   M5.begin();
   M5.Lcd.setRotation(0);
   M5.Lcd.fillScreen(BLACK);
   M5.Lcd.setSwapBytes(true);
}

void loop() 
{
 for(int i=0;i<9;i++)
    for(int i=0;i<12;i++){
      //M5.Lcd.pushImage(52,56,150,151,frame[i]);
      //delay(80);
      }

    M5.Lcd.pushImage(0,0,135,240,welcome);
    delay(5200);
    
    M5.Lcd.fillScreen(BLACK);
    M5.Lcd.pushImage(0,0,135,240,error);
    delay(4000);
    
    M5.Lcd.pushImage(0,0,135,240,bsod);
    delay(7000);
    M5.Lcd.fillScreen(BLACK);
}
