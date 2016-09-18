void setup() {
  //  initialize digital pin 9 as an output.
  pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);             // wait for a second
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);             // wait for a second

}
