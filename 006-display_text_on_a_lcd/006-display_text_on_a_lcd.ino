// Include the library for controlling ASCII-displays via I2C
#include <LiquidCrystal_PCF8574.h>

// Create object for controlling the display.
// Use I2C-address 0x27 (standard)
LiquidCrystal_PCF8574 display(0x27);

void setup() {
  // Start the display and specify the size - 16 characters in 2 lines.
  display.begin(16, 2);
  // Clear all old text (if any).
  display.clear();
  // Place the cursor in the upper left corner.
  display.home();
  // Turn on the backlight of the display and set it to max brightness.
  display.setBacklight(255);
  // Print text on the first line
  display.print("Countdown...");
}

void loop() {
  for (int i = 10; i > 0; i--) {
    // Move the cursor to the beginning of the second line (character 0, line 1)
    display.setCursor(0, 1);
    // Clear the line by writing 16 spaces.
    display.print("                ");
    // Move the cursor back to the beginning of the line.
    display.setCursor(0, 1);
    // Print the counter value
    display.print(i);
    // Wait one second
    delay(1000);
  }
  // Clear the display
  display.clear();
  // Set the cursor a small way into the first line (character 4, line 0)
  display.setCursor(4, 0);
  // Print out the final text.
  display.print("KA-BOOM!");
  // Halt the program
  while (1);
}
