void setup() {
  Serial.begin(9600);
  int i = 0;
  while(i < 10){
    Serial.print("While i : ");
    Serial.print(i);
    Serial.println("Hi EDI!");
    i++;

  }
}

void loop() {

}
