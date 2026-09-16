# IoT Based Home Automation System

An IoT-based home automation project using NodeMCU (ESP8266), Blynk, Arduino, and a 2-Channel Relay Module to remotely control home appliances such as lights and fans.

## 📌 Project Overview

This project demonstrates an IoT-based home automation system in which the ESP8266/NodeMCU provides Wi-Fi connectivity between the hardware system and the Blynk application.

The system allows electrical appliances such as lights and fans to be controlled remotely through the Blynk app using a 2-Channel Relay Module.

The project also includes a motion detection concept for detecting movement and generating notifications.

## 🎯 Objectives

- To develop a simple IoT-based home automation system.
- To control home appliances remotely using a mobile application.
- To use NodeMCU/ESP8266 for Wi-Fi communication.
- To control appliances using a 2-Channel Relay Module.
- To understand the integration of embedded systems with IoT.
- To provide a foundation for smart-home applications.

## 🧰 Hardware Components

| Component | Purpose |
|---|---|
| Arduino Uno | Main microcontroller/control unit |
| NodeMCU (ESP8266) | Wi-Fi and IoT communication |
| 2-Channel Relay Module | Switching appliances |
| Power Supply Board | Provides power to the circuit |
| Breadboard | Circuit prototyping |
| Jumper Wires | Electrical connections |
| LEDs | Indication/output |
| Resistors | Circuit protection/current limiting |
| Motion/Sensor Input | Motion detection and notification |

## 💻 Software and Platforms

- Arduino IDE
- Arduino C/C++
- Blynk
- ESP8266 Wi-Fi
- Blynk ESP8266 Library

## ⚙️ System Architecture

The basic working flow of the project is:

```text
        Mobile Phone
             │
             ▼
        Blynk App
             │
          Wi-Fi
             │
             ▼
      NodeMCU / ESP8266
             │
             ▼
     2-Channel Relay
        ┌────┴────┐
        ▼         ▼
      Light      Fan
