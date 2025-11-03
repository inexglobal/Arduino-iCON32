int S1_pin = 25;
int S2_pin = 26;

int RY1_pin = 23;
int RY2_pin = 24;

void setup() {
  pinMode(S1_pin, INPUT_PULLUP);
  pinMode(S2_pin, INPUT_PULLUP);
  pinMode(RY1_pin, OUTPUT);
  pinMode(RY2_pin, OUTPUT);
}

void loop() {
  int s1 = digitalRead(S1_pin);
  digitalWrite(RY1_pin, !s1);

  int s2 = digitalRead(S2_pin);
  digitalWrite(RY2_pin, !s2);
}
