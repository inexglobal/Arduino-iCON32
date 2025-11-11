#define PIN_SERVO_7 7         // Set GPIO7 to servo motor pin
#define PIN_SERVO_8 8         // Set GPIO8 to servo motor pin
#define PIN_SERVO_9 9         // Set GPIO9 to servo motor pin
#define PIN_SERVO_10 10       // Set GPIO10 to servo motor pin

#define MAX_RESOLUTION 16     // 16 Bbit = 0 - 65535
#define SERVO_FREQUENCY 50    // Servo motor's pulse frequency 50Hz
#define SERVO_MAX_ANGLE 180   // Max angle
#define SERVO_MIN_TICKS 1700  // Angle 0 degree
#define SERVO_MAX_TICKS 8000  // Angle SERVO_MAX_ANGLE degree

void setup() {
  // Set pin, frequency and resolution
  ledcAttach(PIN_SERVO_7, SERVO_FREQUENCY, MAX_RESOLUTION);
  ledcAttach(PIN_SERVO_8, SERVO_FREQUENCY, MAX_RESOLUTION);
  ledcAttach(PIN_SERVO_9, SERVO_FREQUENCY, MAX_RESOLUTION);
  ledcAttach(PIN_SERVO_10, SERVO_FREQUENCY, MAX_RESOLUTION);
}
void Servo(int8_t pin, uint32_t value) {
  ledcWrite(pin, map(value, 0, SERVO_MAX_ANGLE, SERVO_MIN_TICKS, SERVO_MAX_TICKS));
}
void loop() {
  Servo(PIN_SERVO_7, 0);    // Drive servo motor pin 7 to angle 0
  Servo(PIN_SERVO_8, 90);   // Drive servo motor pin 8 to angle 90
  Servo(PIN_SERVO_9, 135);  // Drive servo motor pin 9 to angle 135
  Servo(PIN_SERVO_10, 180); // Drive servo motor pin 10 to angle 180
}
