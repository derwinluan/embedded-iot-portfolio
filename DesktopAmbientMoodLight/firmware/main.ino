/*
 * #01 Desktop Ambient Mood Light
 * LED on/off, slow blink, PWM breathe; serial commands: ON|OFF|BLINK|BREATHE
 * Test: Arduino IDE Serial Monitor @ 9600 baud
 */
const int LED_PIN = 13;
enum Mode { OFF, ON, BLINK, BREATHE };
Mode mode = BLINK;
unsigned long lastMs = 0;
int breath = 0, breathDir = 5;

void applyMode() {
  if (mode == ON) { digitalWrite(LED_PIN, HIGH); analogWrite(LED_PIN, 255); }
  else if (mode == OFF) { digitalWrite(LED_PIN, LOW); analogWrite(LED_PIN, 0); }
}

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  Serial.println(F("{\"product\":\"Desktop Ambient Mood Light\",\"sort\":1}"));
  applyMode();
}

void loop() {
  if (Serial.available()) {
    String cmd = Serial.readStringUntil('\n'); cmd.trim(); cmd.toUpperCase();
    if (cmd == "ON") mode = ON;
    else if (cmd == "OFF") mode = OFF;
    else if (cmd == "BLINK") mode = BLINK;
    else if (cmd == "BREATHE") mode = BREATHE;
    applyMode();
    Serial.print(F("{\"mode\":\"")); Serial.print(cmd); Serial.println(F("\"}"));
  }
  unsigned long now = millis();
  if (mode == BLINK && now - lastMs > 500) {
    lastMs = now;
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
  }
  if (mode == BREATHE) {
    analogWrite(LED_PIN, breath);
    breath += breathDir;
    if (breath <= 0 || breath >= 255) breathDir = -breathDir;
    delay(15);
  }
}
