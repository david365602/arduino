#include <LiquidCrystal.h> 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
 lcd.begin(16, 2); // set up the LCD's number of columns and rows:
}
void loop() {
 lcd.setCursor(0, 0);
 lcd.print("I am Fucken"); 
 lcd.setCursor(0, 1);
 lcd.print("Awesome");
}
