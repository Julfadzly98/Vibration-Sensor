# ESP8266 Vibration Sensor Project

This project demonstrates how to use a vibration sensor with an ESP8266 board using the Arduino IDE. When vibration is detected, a message is printed to the Serial Monitor.

## 🛠 Components Used

- ESP8266 (e.g., NodeMCU or Wemos D1 Mini)
- Vibration Sensor (Digital Output)
- Jumper Wires
- Breadboard (optional)

## 🔌 Wiring

| Vibration Sensor Pin | Connects To        |
|----------------------|--------------------|
| VCC                  | 3.3V on ESP8266    |
| GND                  | GND on ESP8266     |
| OUT                  | D5 (GPIO14)        |

> **Note:** Double-check your ESP8266 board pin mapping to ensure `D5` corresponds to `GPIO14`.

## 💻 Arduino Code

```cpp
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

  delay(500);
}
