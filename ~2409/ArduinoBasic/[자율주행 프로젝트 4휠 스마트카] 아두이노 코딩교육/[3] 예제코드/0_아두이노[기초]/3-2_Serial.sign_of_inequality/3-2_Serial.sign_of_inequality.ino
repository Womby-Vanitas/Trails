int a;
int b;

void setup() {
  Serial.begin(9600);
  a = 7;
  b = -5;

  Serial.println(a==b);
  Serial.println(a>b);
  Serial.println(a<b);
  Serial.println(a>0);
  Serial.println(a<0);

}

void loop() {

}
