void setup() {
  // Set pin 2 to be an output.
  pinMode(2, OUTPUT);
}

void loop() {
  // Increase the intensity of the LED from completely off to fully lit.
  for (int i = 0; i < 255; i++) {
    // Set the intensity of the LED.
    analogWrite(2, i);
    // Wait 10ms.
    delay(10);
  }
  // Decrease the intensity of the LED from fully lit to completely off.
  for (int i = 255; i > 0; i--) {
    // Set the intensity of the LED.
    analogWrite(2, i);
    // Wait 10ms.
    delay(10);
  } 
}
