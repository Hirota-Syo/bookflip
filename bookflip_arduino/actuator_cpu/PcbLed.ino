#define LED_PIN 13

void PcbLedInit() {
  pinMode(LED_PIN, OUTPUT);
}

void PcbLedMain() {
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
}
