void setup() {
  Serial.begin(9600);
  int i = 0;
  for(int i = 0; i < 10; i++){
    Serial.print("for i : ");
    Serial.print(i);
    Serial.println(", Hi EDI!");
  }
}

void loop() {

}
