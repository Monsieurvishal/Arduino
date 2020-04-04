void setup() 
{
Serial.begin(38400);  
}

void loop() 
{
 if(Serial.available()>0)
{
 char val=Serial.read();
 Serial.println(val);
}

}
