void setup()
{
Serial.begin(9600);
pinMode(11,OUTPUT);
}
void loop()
{
digitalWrite(13,HIGH);
Serial.println("on on");
delay(50);
digitalWrite(13,LOW);
Serial.println("off off");
delay(50);
}
