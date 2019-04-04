// Reserve memory for variables to store data in.
int value_in;
int value_out;

void setup() {
  // Set pin 2 to be an output.
  pinMode(2, OUTPUT);
  // Set pi A0 to be an input.
  pinMode(A0, INPUT);
}


void loop() {
  // Read the position of the potentiometer. This gives a value between 0 and 1023.
  value_in = analogRead(A0);
  // Scale the value so it's between 0 and 255.
  value_out = map(value_in, 0, 1023, 0, 255);
  // Set the intensity of the LED.
  analogWrite(2, value_out);
}
