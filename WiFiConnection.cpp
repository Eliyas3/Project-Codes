#include <WiFi.h>

const char* ssid = "YOUR_WIFI";
const char* password = "YOUR_PASS";

void setup() {
Serial.begin(115200);
WiFi.begin(ssid,password);

while(WiFi.status()!=WL_CONNECTED){
delay(1000);
Serial.println("Connecting...");
}

Serial.println("Connected");
Serial.println(WiFi.localIP());


void loop(){}