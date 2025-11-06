int S1_pin = 25;
int S2_pin = 26;

int RY1_pin = 23;
int RY2_pin = 24;

int RY1_State = LOW; // สถานะปัจจุบันของรีเลย์: LOW=ปิด, HIGH=เปิด
int RY2_State = LOW; // สถานะปัจจุบันของรีเลย์: LOW=ปิด, HIGH=เปิด
void setup() {
  pinMode(S1_pin, INPUT_PULLUP);
  pinMode(S2_pin, INPUT_PULLUP);
  pinMode(RY1_pin, OUTPUT);
  pinMode(RY2_pin, OUTPUT);
  digitalWrite(RY1_pin, RY1_State);
  digitalWrite(RY2_pin, RY2_State);
}
void loop() {

  if(digitalRead(S1_pin)==LOW){
    RY1_State = !RY1_State;
    digitalWrite(RY1_pin, RY1_State);
    delay(250);
  }

  if(digitalRead(S2_pin)==LOW){
    RY2_State = !RY2_State;
    digitalWrite(RY2_pin, RY2_State);
    delay(250);
  }
}
