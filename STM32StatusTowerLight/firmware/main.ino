        /*
         * #07 STM32 Status Tower Light
         * STM32 Arduino Core — local GPIO and serial test firmware
         */
        const int LED_G=PA1, LED_Y=PA2, LED_R=PA3;
        void setup() {
          pinMode(LED_G,OUTPUT);pinMode(LED_Y,OUTPUT);pinMode(LED_R,OUTPUT);
          Serial.begin(115200);
        }
        void loop() { static int phase=0;
digitalWrite(LED_G, phase==0); digitalWrite(LED_Y, phase==1); digitalWrite(LED_R, phase==2);
Serial.print("{\"status\":"); Serial.print(phase); Serial.println(",\"alive\":1}");
phase=(phase+1)%3; delay(800); }
