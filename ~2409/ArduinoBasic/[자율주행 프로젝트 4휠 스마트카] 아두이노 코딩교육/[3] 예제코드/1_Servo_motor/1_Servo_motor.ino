#include <Servo.h>

Servo myservo;

void setup() {
  myservo.attach(2);
}

void loop() {
  myservo.write(0);
  delay(3000);
  myservo.write(90);
  delay(3000);
  myservo.write(180);
  delay(3000);
} 
