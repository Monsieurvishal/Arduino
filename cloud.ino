

#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
WiFiClient client;
String thingSpeakAddress="http://api.thingspeak.com/update?";
String writeAPIKey;
String tsfieldName;
String request_string;
HTTPClient http;
void setup()
{
 Serial.begin(9600);
 delay(1000);
 Serial.println("trying to establish the connection");
 WiFi.begin("Nokia 6","7406450389");
 while((!WiFi.status()==WL_CONNECTED))
 {
  delay(300);
  Serial.print(".");
 }
 Serial.print("device connected");
 }
void loop()
{
  delay(600);
  Serial.println(analogRead(A0));
  if(client.connect("api.thingspeak.com",80))
  {
    request_string=thingSpeakAddress;
    request_string+="key=";
    request_string+="IAYRLQ8TJEZG84VR";
    request_string+="&";
    request_string+="field1";
    request_string+="=";
    request_string+=analogRead(A0);
    
    http.begin(request_string);
    http.GET();
    http.end();
  }
}
