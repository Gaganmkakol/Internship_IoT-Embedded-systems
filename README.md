# Internship_IoT-Embedded-systems
📌 Problem Statement
Traditional farming methods often lack real-time data, leading to:

Inefficient irrigation

Poor crop health

Reduced productivity

This project aims to solve these issues using a data-driven, IoT-based monitoring system.

🎯 Objective
To build an IoT system that continuously monitors soil moisture, temperature, and humidity, and displays real-time data on a mobile app using NodeMCU ESP8266 and the Blynk IoT platform.

🧰 Hardware Requirements
🧠 NodeMCU ESP8266 (Wi-Fi enabled microcontroller)

🌱 Soil Moisture Sensor

🌡️ DHT11 Sensor (for Temperature and Humidity)

🧵 Jumper wires

⛁ Breadboard

📶 Wi-Fi access

📱 Software Requirements
Arduino IDE (with ESP8266 board installed)

Blynk App (or any IoT dashboard for real-time data visualization)

Blynk Auth Token (generated in the mobile app)

⚙️ How It Works
Sensors collect environmental data from the field.

NodeMCU reads the sensor values and sends them over Wi-Fi.

Real-time data is pushed to the Blynk mobile app dashboard.

Farmers can monitor the field remotely and make informed decisions on irrigation.

🚀 Expected Outcome
Live monitoring of:

🌱 Soil Moisture

🌡️ Temperature

💧 Humidity

Helps optimize irrigation and improve crop yield.

A low-cost, scalable prototype for smart agriculture.

🔌 Circuit Overview
Soil moisture sensor → A0 (Analog input)

DHT11 sensor → Digital pin D2

NodeMCU connected via USB to power/data

Wi-Fi credentials and Blynk token configured in code

📸 Screenshots (Add these if available)
Circuit diagram

Blynk dashboard screenshot

Output from Serial Monitor

✅ Future Improvements
Add relay control for automatic irrigation

Integrate rain sensors or light sensors

Use advanced sensors like capacitive soil sensors

Solar power the system for remote locations

