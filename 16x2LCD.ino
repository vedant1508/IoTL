#include <LiquidCrystal.h>

LiquidCrystal lcd(6,7,2,3,4,5);   //lcd object & 6,7 is for enable and reset


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2); // 2rows and 16 columns
  lcd.print("welcome to Lab ");
}

void loop() {
  // put your main code here, to run repeatedly:

}
