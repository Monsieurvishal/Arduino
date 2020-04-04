void setup() 
{
pinMode(D0,OUTPUT);
pinMode(D4,OUTPUT);
}
void loop() 
{
  float val=analogRead(A0);
  if(val>100)
  {
digitalWrite(D0,HIGH);
digitalWrite(D4,LOW);
delay(1000);
  }
  else if(val<100)
  {
digitalWrite(D0,LOW);
digitalWrite(D4,HIGH);
delay(1000);
}
}
