        /*
         * #09 STM32 Relay Remote Control
         * STM32 Arduino Core — local GPIO and serial test firmware
         */
        const int RELAY=PA4; bool relayOn=false;
        void setup() {
          pinMode(RELAY,OUTPUT);
          Serial.begin(115200);
        }
        void loop() { if(Serial.available()){
  String c=Serial.readStringUntil('\n'); c.trim();
  if(c=="ON") relayOn=true; if(c=="OFF") relayOn=false;
  digitalWrite(RELAY, relayOn?HIGH:LOW);
  Serial.print("{\"relay\":"); Serial.print(relayOn?1:0); Serial.println("}");
} }
