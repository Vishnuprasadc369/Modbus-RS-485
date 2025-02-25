#define BUZZER_PIN 6  // Connect piezo buzzer to pin 8

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  // Sound the alarm in short bursts
  for (int i = 0; i < 5; i++) {  // Repeat ringing 5 times
    playTone(1000, 500);  // Play 1000Hz for 500ms
    delay(300);           // Pause for 300ms
  }

  delay(2000);  // Wait for 2 seconds before repeating the cycle
}

// Function to generate sound manually
void playTone(int frequency, int duration) {
  int delayTime = 1000000 / (frequency * 2);
  unsigned long endTime = millis() + duration;

  while (millis() < endTime) {
    digitalWrite(BUZZER_PIN, HIGH);
    delayMicroseconds(delayTime);
    digitalWrite(BUZZER_PIN, LOW);
    delayMicroseconds(delayTime);
  }
}
