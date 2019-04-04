// Settings for which pins the LEDs are connected to.
const int led_pin_1 = 2;
const int led_pin_2 = 3;
const int led_pin_3 = 4;

// Blinking speed for the LEDs in milliseconds.
const int blink_time_1 = 500;
const int blink_time_2 = 400;
const int blink_time_3 = 150;

// State variables for the LEDs.
// These keeps track of whether the LEDs are on or off.
int led_1 = LOW;
int led_2 = LOW;
int led_3 = LOW;

// Timer-variables for the LEDs.
// These keep track of when it's time to change the state of each LED.
double led_timer_1;
double led_timer_2;
double led_timer_3;

// Function for turning LED 1 on or off.
void blink_1() {
  if (led_1 == LOW) {
    led_1 = HIGH;
  }
  else {
    led_1 = LOW;
  }
  digitalWrite(led_pin_1, led_1);
}

// Function for turning LED 2 on or off. 
void blink_2() {
  if (led_2 == LOW) {
    led_2 = HIGH;
  }
  else {
    led_2 = LOW;
  }
  digitalWrite(led_pin_2, led_2);
}

// Function for turning LED 3 on or off. 
void blink_3() {
  if (led_3 == LOW) {
    led_3 = HIGH;
  }
  else {
    led_3 = LOW;
  }
  digitalWrite(led_pin_3, led_3);
}

// Setup makes sure the pins that the LEDs are connected to are set as outputs.
void setup() {
  pinMode(led_pin_1, OUTPUT);
  pinMode(led_pin_2, OUTPUT);
  pinMode(led_pin_3, OUTPUT);
}

// Loop will be run through over and over again as fast as possible.
// If a function takes too long to finish it will prevent the other functions from
// running when they should.
void loop() {
  // Get the current time. This value is the number of milliseconds since
  // the Arduino board was powered on or since the last reset.
  double current_time = millis();
  // Check if it's time to change state of LED 1.
  if (current_time > led_timer_1) {
    blink_1();
    // Update the timer value for the next event
    led_timer_1 = current_time + blink_time_1;
  }
  // Check if it's time to change state of LED 2. 
  if (current_time > led_timer_2) {
    blink_2();
    // Update the timer value for the next event 
    led_timer_2 = current_time + blink_time_2;
  }
  // Check if it's time to change state of LED 3. 
  if (current_time > led_timer_3) {
    blink_3();
    // Update the timer value for the next event 
    led_timer_3 = current_time + blink_time_3;
  }
}
