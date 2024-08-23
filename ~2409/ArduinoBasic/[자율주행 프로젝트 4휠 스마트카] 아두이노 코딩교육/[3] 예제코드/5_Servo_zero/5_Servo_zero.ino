#include <Servo.h>  
Servo servo;

void setup() {
  servo.attach(2);  
  Serial.begin(9600);  
  servo.write(90); 
  delay(1000);
}

void loop() {
}
