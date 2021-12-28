#include <M5StickCPlus.h>
#include "winxploading.h"
#include "welcome.h"
#include "error.h"
#include "bsod.h"

void setup() {
  M5.begin();
  M5.Lcd.setRotation(0);
  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.setSwapBytes(true);
}

void loop() {
  for (int i = 0; i < 9; i++)
    for (int i = 0; i < 11; i++) {
      M5.Lcd.pushImage(0, 50, 135, 136, winxploading[i]);
      delay(80);
    }

  M5.Lcd.pushImage(0, 0, 135, 240, welcome);
  delay(5200);

  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.pushImage(0, 0, 135, 240, error);
  delay(4000);

  M5.Lcd.pushImage(0, 0, 135, 240, bsod);
  delay(7000);
  M5.Lcd.fillScreen(BLACK);
}
