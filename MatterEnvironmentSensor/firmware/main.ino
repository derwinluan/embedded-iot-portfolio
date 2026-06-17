/*
 * #16 Matter Environment Sensor
 * ESP32 MQTT demo — serial telemetry simulation; fill config.h for AWS IoT Core
 */
#include "config.h"


void setup() {
  Serial.begin(115200);
  randomSeed(analogRead(0));
  Serial.println(F("{\"device\":\"Matter Environment Sensor\",\"type\":\"sensor\"}"));
}

void loop() {
  Serial.println("{\"online\":true}");
  delay(1000);
}
