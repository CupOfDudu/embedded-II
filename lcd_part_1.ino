/*
prints two names, countdown from 10-0, scrolls an arrow to the right
uses i2c liquidcrystal library by fmalpartida 
https://bitbucket.org/fmalpartida/new-liquidcrystal/downloads
run hd44780 diagnostic tool (I2CexpDiag)before connecting a new lcd backpack module 
https://img.shields.io/badge/Version-1.1.0-green.svg?style=plastic)




*/






#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x3F, 16, 2);
void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("My Name");
  delay(1000);
  lcd.setCursor(0, 1);
  lcd.print("Partner Name");
  delay(1000);
  lcd.clear();
  
  for (int i = 10; i >= 0; i= i-1) {
    int countdown = i;
    lcd.setCursor(0, 0);
    lcd.clear();
    lcd.print(countdown);
    delay(1000);
  }
  lcd.clear();
  lcd.print("Liftoff!");
  delay(1000);
  lcd.clear();
  lcd.print("->");
  for (int position = 0; position < 16; position++) {
    lcd.scrollDisplayRight();
    delay(150);
  }

}
void loop() {

}
