void setup() {
  // Set pin 2 to be an output.
  pinMode(2, OUTPUT);
}

void loop() {
  // Turn the LED on.
  digitalWrite(2, HIGH);
  // Wait half a second (500ms).
  delay(500);
  // Turn the LED off.
  digitalWrite(2, LOW);
  // Wait another half a second before the program restarts.
  delay(500);
}

