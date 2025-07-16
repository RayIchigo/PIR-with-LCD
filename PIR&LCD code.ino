#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const int pirPin = 9;

LiquidCrystal_I2C lcd(0x20, 16, 2);

void setup() {
  pinMode(pirPin, INPUT);
  lcd.init();
  lcd.backlight();

  Serial.begin(9600);
  lcd.setCursor(0, 0);
  lcd.print("System Ready");
  delay(1000);
  lcd.clear();
}

void loop() {
  int motion = digitalRead(pirPin);

  lcd.setCursor(0, 0);
  if (motion == HIGH) {
    lcd.print("Motion Detected ");
    Serial.println("Motion detected!");
  } else {
    lcd.print("No Motion       ");
    Serial.println("No motion.");
  }

  delay(400);
}
