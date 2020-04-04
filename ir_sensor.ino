void setup() 
{
  Serial.begin(38400);
  

}

void loop() 
{
 float val=analogRead(A3);
 Serial.println(val);
 delay(300);
}
