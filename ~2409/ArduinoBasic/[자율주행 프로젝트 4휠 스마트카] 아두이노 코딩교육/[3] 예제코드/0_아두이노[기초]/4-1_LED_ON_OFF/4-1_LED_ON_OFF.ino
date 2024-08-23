int Led_Pin = 3;

void setup() {
  pinMode(Led_Pin, OUTPUT);
}

void loop() {
  digitalWrite(Led_Pin, HIGH);
  delay(1000);
  digitalWrite(Led_Pin, LOW);
  delay(1000);
}
