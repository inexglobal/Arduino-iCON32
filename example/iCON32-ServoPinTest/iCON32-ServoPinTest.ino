int S7_pin = 7;
int S8_pin = 8;
int S9_pin = 9;
int S10_pin = 10;

void setup() {
  Serial.begin(115200);
  pinMode(S7_pin, OUTPUT);
  pinMode(S8_pin, OUTPUT);
  pinMode(S9_pin, OUTPUT);
  pinMode(S10_pin, OUTPUT);
}
void loop() {
 for(int i = 7 ;i< 11;i++){
  digitalWrite(i, 1);
  Serial.println(String(i)+"=>1");
  delay(500);
 }
  for(int i = 7 ;i< 11;i++){
  digitalWrite(i, 0);
  Serial.println(String(i)+"=>0");
  delay(500);
 }
}
