#include <Servo.h>

Servo papaServo;

int GREEN_VLAD = 3;
int YELLOW_1_WILLARD = 4;
int RED_2_XERXES = 5;

int BUTTON_PIN = 2;
int DELAY = 50;

int SPEAKER_PIN_MAMA = 8;

int buttonState = 0;

void setup() {

  pinMode(GREEN_VLAD, OUTPUT);
  pinMode(YELLOW_1_WILLARD, OUTPUT);
  pinMode(RED_2_XERXES, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);

  papaServo.attach(SERVO_PIN_PAPA);

}

void loop() {
  buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == HIGH) {
    makeSound(349);
  }

  digitalWrite(GREEN_VLAD, HIGH);
  delay(DELAY);

  digitalWrite(GREEN_VLAD, LOW);

  delay(DELAY);

  if (buttonState == HIGH) {
    makeSound(330);
  }

  digitalWrite(YELLOW_1_WILLARD, HIGH);

  delay(DELAY);

  digitalWrite(YELLOW_1_WILLARD, LOW);

  delay(DELAY);

  if (buttonState == HIGH) {
    makeSound(294);
  }

  digitalWrite(RED_2_XERXES, HIGH);

  delay(DELAY);

  digitalWrite(RED_2_XERXES, LOW);

  delay(DELAY);

  if (buttonState == LOW) {
    noSound();
  }
}

void makeSound(int frequency) {
  tone(SPEAKER_PIN_MAMA, frequency);
}

void noSound() {
  noTone(SPEAKER_PIN_MAMA);
}