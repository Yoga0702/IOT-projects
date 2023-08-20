//Arc Labs Anvesh Reddy
//Control LED Using Blynk 2.0/Blynk IOT

#define BLYNK_TEMPLATE_ID "TMPLvwg7roYp"
#define BLYNK_TEMPLATE_NAME "LED"
#define BLYNK_AUTH_TOKEN "QbEVXX1SZKyAR2LA82BpPRhZCr3dcxNx"


#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>  
#include <BlynkSimpleEsp8266.h>
 

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[ ] = "Redmi"; // Enter your Wifi Username
char pass[ ] = "1234567890";  // Enter your Wifi password

int ledpin = D4;
void setup()
{     
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);    
  pinMode(ledpin,OUTPUT);
}

void loop()
{
  Blynk.run(); 
}
