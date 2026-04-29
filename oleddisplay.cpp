#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(128,64,&Wire,-1);

void setup() {
display.begin(SSD1306_SWITCHCAPVCC,0x3C);
display.clearDisplay();
}

void loop() {
display.clearDisplay();
display.setTextSize(1);
display.setursor(0,0);
display.print("BPM: 78");
display.setCursor(0,20);
display.print("SpO2: 98%");
display.display();
delay(2000);
}