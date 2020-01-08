/*
prints two names, countdown from 10-0, scrolls an arrow to the right
uses i2c liquidcrystal library by fmalpartida 
https://bitbucket.org/fmalpartida/new-liquidcrystal/downloads/I2CLCDextraIO_assemblyProject_small.jpg
run hd44780 diagnostic tool (I2CexpDiag)before connecting a new lcd backpack module 
https://img.shields.io/badge/Version-1.1.0-green.svg?style=plastic)



*Current version hardware error, dram fault on lcd module*
*
*
*
*
*
*
*
*
*
*
*********************************************************************
Serial Initialized
--------------------------------------------------------------------
I2CexpDiag - i2c LCD i/o expander backpack diagnostic tool
--------------------------------------------------------------------
hd44780 lib version: 1.1.0
--------------------------------------------------------------------
Reported Arduino Revision: 1.8.11
CPU ARCH: AVR - F_CPU: 16000000
--------------------------------------------------------------------
SDA digital pin: 20
SCL digital pin: 21
--------------------------------------------------------------------
Checking for required external I2C pull-up on SDA - YES
Checking for required external I2C pull-up on SCL - YES
Checking for I2C pins shorted together - Not Shorted
--------------------------------------------------------------------
Scanning i2c bus for devices..
 i2c device found at address 0x3F
Total I2C devices found: 1
--------------------------------------------------------------------
Scanning i2c bus for all lcd displays
 LCD at address: 0x3F | config: P01245673H | R/W control: Yes
Total LCD devices found: 1
--------------------------------------------------------------------
LCD Display Memory Test
Display: 0
 Walking 1s data test: 
  Compare error: addr: 0 read 11 != wrote 1
  Compare error: addr: 0 read 13 != wrote 2
  Compare error: addr: 0 read 15 != wrote 4
  Compare error: addr: 0 read 19 != wrote 8
  Compare error: addr: 0 read 11 != wrote 10
  Compare error: addr: 0 read 31 != wrote 20
  Compare error: addr: 0 read 51 != wrote 40
  Compare error: addr: 0 read 91 != wrote 80

  Compare error: addr: 40 read 11 != wrote 1
  Compare error: addr: 40 read 13 != wrote 2
  Compare error: addr: 40 read 15 != wrote 4
  Compare error: addr: 40 read 19 != wrote 8
  Compare error: addr: 40 read 11 != wrote 10
  Compare error: addr: 40 read 31 != wrote 20
  Compare error: addr: 40 read 51 != wrote 40
  Compare error: addr: 40 read 91 != wrote 80

  Compare error: addr: 10 read 11 != wrote 1
  Compare error: addr: 10 read 13 != wrote 2
  Compare error: addr: 10 read 15 != wrote 4
  Compare error: addr: 10 read 19 != wrote 8
  Compare error: addr: 10 read 11 != wrote 10
  Compare error: addr: 10 read 31 != wrote 20
  Compare error: addr: 10 read 51 != wrote 40
  Compare error: addr: 10 read 91 != wrote 80

  Compare error: addr: 50 read 11 != wrote 1
  Compare error: addr: 50 read 13 != wrote 2
  Compare error: addr: 50 read 15 != wrote 4
  Compare error: addr: 50 read 19 != wrote 8
  Compare error: addr: 50 read 11 != wrote 10
  Compare error: addr: 50 read 31 != wrote 20
  Compare error: addr: 50 read 51 != wrote 40
  Compare error: addr: 50 read 91 != wrote 80
FAILED
 Address line test: 
  Compare error: addr: 0 read 19 != wrote 0
  Compare error: addr: 1 read 19 != wrote 1
  Compare error: addr: 2 read 19 != wrote 2
  Compare error: addr: 3 read 19 != wrote 3
  Compare error: addr: 4 read 35 != wrote 4
  Compare error: addr: 5 read 35 != wrote 5
  Compare error: addr: 6 read 37 != wrote 6
  Compare error: addr: 7 read 37 != wrote 7
  Compare error: addr: 8 read 19 != wrote 8
  Compare error: addr: 9 read 19 != wrote 9
  Compare error: addr: B read F3 != wrote B
  Compare error: addr: C read 1D != wrote C
  Compare error: addr: E read FF != wrote E
  Compare error: addr: F read FF != wrote F
  Compare error: addr: 10 read 19 != wrote 10
  Compare error: addr: 11 read 19 != wrote 11
  Compare error: addr: 12 read 19 != wrote 12
  Compare error: addr: 13 read 19 != wrote 13
  Compare error: addr: 14 read 35 != wrote 14
  Compare error: addr: 15 read 35 != wrote 15
  Compare error: addr: 16 read 37 != wrote 16
  Compare error: addr: 17 read 37 != wrote 17
  Compare error: addr: 18 read 19 != wrote 18
  Compare error: addr: 1A read F3 != wrote 1A
  Compare error: addr: 1B read F3 != wrote 1B
  Compare error: addr: 1C read 1D != wrote 1C
  Compare error: addr: 1E read FF != wrote 1E
  Compare error: addr: 1F read FF != wrote 1F
  Compare error: addr: 20 read 33 != wrote 20
  Compare error: addr: 21 read 33 != wrote 21
  Compare error: addr: 22 read 33 != wrote 22
  Compare error: addr: 23 read 33 != wrote 23
  Compare error: addr: 24 read 35 != wrote 24
  Compare error: addr: 25 read 35 != wrote 25
  Compare error: addr: 26 read 37 != wrote 26
  Compare error: addr: 27 read 37 != wrote 27

  Compare error: addr: 40 read 5D != wrote 40
  Compare error: addr: 41 read 5D != wrote 41
  Compare error: addr: 42 read 5D != wrote 42
  Compare error: addr: 43 read 5D != wrote 43
  Compare error: addr: 44 read 75 != wrote 44
  Compare error: addr: 45 read 75 != wrote 45
  Compare error: addr: 46 read 77 != wrote 46
  Compare error: addr: 47 read 77 != wrote 47
  Compare error: addr: 48 read 59 != wrote 48
  Compare error: addr: 49 read 59 != wrote 49
  Compare error: addr: 4A read FB != wrote 4A
  Compare error: addr: 4B read FB != wrote 4B
  Compare error: addr: 4C read 5D != wrote 4C
  Compare error: addr: 4D read 5D != wrote 4D
  Compare error: addr: 4E read F3 != wrote 4E
  Compare error: addr: 4F read F3 != wrote 4F
  Compare error: addr: 50 read 5D != wrote 50
  Compare error: addr: 51 read 5D != wrote 51
  Compare error: addr: 52 read 5D != wrote 52
  Compare error: addr: 53 read 5D != wrote 53
  Compare error: addr: 54 read 75 != wrote 54
  Compare error: addr: 55 read 75 != wrote 55
  Compare error: addr: 56 read 77 != wrote 56
  Compare error: addr: 57 read 77 != wrote 57
  Compare error: addr: 58 read 59 != wrote 58
  Compare error: addr: 5A read FB != wrote 5A
  Compare error: addr: 5B read FB != wrote 5B
  Compare error: addr: 5C read 5D != wrote 5C
  Compare error: addr: 5E read F3 != wrote 5E
  Compare error: addr: 5F read F3 != wrote 5F
  Compare error: addr: 60 read 73 != wrote 60
  Compare error: addr: 61 read 73 != wrote 61
  Compare error: addr: 62 read 73 != wrote 62
  Compare error: addr: 63 read 73 != wrote 63
  Compare error: addr: 64 read 75 != wrote 64
  Compare error: addr: 65 read 75 != wrote 65
  Compare error: addr: 66 read 77 != wrote 66
  Compare error: addr: 67 read 77 != wrote 67
FAILED
Memory test failures are usually due to poor solder connections
Most common cause is poor solder joints on pins soldered to the LCD

--------------------------------------------------------------------
No working LCD devices

*/






#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x3F, 16, 2);
void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("My Name");
  lcd.setCursor(1, 0);
  lcd.print("Partner Name");
  delay(1000);
  for (int i = 10; i >= 0; i--) {
    int countdown = i;
    lcd.print(countdown);
    delay(1000);
  }
  lcd.print("Liftoff!");
  lcd.clear();
  lcd.print("->");
  for (int position = 0; position < 16; position++) {
    lcd.scrollDisplayRight();
    delay(150);
  }

}
void loop() {

}
