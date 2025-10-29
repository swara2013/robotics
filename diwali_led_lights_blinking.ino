// Diwali LED Blink Patterns
// Two LEDs on pins 8 and 9

int led1 = 13;
int led2 = 12;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // Pattern 1: Alternating blink
  for (int i = 0; i < 6; i++) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(200);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    delay(200);
  }

  // Pattern 2: Both blink together (like fireworks)
  for (int i = 0; i < 5; i++) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(150);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(150);
  }

  // Pattern 3: Wavy twinkle (different speeds)
  for (int i = 0; i < 8; i++) {
    digitalWrite(led1, HIGH);
    delay(100);
    digitalWrite(led2, HIGH);
    delay(100);
    digitalWrite(led1, LOW);
    delay(100);
    digitalWrite(led2, LOW);
    delay(100);
  }

  // Pattern 4: Slow fade effect (if PWM pins used, e.g., 9 & 10)
  for (int brightness = 0; brightness <= 255; brightness += 5) {
    analogWrite(led1, brightness);
    analogWrite(led2, 255 - brightness);
    delay(30);
  }
  for (int brightness = 255; brightness >= 0; brightness -= 5) {
    analogWrite(led1, brightness);
    analogWrite(led2, 255 - brightness);
    delay(30);
  }

  // Small pause before repeating
  delay(500);
}

