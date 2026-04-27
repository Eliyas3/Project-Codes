int batteryPin = 34;

void setup(){
Serial.begin(115200);
}
void loop(){
int value = analogRead(batteryPin);
Serial.println(value);
delay(2000);
