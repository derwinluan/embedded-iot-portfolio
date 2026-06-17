/*
 * #05 UNO UART MQTT Bridge — ESP32 UART gateway
 * UART2 RX=16 TX=17 to UNO; WiFi/MQTT credentials in config.h
 * Local test: merge slave JSON and print on USB serial
 */
#include "config.h"
#define RXD 16
#define TXD 17
String uartLine;

void setup() {
  Serial.begin(115200);
  Serial2.begin(9600, SERIAL_8N1, RXD, TXD);
  Serial.println("gateway ready");
}

void loop() {
  while (Serial2.available()) {
    char c = Serial2.read();
    if (c == '\n') {
      Serial.print("{\"gateway\":\"UNO UART MQTT Bridge\",\"payload\":");
      Serial.print(uartLine);
      Serial.println("}");
      uartLine = "";
    } else uartLine += c;
  }
}
