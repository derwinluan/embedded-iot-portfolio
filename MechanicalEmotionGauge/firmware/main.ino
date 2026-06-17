        /*
         * #08 Mechanical Emotion Gauge
         * STM32 Arduino Core — local GPIO and serial test firmware
         */
        #include <Servo.h>\nServo servo;
        void setup() {
          servo.attach(PA6);
          Serial.begin(115200);
        }
        void loop() { if(Serial.available()){
  int a=Serial.parseInt(); a=constrain(a,0,180); servo.write(a);
  Serial.print("{\"angle\":"); Serial.print(a); Serial.println("}");
} }
