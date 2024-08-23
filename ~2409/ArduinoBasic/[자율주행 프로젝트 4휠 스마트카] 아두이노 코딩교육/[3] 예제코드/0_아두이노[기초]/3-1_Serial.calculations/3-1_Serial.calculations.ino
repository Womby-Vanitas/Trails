int a;
int b;
int ab;

void setup() {
  Serial.begin(9600);
  a =7;
  b = -5;
  ab = a+b;

  Serial.println("ab");
    Serial.println(ab);
    Serial.println(a-b);
    Serial.println(a*b);
    Serial.println(a/b);
}

void loop() {
}
