/*
 * #06 Serial Servo Actuator
 * Serial JSON: {"angle":90} or plain command: ANGLE 90
 */
#include <Servo.h>
Servo servo;
int angle = 90;

void setup() {
  servo.attach(9);
  servo.write(angle);
  Serial.begin(9600);
  Serial.println(F("{\"ready\":true,\"angle\":90}"));
}

void loop() {
  if (!Serial.available()) return;
  String line = Serial.readStringUntil('\n'); line.trim();
  if (line.startsWith("{")) {
    int idx = line.indexOf(':');
    if (idx > 0) angle = line.substring(idx + 1).toInt();
  } else if (line.startsWith("ANGLE")) {
    angle = line.substring(6).toInt();
  }
  angle = constrain(angle, 0, 180);
  servo.write(angle);
  Serial.print(F("{\"angle\":")); Serial.print(angle); Serial.println(F("}"));
}
