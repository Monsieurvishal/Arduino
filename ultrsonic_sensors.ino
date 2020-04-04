#define echo 8
#define trig 9
void setup() 
{
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}

void loop()
{
long duration,distance;
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
duration=pulseIn(echo,HIGH);
distance=(duration/58.138)*0.39;
Serial.println(distance);
delay(300);
}
 
