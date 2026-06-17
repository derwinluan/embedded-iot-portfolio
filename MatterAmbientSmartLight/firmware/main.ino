/*
 * #15 Matter Ambient Smart Light
 * ESP32 MQTT demo — serial telemetry simulation; fill config.h for AWS IoT Core
 */
#include "config.h"


void setup() {
  Serial.begin(115200);
  randomSeed(analogRead(0));
  Serial.println(F("{\"device\":\"Matter Ambient Smart Light\",\"type\":\"light\"}"));
}

void loop() {
  Serial.println("{\"online\":true}");
  delay(1000);
}
