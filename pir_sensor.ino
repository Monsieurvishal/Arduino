void setup()
{
pinMode(6,INPUT);
Serial.begin(9600);   

}
//PIR sensor is the passive infrared sensor which works on he principle of detecting the change in heat due to the reflection of IR rays
void loop() 
{
  int pir=digitalRead(6);
  Serial.println(pir);

}
