int led = 3;
int sw = 5;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(sw, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(sw) == LOW) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
