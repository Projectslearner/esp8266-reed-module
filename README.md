# ESP8266 Reed Switch Module Project

#### Project Overview
This project demonstrates how to use a reed switch module with an ESP8266 microcontroller. A reed switch is a magnetic sensor that activates in the presence of a magnetic field. When the switch state changes (open or closed), the ESP8266 detects it using an interrupt and prints the state to the Serial Monitor.

#### Components Needed
- **ESP8266 Microcontroller**
- **Reed Switch Module**
- **Jumper Wires**

#### Block diagram


#### Circuit Setup
1. **Connecting the Reed Switch Module to ESP8266:**
   - Connect one terminal of the reed switch module to GPIO pin D2 on the ESP8266.
   - Connect the other terminal of the reed switch module to ground (GND) on the ESP8266.
   - Use the internal pull-up resistor of the ESP8266 by setting the pin mode to `INPUT_PULLUP` for stable readings.

#### Instructions
1. **Setup:**
   - Initialize serial communication at a baud rate of 9600.
   - Set the reed switch pin as an input with the internal pull-up resistor enabled.
   - Attach an interrupt to the reed switch pin using `attachInterrupt()` function to monitor state changes.

2. **Operation:**
   - When the state of the reed switch changes (open or closed), the `handleInterrupt()` function is triggered.
   - Inside `handleInterrupt()`, read the state of the reed switch pin (`LOW` for closed, `HIGH` for open).
   - Print the current state ("Reed switch closed" or "Reed switch open") to the Serial Monitor.

#### Applications
- **Security Systems:** Detect opening/closing of doors or windows.
- **Automation:** Trigger actions based on the state of the reed switch.
- **Monitoring:** Monitor the status of devices or access points.

#### Notes
- **Interrupts:** Use interrupts to handle immediate state changes without polling continuously.
- **Pull-up Resistor:** Ensures the pin reads a stable state when the reed switch is open.
- **Serial Output:** Adjust the baud rate (`Serial.begin()`) as needed for optimal communication with the Serial Monitor.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 Reed Module](https://projectslearner.com/learn/esp8266-reed-module)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner