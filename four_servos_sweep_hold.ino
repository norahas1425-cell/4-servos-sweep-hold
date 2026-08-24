#include <Servo.h>

// ===== إعداد الـ 4 سيرفو موتورز =====
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;


const int servo1Pin = 3;
const int servo2Pin = 5;
const int servo3Pin = 6;
const int servo4Pin = 9;

void setup() {
  // ربط كل سيرفو بالبن الخاص فيه
  servo1.attach(servo1Pin);
  servo2.attach(servo2Pin);
  servo3.attach(servo3Pin);
  servo4.attach(servo4Pin);

  // ===== الحركة الأولى: Sweep لمدة ثانيتين =====
  unsigned long startTime = millis();

  while (millis() - startTime < 2000) {
    // يمين: من 0 إلى 180
    for (int pos = 0; pos <= 180; pos++) {
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      delay(5);
      if (millis() - startTime >= 2000) break;
    }

    // يسار: من 180 إلى 0
    for (int pos = 180; pos >= 0; pos--) {
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      delay(5);
      if (millis() - startTime >= 2000) break;
    }
  }

  // ===== الحركة الثانية: تثبيت عند 90 درجة =====
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
}

void loop() {

}
