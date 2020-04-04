void setup() {
  Serial.begin(38400);
  pinMode(13,OUTPUT);
  
}

void loop() {
 float val=analogRead(A3);
 if(val>50)
 {
  digitalWrite(13,HIGH);
  Serial.println("shivani on");
 }
 else
 {
  digitalWrite(13,LOW);
  Serial.println("shivani off");
 }
}
