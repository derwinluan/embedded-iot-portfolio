/*
 * #14 ESP32 Smart Plug MQTT
 * ESP32 MQTT demo — serial telemetry simulation; fill config.h for AWS IoT Core
 */
#include "config.h"
bool relayOn=false;

void setup() {
  Serial.begin(115200);
  randomSeed(analogRead(0));
  Serial.println(F("{\"device\":\"ESP32 Smart Plug MQTT\",\"type\":\"plug\"}"));
}

void loop() {
  Serial.println(relayOn?"{\"relay\":1}":"{\"relay\":0}");
  delay(1000);
}
