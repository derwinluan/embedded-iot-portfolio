# Smart Pet Door Actuator

> Embedded IoT Portfolio Demo | Sort 03 | Platform Level 01

## Portfolio Summary

Servo actuator demo (0–180°) with serial/JSON control — reference for pet doors, mini gates, valves, and curtain mechanisms.

This repository is part of an open-source **embedded + AWS cloud** demo series for overseas clients, Upwork proposals, and IT outsourcing collaborations. Firmware is production-oriented: clear structure, JSON telemetry, and a documented path to AWS IoT Core.

## What This Demo Proves

- PWM actuator control with safe angle limits
- Command/feedback pattern for mobile sliders
- Actuator firmware reusable in smart-home builds

## Outsourcing & Project Fit

- Smart curtain / pet door / latch prototypes
- Motorized mechanism firmware
- Remote control via gateway + AWS command topics

## Tech Stack

- Arduino UNO + SG90 micro servo
- C++ Arduino framework + Servo library
- PWM angle control 0–180°
- Serial JSON / `ANGLE` commands

## Development Environment

- Arduino IDE 2.x (Arduino Uno)
- SG90: signal pin 9, separate 5V supply recommended
- Serial Monitor @ 9600 baud

## Key Takeaways

- PWM servo control and safe angle clamping with `constrain()`.
- How actuator demos mirror smart-curtain / pet-door / valve use cases.
- Parsing simple serial commands as a stand-in for APP slider control.

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
- Product catalog sort: 03
