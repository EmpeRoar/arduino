#include <Servo.h>

Servo papaServo;

int SERVO_PIN_PAPA = 9;

void setup() {
  papaServo.attach(SERVO_PIN_PAPA);
}

void loop() {

  // Smoothly move from 0° to 180°
  for (int angle = 0; angle <= 180; angle++) {
    turnPapaMotor(angle);
    delay(10);
  }

  delay(500);

  // Smoothly move from 180° back to 0°
  for (int angle = 180; angle >= 0; angle--) {
    turnPapaMotor(angle);
    delay(10);
  }

  delay(500);
}

void turnPapaMotor(int angle) {
  papaServo.write(angle);
}