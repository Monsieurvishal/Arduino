#include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
void setup()
{
 lcd.begin(16,2); 
 Serial.begin(9600);
}
void loop()
{
  float val=analogRead(A3);
  lcd.setCursor(1,0);
  lcd.print(val);
  Serial.println(val);
  
}

