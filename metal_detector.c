/*
    Project name : Metal Detector
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-metal-detector
*/

const int coilPin = 2; // Digital pin connected to the metal detector coil
int metalDetected = 0; // Variable to store metal detection state

void setup() {
  pinMode(coilPin, INPUT); // Set the pin as input
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the state of the metal detector coil
  metalDetected = digitalRead(coilPin);

  // Check if metal is detected
  if (metalDetected == HIGH) {
    Serial.println("Metal Detected!");
  }

  delay(100); // Add a small delay to avoid spamming the Serial Monitor
}
