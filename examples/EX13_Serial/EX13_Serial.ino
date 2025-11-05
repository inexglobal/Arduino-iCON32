#define RX_PIN 4
#define TX_PIN 5
#define mySerial Serial1
void setup() {
  Serial.begin(115200);

  pinMode(RX_PIN, INPUT_PULLUP);
  mySerial.begin(115200, SERIAL_8N1, RX_PIN, TX_PIN);
}
void loop() {

  if (Serial.available()) {
    char c = Serial.read();
    mySerial.write(c);
    mySerial.flush();
  }

  if (mySerial.available()) {
    char c = mySerial.read();
    Serial.write(c);
    Serial.flush();
  }
}
