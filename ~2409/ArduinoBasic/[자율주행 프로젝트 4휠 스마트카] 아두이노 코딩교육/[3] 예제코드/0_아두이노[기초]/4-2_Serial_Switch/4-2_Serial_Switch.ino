void setup() {
  Serial.begin(9600);
  pinMode(5, INPUT_PULLUP);
}

void loop() {
  int button = digitalRead(5);

  Serial.println(button);
  delay(500);
}
