# Desktop Proximity Radar

> Embedded IoT Portfolio Demo | Sort 02 | Platform Level 01

## Portfolio Summary

Ultrasonic proximity sensor firmware with JSON telemetry and local alerts — ideal for doorway, parking, and presence-detection products.

This repository is part of an open-source **embedded + AWS cloud** demo series for overseas clients, Upwork proposals, and IT outsourcing collaborations. Firmware is production-oriented: clear structure, JSON telemetry, and a documented path to AWS IoT Core.

## What This Demo Proves

- HC-SR04 integration and distance JSON over serial
- Threshold alerts (LED/buzzer) mirroring cloud SNS patterns
- Sensor-to-gateway data pipeline design

## Outsourcing & Project Fit

- Proximity / parking / access reminder devices
- Sensor node firmware outsourcing
- AWS telemetry + alert rule design

## Tech Stack

- Arduino UNO + HC-SR04 ultrasonic sensor
- C++ Arduino framework
- `pulseIn()` time-of-flight ranging
- JSON serial telemetry

## Development Environment

- Arduino IDE 2.x (Arduino Uno)
- HC-SR04 wired: VCC, GND, TRIG pin 9, ECHO pin 10
- Optional buzzer on pin 8, LED on pin 13
- Serial Monitor @ 9600 baud

## Key Takeaways

- How ultrasonic distance maps to real-world proximity alerts.
- Publishing structured JSON over serial so a gateway or PC can parse readings.
- Threshold-based local alerts (LED/buzzer) as a pattern for later SNS/cloud notifications.

## Repository Layout

| Path | Description |
|------|-------------|
| `firmware/` | Device source (Arduino / ESP32 / STM32) |
| `docs/TEST.md` | Bring-up and validation steps |
| `assets/` | Wiring diagrams and screenshots |

## Quick Start

1. Open `firmware/` in Arduino IDE or PlatformIO.
2. Flash the board and open Serial Monitor (see `docs/TEST.md`).
3. Extend with WiFi/MQTT/AWS using `config.h` where provided.

## Contact

- https://derwinluan.com/
- luandepinhk@gmail.com
- +852 4656 8918 (WhatsApp)

## References

- Platform doc: `01-IoT-Sensor-Starter-Kit`
- Product catalog sort: 02
