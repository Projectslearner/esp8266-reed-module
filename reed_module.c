/*
    Project name : ESP8266 Reed module
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-reed-module
*/

const int reedSwitchPin = D2; // GPIO pin connected to reed switch module
volatile bool isSwitchClosed = false; // Variable to track switch state

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(reedSwitchPin, INPUT_PULLUP); // Set reed switch pin as input with internal pull-up resistor
  attachInterrupt(digitalPinToInterrupt(reedSwitchPin), handleInterrupt, CHANGE); // Attach interrupt to reed switch pin
}

void loop() {
  // Main program loop, but we mainly use the interrupt for state changes
  delay(100);
}

void handleInterrupt() {
  // Interrupt service routine to handle state changes
  isSwitchClosed = digitalRead(reedSwitchPin) == LOW; // Read the state of the reed switch
  
  if (isSwitchClosed) {
    Serial.println("Reed switch closed");
  } else {
    Serial.println("Reed switch open");
  }
}
