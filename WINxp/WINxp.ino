#include <M5StickCPlus.h>
#include "winxploading.h"
#include "welcome.h"
#include "error.h"
#include "bsod.h"
#include "desktop.h"

bool showerror = true;

void setup() {
  pinMode(37, INPUT_PULLUP);
  M5.begin();
  M5.Lcd.setSwapBytes(true);
}

void loop() {
  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.setRotation(0);

  for (int i = 0; i < 3; i++)
    for (int i = 0; i < 11; i++) {
      M5.Lcd.pushImage(0, 50, 135, 136, winxploading[i]);
      delay(80);
    }

  M5.Lcd.pushImage(0, 0, 135, 240, welcome);
  delay(5200);

  if (showerror) {
    M5.Lcd.fillScreen(BLACK);
    M5.Lcd.pushImage(0, 80, 135, 83, error);
    delay(4000);

    M5.Lcd.pushImage(0, 70, 135, 100, bsod);
    
    showerror = false;
  } else {
    M5.Lcd.setRotation(3);
    M5.Lcd.pushImage(0, 0, 240, 135, desktop);
    showerror = true;
  }
  while (digitalRead(37) == 1) {}
}
