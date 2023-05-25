#include <LiquidCrystal.h>

LiquidCrystal lcd(6,7,2,3,4,5);   //lcd object


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.print("WELCOME TO IOT LAB ");
}

void loop() {
  // put your main code here, to run repeatedly:

}
