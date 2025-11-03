#define RX_PIN 4
#define TX_PIN 5
#define mySerial Serial1
void setup() {
  pinMode(RX_PIN, INPUT_PULLUP);
  mySerial.begin(115200, SERIAL_8N1, RX_PIN, TX_PIN);
}
void loop() {
  if (mySerial.available()) {
    char strMsg = mySerial.read();
    mySerial.write(strMsg);
    mySerial.flush();
  }
}
