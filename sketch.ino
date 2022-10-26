void setup() {
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
}

void loop() {
  int time = analogRead(A0);
  digitalWrite(13, HIGH);
  delay(time);
  digitalWrite(13, LOW);
  delay(time);

}
