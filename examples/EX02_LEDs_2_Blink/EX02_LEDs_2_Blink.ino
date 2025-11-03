int LED1_pin = 23;
int LED2_pin = 24;
void setup() {
  pinMode(LED1_pin, OUTPUT);
  pinMode(LED2_pin, OUTPUT);
}
void loop() {
  digitalWrite(LED1_pin, HIGH);
  delay(250);
  digitalWrite(LED2_pin, HIGH);
  delay(250);
  digitalWrite(LED1_pin,LOW);
  delay(250);
  digitalWrite(LED2_pin,LOW);
  delay(250);
}
