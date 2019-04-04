// Settings for motor signals. Determined by the motor shield so don't change!
const int dir_a = 12;
const int dir_b = 13;
const int pwm_a = 3;
const int pwm_b = 11;

// Function for setting the speed for both motors.
void speed(int v) {
  analogWrite(pwm_a, v);
  analogWrite(pwm_b, v);
}

// Function for driving forward.
void drive() {
  digitalWrite(dir_a, HIGH);
  digitalWrite(dir_b, HIGH);
}

// Function for backing up
void back_up() {
  digitalWrite(dir_a, LOW);
  digitalWrite(dir_b, LOW);
}

// Function for turning left.
void turn_left() {
  digitalWrite(dir_a, LOW);
  digitalWrite(dir_b, HIGH);
}

// Function for turning right 
void turn_right() {
  digitalWrite(dir_a, HIGH);
  digitalWrite(dir_b, LOW);
}

// Function for stopping
void stop() {
  speed(0);
}

// In setup we tell the controller which connections should be outputs.
void setup() {
  // Set all control pins to outputs.
  pinMode(dir_a, OUTPUT);
  pinMode(dir_b, OUTPUT);
  pinMode(pwm_a, OUTPUT);
  pinMode(pwm_b, OUTPUT);
}

// Loop runs a simple sequence where the robot drives forward, backwards and turns.
// This is where you put your own code to make the robot do more interesting things.
void loop(){
  // Drive forward for 5 seconds at full speed.
  speed(255);
  drive();
  delay(5000);
  // Back up for 2 seconds at a slower speed.
  speed(180);
  back_up();
  delay(2000);
  // Rotate left for 5 seconds.
  speed(255);
  turn_left();
  delay(5000);
  // Stop and wait for 4 seconds.
  stop();
  delay(4000);
}
