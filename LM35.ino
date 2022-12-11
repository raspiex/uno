#include<LiquidCrystal.h>

LiquidCrystal(12,11,5,4,3,2);
#define LM35 A0
float val;
float Temp;

void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);

}

void loop() {

val=analogRead(LM35);
Temp=(val * 500)/1023;

lcd.setCursor(0,0);
lcd.print("Temp:  ");
lcd.setCursor(0,1);
lcd.print(Temp);

}
