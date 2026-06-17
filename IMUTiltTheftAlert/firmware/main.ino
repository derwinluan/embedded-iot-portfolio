/*
 * #19 IMU Tilt Theft Alert
 * ESP32 MQTT demo — serial telemetry simulation; fill config.h for AWS IoT Core
 */
#include "config.h"


void setup() {
  Serial.begin(115200);
  randomSeed(analogRead(0));
  Serial.println(F("{\"device\":\"IMU Tilt Theft Alert\",\"type\":\"imu\"}"));
}

void loop() {
  Serial.println("{\"motion\":true,\"tilt\":12.3}");
  delay(1000);
}
