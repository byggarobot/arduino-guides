// Reservera minne för variabler att lagra data i
int varde_in;
int varde_ut;

void setup() {
  // Ställ om pinne 2 till till att vara en utgång.
  pinMode(2, OUTPUT);
  // Ställ om pinne A0 till att vara en ingång.
  pinMode(A0, INPUT);
}


void loop() {
  // Läs av vridmotståndets position. Detta ger ett värde mellan 0 och 1023.
  varde_in = analogRead(A0);
  // Skala om värdet så att det är mellan 0 och 255.
  varde_ut = map(varde_in, 0, 1023, 0, 255);
  // Sätt lysdiodens ljusstyrka.
  analogWrite(2, varde_ut);
}
