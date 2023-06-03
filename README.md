# SMART-INCUBATOR-WITH-HEART-RATE-MONITORING-SYSTEM
   In today's world, monitoring an infant’s health is becoming increasingly important. Continuous tracking of heart rate and the incubator’s temperature can provide vital information about the infant’s health status. Traditional methods of monitoring heart rate and temperature involve manual measurements, which are prone to errors and can be time-consuming. Moreover, in critical situations, such as during a medical emergency, the traditional methods may not provide accurate and real-time information. This creates a need for an automated system that can continuously monitor heart rate and room/incubator temperature accurately and in real-time.
   To address this need, we propose an IoT-based Heart Rate and Temperature Monitoring System that can continuously measure and transmit data to a central server for real-time monitoring. The system consists of a pulse sensor and a DHT11 sensor, which are connected to an IoT device, Node MCU. The IoT device is then connected to the internet, allowing the data to be transmitted to the central server for monitoring.


### TOOLS USED
•	HARDWARE: Breadboard, LED, Male-Female jumpers, Male-Male jumpers

•	SOFTWARE: Arduino IDE v.1.8.3, Blynk IOT mobile application

•	BOARD: Node MCU

•	SENSOR: Pulse sensor (HBT – V2), DHT11 sensor

### CIRCUIT
![circuit](https://github.com/Ahalyakrishnan/SMART-INCUBATOR-WITH-HEART-RATE-MONITORING-SYSTEM/assets/94754851/8798eab5-849d-4c77-9e92-2c3af67e0040)

### WORKING AND ITS OUTPUT
•	Connect the pulse sensor to the digital pin D4 <br>
•	Connect the DHT sensor to the analogue pin A0 <br>
•	Place the index finger in the knob

OUTPUT

BPM: 103; Temperature: 35.3 Celsius; Humidity: 91 - LED is in HIGH state (alert) <br>
BPM: 80; Temperature: 34.3 Celsius; Humidity: 60  LED is in LOW state (normal)

### SERIAL MONITOR
![monitor](https://github.com/Ahalyakrishnan/SMART-INCUBATOR-WITH-HEART-RATE-MONITORING-SYSTEM/assets/94754851/b29f95db-e810-4dec-9aae-cde84233ee8b)

### SERIAL PLOTTER
![plotter](https://github.com/Ahalyakrishnan/SMART-INCUBATOR-WITH-HEART-RATE-MONITORING-SYSTEM/assets/94754851/253f48c0-1a5d-4955-b867-3d1f94f884a7)

### BLYNK APP 
![blynk](https://github.com/Ahalyakrishnan/SMART-INCUBATOR-WITH-HEART-RATE-MONITORING-SYSTEM/assets/94754851/7076d872-e7d0-4f35-8564-f9cfe75959b5) <br>
![blynk1](https://github.com/Ahalyakrishnan/SMART-INCUBATOR-WITH-HEART-RATE-MONITORING-SYSTEM/assets/94754851/07f25c64-6d80-454c-9f8a-2d5267de6556)
