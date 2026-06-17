/*
 * #27 ESP32 CAN Parser Library
 * ESP32 CAN frame parser library demo
 */
#include <Arduino.h>
struct CanFrame { uint32_t id; uint8_t len; uint8_t data[8]; };

bool parseFrame(const CanFrame& f, char* out, size_t outLen) {
  if (outLen < 32) return false;
  snprintf(out, outLen, "{\"id\":%lu,\"len\":%u}", (unsigned long)f.id, f.len);
  return true;
}

void setup() { Serial.begin(115200); Serial.println("CAN parser ready"); }
void loop() {
  CanFrame demo = { .id = 0x123, .len = 8, .data = {1,2,3,4,5,6,7,8} };
  char buf[64];
  if (parseFrame(demo, buf, sizeof(buf))) Serial.println(buf);
  delay(1000);
}
