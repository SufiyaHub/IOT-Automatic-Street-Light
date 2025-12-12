# IOT-Automatic-Street-Light
Overview

This project implements an IoT-based Automatic Street Light System designed to reduce energy consumption and improve roadway visibility using real-time sensor data. It was developed by a team of three students from Methodist College of Engineering and Technology, Department of Computer Science and Engineering with Artificial Intelligence and Machine Learning. The system automates street lighting based on environmental conditions and motion detection.

Core Functionality

The system uses an LDR sensor to detect ambient light levels and determine day or night. When the surroundings become dark, the system activates night mode. Five IR sensors monitor movement across different street sections. When motion is detected, the corresponding LED increases to full brightness; otherwise, the LED remains dim to conserve power. During daytime, all lights automatically remain off. This results in efficient energy usage and enhanced safety without requiring manual operation.

Hardware Components

Arduino microcontroller

LDR light sensor

IR motion sensors (5 units)

PWM-controlled LED street lights

Power supply and wiring

These components enable smooth brightness control using Arduino’s PWM pins and allow compatibility with both active-HIGH and active-LOW IR modules.

Software Logic

The system is programmed in Arduino C/C++. The microcontroller reads LDR values, compares them with a threshold, and switches between day and night modes. IR sensor readings determine LED intensity. Each LED operates independently, making the system adaptable to different street layouts. Thresholds, brightness levels, and sensor configurations can be easily adjusted in the code.

Applications

Smart street lighting

College IoT/AI-ML mini-projects

Energy-efficient lighting prototypes

Intelligent transportation systems

Smart city research applications

Impact

This project demonstrates how IoT and automation can improve public infrastructure by reducing electricity wastage, increasing safety, and enabling scalable smart-lighting systems. It offers a practical example of how simple sensors and microcontroller logic can form a reliable real-world solution.
