#include<Wire.h>
#include<LiquidCrystal_I2C.h>
/*
  Test made for DOIT - ESP32 DEVKIT V1
  With an I2C to LCD conversor and LCD Display


  Ports (I2C  - ESP32):
  GND - GND
  VCC - VIN
  SDA - D22
  SCL - D21

*/
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup_lcd(){
  lcd.begin();
  lcd.backlight();
}

void print_to_lcd(String first_str ="", String second_str =""){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(first_str);
  lcd.setCursor(0,1);
  lcd.print(second_str);
}

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
setup_lcd();
print_to_lcd("Hello, World!", "From E.S.T.U.F.A. ");
}

void loop()   
{

}
