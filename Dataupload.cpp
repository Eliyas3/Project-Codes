#include <HTTPClient.h>

HTTPClient http;

void loop(){

http.begin("http://YOUR_IP/save.php");
http.addHeader("Content-Type","application/x-www-form-urlencoded");

Strin data="bpm=78&spo2=98&temp=36.7";

http.POST(data);
http.end();

delay(5000);
}