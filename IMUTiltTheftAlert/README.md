# IMU Tilt Theft Alert

> Embedded IoT Portfolio Demo | Sort 19 | Platform Level 03/06

## Portfolio Summary

ESP32 IMU motion/tilt alert firmware — anti-theft tag, tamper detection, and fall/motion notification use cases.

This repository is part of an open-source **embedded + AWS cloud** demo series for overseas clients, Upwork proposals, and IT outsourcing collaborations. Firmware is production-oriented: clear structure, JSON telemetry, and a documented path to AWS IoT Core.

## What This Demo Proves

- IMU interrupt-driven event model
- Edge detect locally, notify via AWS SNS/Lambda
- Security and elder-care alert pipeline design

## Outsourcing & Project Fit

- Asset tamper / drawer alarm products
- Wearable or tag-style IoT devices
- Push notification integrations on AWS

## Tech Stack

- ESP32-C6 on-board IMU (demo serial simulation)
- C++ ESP32 Arduino core
- Motion/tilt event JSON
- AWS SNS alert path via MQTT rules

## Development Environment

- ESP32-C6-LCD-1.69 or C6 dev kit with IMU
- Arduino IDE ESP32 package
- Interrupt-driven IMU in production; serial demo for logic validation

## Key Takeaways

- IMU events (motion, tilt) as security and elder-care triggers.
- Edge detection locally, notification delivery via cloud (SNS/Lambda).
- Why theft/fall tags favor interrupts over polling loops.

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

- Platform doc: `03 / 06`
- Product catalog sort: 19
