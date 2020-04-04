void setup() 
{
  pinMode(12,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{

int i;
 for(i=0;i<=255;i++)
 {
  analogWrite(12,i);
  Serial.println(i);
  delay(500);
 }
 
 

}
