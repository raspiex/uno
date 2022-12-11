#include<LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2,1);

const int trigPin = 4;
const int echoPin = 5;

long Duration;
int Distance;

void setup()
{
  pinMode(trigPin , OUTPUT);
  pinMode(echoPin , INPUT);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Distance:  ");
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  Duration=pulseIn(echoPin , HIGH);

  Distance = Duration*0.034/2;


  lcd.setCursor(0,1);
  lcd.print(Distance);
  
}
