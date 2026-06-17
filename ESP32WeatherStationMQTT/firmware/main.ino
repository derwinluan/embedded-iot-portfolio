        /*
         * #12 ESP32 Weather Station MQTT
         * ESP32 MQTT demo — serial telemetry simulation; fill config.h for AWS IoT Core
         */
        #include "config.h"
        float temp=24.5, humi=48.0;

        void setup() {
          Serial.begin(115200);
          randomSeed(analogRead(0));
          Serial.println(F("{\"device\":\"ESP32 Weather Station MQTT\",\"type\":\"weather\"}"));
        }

        void loop() {
          temp += (random(-10,11))/10.0;
humi += (random(-5,6))/10.0;
Serial.print("{\"temp\":"); Serial.print(temp,1);
Serial.print(",\"humi\":"); Serial.print(humi,1);
Serial.println(",\"comfort\":\"ok\"}");
          delay(1000);
        }
