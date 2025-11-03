#define PIN_SERVO_7 7         // ขาต่อใช้งาน
#define PIN_SERVO_8 8         // ขาต่อใช้งาน
#define PIN_SERVO_9 9         // ขาต่อใช้งาน
#define PIN_SERVO_10 10       // ขาต่อใช้งาน

#define MAX_RESOLUTION 16     // 16 Bbit = 0 - 65535
#define SERVO_FREQUENCY 50    // ความถี่ 50 Hz
#define SERVO_MAX_ANGLE 270   // องศาสูงสุด
#define SERVO_MIN_TICKS 1700  // ที่ 0 องศา
#define SERVO_MAX_TICKS 8000  // ที่ 270 องศา

void setup() {
  // กำหนดขา,ความถี่,ความละเอียด
  ledcAttach(PIN_SERVO_7, SERVO_FREQUENCY, MAX_RESOLUTION);
  ledcAttach(PIN_SERVO_8, SERVO_FREQUENCY, MAX_RESOLUTION);
  ledcAttach(PIN_SERVO_9, SERVO_FREQUENCY, MAX_RESOLUTION);
  ledcAttach(PIN_SERVO_10, SERVO_FREQUENCY, MAX_RESOLUTION);
}
void Servo(int8_t pin, uint32_t value) {
  ledcWrite(pin, map(value, 0, SERVO_MAX_ANGLE, SERVO_MIN_TICKS, SERVO_MAX_TICKS));
}
void loop() {
  Servo(PIN_SERVO_7, 0);
  Servo(PIN_SERVO_8, 90);
  Servo(PIN_SERVO_9, 135);
  Servo(PIN_SERVO_10, 270);
}
