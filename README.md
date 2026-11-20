🌱 Arduino Automatic Plant Watering System

Developed by Rajan Robotics
Vision to Reality

📌 Project Overview

The Arduino Automatic Plant Watering System is an electronics project designed to monitor soil moisture and automate plant watering.

A soil moisture sensor measures the moisture content in the soil and sends the readings to the Arduino Uno. Based on the moisture level, the system determines whether watering is required.

This project demonstrates analog sensor interfacing, decision-making using Arduino, and basic automation.

🎯 Objectives

- Monitor soil moisture continuously.
- Interface a soil moisture sensor with Arduino Uno.
- Read analog sensor values.
- Identify dry and wet soil conditions.
- Automate plant watering based on moisture levels.

🧰 Components Required

S.No.| Component| Quantity
1| Arduino Uno| 1
2| Soil Moisture Sensor| 1
3| 5V Relay Module (optional upgrade)| 1
4| Mini DC Water Pump (optional upgrade)| 1
5| Water tube| 1
6| Jumper Wires| As required
7| USB Cable| 1
8| External DC Supply (for pump upgrade)| 1

🔌 Circuit Connections

Soil Moisture Sensor – Arduino Uno

Sensor Pin| Arduino Pin
VCC| 5V
GND| GND
AO| A0

Optional Pump Control Upgrade

Relay Pin| Arduino Pin
IN| D7
VCC| 5V
GND| GND

The pump must use a suitable external DC power supply through the relay contacts. Do not power the pump directly from an Arduino GPIO pin.

⚙️ Working Principle

1. The soil moisture sensor is inserted into the soil.
2. The sensor measures the moisture level.
3. The analog output is connected to Arduino analog pin A0.
4. Arduino reads the sensor value using "analogRead()".
5. The measured value is compared with a predefined threshold.
6. The system identifies whether the soil is dry or sufficiently moist.

Automatic Watering Upgrade

When a relay and DC pump are added:

- Dry soil condition: Pump turns ON.
- Sufficiently moist soil condition: Pump turns OFF.

💻 Software Requirements

- Arduino IDE
- Arduino Uno board package
- USB cable

No external library is required for basic analog moisture monitoring.

✨ Features

- Real-time soil moisture monitoring.
- Analog sensor interfacing.
- Automatic dry/wet soil detection.
- Expandable to automatic irrigation.
- Beginner-friendly Arduino project.
- Low-cost educational implementation.

🏡 Applications

- Home gardening.
- Indoor plants.
- Small garden irrigation.
- Greenhouse automation.
- Smart agriculture demonstrations.

🚀 Future Improvements

- Add an LCD to display moisture readings.
- Add a relay-controlled water pump.
- Add ESP32 for Wi-Fi monitoring.
- Send mobile notifications.
- Monitor multiple plants using multiple sensors.
- Add a water-level sensor to monitor the storage tank.

📁 Repository Structure

Arduino-Automatic-Plant-Watering-System/
│
├── Code/
│   └── Plant_Watering_System.ino
│
├── Circuit/
│   └── circuit_diagram.png
│
├── Images/
│   └── working_prototype.jpg
│
├── Videos/
│   └── demo_video_link.txt
│
├── README.md
└── LICENSE

👨‍💻 Developed By

Rajan Robotics
Vision to Reality

Government Recognised Enterprise
UDYAM Registration: UDYAM-TN-27-0023934

Learn | Build | Innovate | Inspire

---

⭐ If you find this project useful, consider starring this repository!