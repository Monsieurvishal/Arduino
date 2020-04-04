void setup()
{
pinMode(6,INPUT);
Serial.begin(9600);   

}

void loop() 
{
  int pir=digitalRead(6);
  Serial.println(pir);

}
