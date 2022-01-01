#include <M5StickCPlus.h>
#include "winxploading.h"
#include "welcome.h"
#include "error.h"
#include "bsod.h"
#include "desktop.h"

bool showerror = true;

void setup() {
  M5.begin();
  M5.Lcd.setSwapBytes(true);
}

void loop() {
  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.setRotation(0);

  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 11; j++) {
      M5.Lcd.pushImage(0, 50, 135, 136, winxploading[j]);
      delay(80);
    }

  M5.Lcd.pushImage(0, 0, 135, 240, welcome);
  delay(3500);

  if (showerror) {
    M5.Lcd.fillScreen(BLACK);
    M5.Lcd.pushImage(0, 80, 135, 83, error);
    delay(3500);

    M5.Lcd.pushImage(0, 70, 135, 100, bsod);

    showerror = false;
  } else {
    M5.Lcd.setRotation(3);
    M5.Lcd.pushImage(0, 0, 240, 135, desktop);

    showerror = true;

    delay(750);
    M5.Beep.tone(1175, 125);
    delay(125);
    M5.Beep.end();
    delay(125);

    M5.Beep.tone(587, 125);
    delay(125);
    M5.Beep.end();

    M5.Beep.tone(880, 125);
    delay(125);
    M5.Beep.end();
    delay(250);

    M5.Beep.tone(784, 125);
    delay(125);
    M5.Beep.end();
    delay(375);

    M5.Beep.tone(1175, 125);
    delay(125);
    M5.Beep.end();
    delay(125);

    M5.Beep.tone(880, 1000);
    delay(1000);
    M5.Beep.end();
  }

  while (digitalRead(37) == 1) {}
}
