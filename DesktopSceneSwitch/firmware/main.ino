/*
 * #04 Desktop Scene Switch
 * Button on pin 2 (pull-up), debounced toggle on LED pin 13
 * Serial JSON: {"btn":1,"led":0}
 */
const int BTN=2, LED=13;
bool ledOn=false; int lastBtn=HIGH; unsigned long debounce=0;

void setup() {
  pinMode(BTN, INPUT_PULLUP); pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int btn = digitalRead(BTN);
  if (btn == LOW && lastBtn == HIGH && millis()-debounce>50) {
    debounce = millis(); ledOn = !ledOn;
    digitalWrite(LED, ledOn ? HIGH : LOW);
    Serial.print(F("{\"btn\":1,\"led\":")); Serial.print(ledOn?1:0); Serial.println(F("}"));
  }
  lastBtn = btn;
}
