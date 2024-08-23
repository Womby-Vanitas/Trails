int Analog_pin = A5;
int Led_pin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(Led_pin, OUTPUT);
}

void loop() {
  int val = analogRead(Analog_pin);
  val = map(val, 0, 1023, 0, 255);
  analogWrite(Led_pin, val);
}
