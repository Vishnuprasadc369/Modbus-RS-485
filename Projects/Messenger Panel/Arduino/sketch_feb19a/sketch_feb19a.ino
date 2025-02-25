#define BUZZER_PIN 9  

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  tone(BUZZER_PIN, 1000); // Generate 1 kHz tone
  delay(1000);
  noTone(BUZZER_PIN);     // Stop tone
  delay(1000);
}