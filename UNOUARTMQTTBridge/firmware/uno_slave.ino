/* #05 UNO UART MQTT Bridge — UNO slave publishing Serial JSON for ESP32 gateway */
const int TRIG=9,ECHO=10;
long readDistanceCm() {
  digitalWrite(TRIG,LOW);delayMicroseconds(2);digitalWrite(TRIG,HIGH);delayMicroseconds(10);digitalWrite(TRIG,LOW);
  long us=pulseIn(ECHO,HIGH,30000); return us<=0?-1:us*0.034/2;
}
void setup() { pinMode(TRIG,OUTPUT); pinMode(ECHO,INPUT); Serial.begin(9600); }
void loop() { long d=readDistanceCm(); Serial.print("{\"distance\":"); Serial.print(d); Serial.println("}"); delay(200); }
