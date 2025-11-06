int LED1_pin = 23;
void setup() {
  pinMode(LED1_pin, OUTPUT);
}
void loop() {
  digitalWrite(LED1_pin, LOW);
  delay(500);
  digitalWrite(LED1_pin,HIGH);
  delay(500);
}
