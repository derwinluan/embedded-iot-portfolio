/*
 * #02 Desktop Proximity Radar
 * Pins: TRIG=9 ECHO=10 LED=13 BUZZER=8 (optional)
 * Outputs JSON distance; alerts when distance < 20 cm
 */
const int TRIG=9, ECHO=10, LED=13, BUZZ=8;
const int NEAR_CM = 20;

long readDistanceCm() {
  digitalWrite(TRIG, LOW); delayMicroseconds(2);
  digitalWrite(TRIG, HIGH); delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  long us = pulseIn(ECHO, HIGH, 30000);
  if (us <= 0) return -1;
  return us * 0.034 / 2;
}

void setup() {
  pinMode(TRIG, OUTPUT); pinMode(ECHO, INPUT);
  pinMode(LED, OUTPUT); pinMode(BUZZ, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  long d = readDistanceCm();
  bool alert = d > 0 && d < NEAR_CM;
  digitalWrite(LED, alert ? HIGH : LOW);
  digitalWrite(BUZZ, alert ? HIGH : LOW);
  Serial.print(F("{\"distance\":")); Serial.print(d);
  Serial.print(F(",\"alert\":")); Serial.print(alert ? F("true") : F("false"));
  Serial.println(F("}"));
  delay(200);
}
