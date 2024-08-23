int a = 49;
int b = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    b = Serial.read();
    Serial.println(b);

    if (a == b) {
      Serial.println("Hello World");
    } else {
      Serial.println("Hello");
    }
  }
}
