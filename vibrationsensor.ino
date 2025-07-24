#define VIBRATION_PIN D5

void setup() {
  pinMode(VIBRATION_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  int vibration = digitalRead(VIBRATION_PIN);
  
  if (vibration == HIGH) {
    Serial.println("Vibration detected!");
  } else {
    Serial.println("No vibration.");
  }

  delay(500); // Delay to reduce serial output frequency
}
