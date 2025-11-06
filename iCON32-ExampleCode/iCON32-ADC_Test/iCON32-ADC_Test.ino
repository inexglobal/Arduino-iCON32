int ADC0_pin = 1 ; 
int ADC5_pin = 6 ; 
void setup() {
 Serial.begin(115200);
}
void loop() {
  int adc0 = analogRead(ADC0_pin);
  int adc5 = analogRead(ADC5_pin);
  Serial.print("adc0:");
  Serial.print(adc0);
  Serial.print(",");
  Serial.print("adc5:");
  Serial.println(adc5);
  delay(100);
}
