#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(128, 64, &Wire, -1);

#include "DHT.h"
#define DHTPIN 6
#define DHTTYPE DHT22 
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  dht.begin();
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
  // Wait a few seconds between measurements.
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t)) {
    return;
  }
  display.setCursor(0,0);
  display.println("Temp:"+String(t)+"  ");
  display.println("Humi:"+String(h)+"  ");
  display.display();
}


