int Analog_pin = A5;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(Analog_pin);
  Serial.println(val);
}
