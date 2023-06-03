# SMART-INCUBATOR-WITH-HEART-RATE-MONITORING-SYSTEM
   In today's world, monitoring an infant’s health is becoming increasingly important. Continuous tracking of heart rate and the incubator’s temperature can provide vital information about the infant’s health status. Traditional methods of monitoring heart rate and temperature involve manual measurements, which are prone to errors and can be time-consuming. Moreover, in critical situations, such as during a medical emergency, the traditional methods may not provide accurate and real-time information. This creates a need for an automated system that can continuously monitor heart rate and room/incubator temperature accurately and in real-time.
   To address this need, we propose an IoT-based Heart Rate and Temperature Monitoring System that can continuously measure and transmit data to a central server for real-time monitoring. The system consists of a pulse sensor and a DHT11 sensor, which are connected to an IoT device, Node MCU. The IoT device is then connected to the internet, allowing the data to be transmitted to the central server for monitoring.


### TOOLS USED
•	HARDWARE: Breadboard, LED, Male-Female jumpers, Male-Male jumpers

•	SOFTWARE: Arduino IDE v.1.8.3, Blynk IOT mobile application

•	BOARD: Node MCU

•	SENSOR: Pulse sensor (HBT – V2), DHT11 sensor

### CIRCUIT
<img src="/Asset/circuit.jpg" alt="cicruit"/>

### WORKING AND ITS OUTPUT
•	Connect the pulse sensor to the digital pin D4 <br>
•	Connect the DHT sensor to the analogue pin A0 <br>
•	Place the index finger in the knob

OUTPUT

BPM: 103; Temperature: 35.3 Celsius; Humidity: 91 - LED is in HIGH state (alert) <br>
BPM: 80; Temperature: 34.3 Celsius; Humidity: 60  LED is in LOW state (normal)

### SERIAL MONITOR
<img src="/Asset/monitor.jpg" alt="monitor"/>

### SERIAL PLOTTER
<img src="/Asset/plotter.jpg" alt="plotter"/>

### BLYNK APP 
<img src="/Asset/blynk.png" alt="blynk"/><br>
<img src="/Asset/blynk1.png" alt="blynk1"/>
