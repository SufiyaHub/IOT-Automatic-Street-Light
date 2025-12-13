# IOT-Automatic-Street-Light
<u><b>Overview</b></u>

This project implements an IoT-based Automatic Street Light System designed to reduce energy consumption and improve roadway visibility using real-time sensor data. It was developed by students from Methodist College of Engineering and Technology, Department of Computer Science and Engineering with Artificial Intelligence and Machine Learning.

# Core Functionality

The system uses an LDR sensor to detect ambient light levels and determine day or night. When the surroundings become dark, the system activates night mode. Five IR sensors monitor movement across different street sections. When motion is detected, the corresponding LED increases to full brightness; otherwise, the LED stays dim. During daytime, all lights automatically turn off.

<u><b>Hardware Components</b></u>

- Arduino microcontroller
- LDR light sensor
- IR motion sensors (5 units)
- PWM-controlled LED street lights
- Power supply and wiring

<u><b>Software Logic</b></u>

The system is programmed using Arduino C/C++. The microcontroller reads LDR values, compares them with a threshold, and switches between day and night modes. IR sensor readings adjust LED brightness. Each LED works independently, making the system flexible and customizable.

# Applications

- Smart street lighting
- IoT projects
- Energy-efficient lighting systems
- Smart city prototypes

# Impact

This project showcases how IoT and automation improve public infrastructure by reducing power wastage, improving safety, and enabling scalable intelligent lighting.

# Working Model

![WhatsApp Image 2025-12-13 at 5 49 53 PM](https://github.com/user-attachments/assets/6afc6846-6207-45e6-86ac-dcf7210b98bc)
