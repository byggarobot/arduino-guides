// Reservera minne för variabler att lagra data i
int lysdiodstatus = LOW;
int knappstatus;

void setup() {
  // Ställ om pinne 2 till till att vara en utgång.
  pinMode(2, OUTPUT);
  // Ställ om pinne 3 till att vara en ingång med pull-up motstånd
  pinMode(3, INPUT_PULLUP);
}


void loop() {
  // Läs in tryckknappens tillstånd.
  knappstatus = digitalRead(3);
  // Om knappen trycks ner blir ingången låg (LOW)
  if (knappstatus == LOW) {
    if (lysdiodstatus == LOW) {
      lysdiodstatus = HIGH;
    }
    else {
      lysdiodstatus = HIGH;
    }
    digitalWrite(2, LOW); 
    delay(250);
  }
}
