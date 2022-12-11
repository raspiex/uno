int val;

void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3 , OUTPUT);
  }

void loop()
{
  val=digitalRead(2);

if(val == HIGH)
{
  digitalWrite(3, HIGH);
  delay(1000);
  Serial.print("Detected");    
}
else{
  digitalWrite(3, LOW);
}
}
