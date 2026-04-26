#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

String serverName = "http://YOUR_IP_ADDRESS/health_monitor/save.php";

int bpm = 78;
int spo2 = 98;
float temp = 36.7;

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting...");
  }

  Serial.println("WiFi Connected");
}

void loop() {
    
  bpm = random(70, 100);
  spo2 = random(95, 100);
  temp = random(360, 380) / 10.0;

  if (WiFi.status() == WL_CONNECTED) {

    HTTPClient http;

    http.begin(serverName);
    http.addHeader("Content-Type", "application/x-www-form-urlencoded");

    String data = "bpm=" + String(bpm) +
                  "&spo2=" + String(spo2) +
                  "&temp=" + String(temp);

    int responseCode = http.POST(data);

    Serial.print("Response Code: ");
    Serial.println(responseCode);

    http.end();
  }

  delay(5000);
}