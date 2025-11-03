#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(128, 64, &Wire, -1);

int ADC0_pin = 1 ; 
void setup() {
  Serial.begin(115200);
  Wire.begin(2,3,400000);
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }
  display.setTextColor(SSD1306_WHITE,SSD1306_BLACK);
  display.setTextSize(2); // Draw 2X-scale text
  display.clearDisplay();
  display.display();
}

void loop() {
  int adc0 = analogRead(ADC0_pin);
  display.setCursor(0,0);
  display.print("ADC0:"+String(adc0)+"  ");
  display.display();
}


