int LED1 = 13;
int LED2 = 12;
int LED3 = 11;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

// Define the despacitoPattern function outside the loop function
void despacitoPattern() {
  // "Des-pa-cito" pattern
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED1, HIGH);
    delay(150);  // Short pulse for "Des"
    digitalWrite(LED1, LOW);
    delay(100);

    digitalWrite(LED2, HIGH);
    delay(150);  // Short pulse for "pa"
    digitalWrite(LED2, LOW);
    delay(100);

    digitalWrite(LED3, HIGH);
    delay(300);  // Longer pulse for "cito"
    digitalWrite(LED3, LOW);
    delay(300);
  }

  // "De-s-pa-ci-to" echo pattern
  digitalWrite(LED1, HIGH);
  delay(100);  // Quick pulse for "De"
  digitalWrite(LED1, LOW);
  delay(50);

  digitalWrite(LED2, HIGH);
  delay(100);  // Quick pulse for "s"
  digitalWrite(LED2, LOW);
  delay(50);

  digitalWrite(LED3, HIGH);
  delay(200);  // Slightly longer pulse for "pa"
  digitalWrite(LED3, LOW);
  delay(100);

  digitalWrite(LED1, HIGH);
  delay(100);  // Quick pulse for "ci"
  digitalWrite(LED1, LOW);
  delay(50);

  digitalWrite(LED2, HIGH);
  delay(100);  // Quick pulse for "to"
  digitalWrite(LED2, LOW);
  delay(50);

  // Short pause before repeating
  delay(500);
}

void loop() {
  // Your original pattern
  digitalWrite(LED1, HIGH);
  delay(200);
  digitalWrite(LED2, HIGH);
  delay(200);
  digitalWrite(LED3, HIGH);
  delay(200);
  digitalWrite(LED1, LOW);
  delay(300);
  digitalWrite(LED2, LOW);
  delay(300);
  digitalWrite(LED3, LOW);
  delay(300);

  // Additional "Despacito" pattern
  despacitoPattern();
}
