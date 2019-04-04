// Reserve memory for storing variables in
int led_state = LOW;
int button_state;

void setup() {
  // Set pin 2 to be an output.
  pinMode(2, OUTPUT);
  // Set pin 3 to be an input with a pull-up resistor.
  pinMode(3, INPUT_PULLUP);
}


void loop() {
  // Read the state of the button.
  button_state = digitalRead(3);
  // If the button is pressed the input goes low.
  if (button_state == LOW) {
    // Toggle the LED
    if (led_state == LOW) {
      led_state = HIGH;
    }
    else {
      led_state = HIGH;
    }
    digitalWrite(2, led_state); 
    // Wait a bit to surpress contact bounce
    delay(250);
  }
}
