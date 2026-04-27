int bpm;
int spo2;
float temp;

void setup(){
Serial.begin(115200);
}

void loop(){

bpm = random(70,100);
spo2 = random(95,100);
temp = random(360,380)/10.0;

Serial.println(bpm);
Serial.println(spo2);
Serial.println(temp);

delay(2000);
}