// Include the code library for controlling servos.
#include <Servo.h>

// Create a servo-object for controlling the servo motor.
Servo my_servo;

// Reserve memory for variables to store data in.
int value_in;
int angle;

void setup() {
  // Tell the servo object which output the servo is connected to.
  my_servo.attach(2);
  // Set pin A0 to be an input.
  pinMode(A0, INPUT);
}

void loop() {
  // Read the position of the potentiometer. This gives a value between 0 and 1023.
  value_in = analogRead(A0);
  // Scale the value so that it lies between 0 and 180.
  angle = map(value_in, 0, 1023, 0, 180);
  // Set the position of the servo.
  my_servo.write(angle);
  // Wait a bit for the servo to move to the corrected position.
  delay(15);
}
