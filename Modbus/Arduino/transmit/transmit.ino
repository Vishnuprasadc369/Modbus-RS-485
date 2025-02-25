#define DE_RE 5  // Define the DE & RE pin
#include <SoftwareSerial.h>

void setup() {
  pinMode(DE_RE, OUTPUT);
  digitalWrite(DE_RE, LOW);  // Start in receive mode
  Serial.begin(9600);
}

void loop() {
  digitalWrite(DE_RE, HIGH);  // Enable transmit mode
  Serial.write("Hello RS485\r\n");
  delay(500);
  digitalWrite(DE_RE, LOW);  // Enable receive mode
  delay(1000);
}
