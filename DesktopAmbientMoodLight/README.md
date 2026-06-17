# Desktop Ambient Mood Light

> Embedded IoT Portfolio Demo | Sort 01 | Platform Level 01

## Portfolio Summary

Entry-level smart-light firmware: GPIO, PWM breathe, and serial command control — the foundation for cloud-connected lighting products.

This repository is part of an open-source **embedded + AWS cloud** demo series for overseas clients, Upwork proposals, and IT outsourcing collaborations. Firmware is production-oriented: clear structure, JSON telemetry, and a documented path to AWS IoT Core.

## What This Demo Proves

- Digital output and PWM patterns for real products (night lights, status indicators)
- Serial command interface ready for gateway or APP mapping
- Clean bring-up flow before adding WiFi/MQTT

## Outsourcing & Project Fit

- Smart LED / indicator hardware prototypes
- Arduino firmware for startups
- First milestone in IoT MVP engagements

## Tech Stack

- Arduino UNO R3 (ATmega328P)
- C++ Arduino framework
- GPIO, PWM (`analogWrite`)
- USB serial command interface

## Development Environment

- Arduino IDE 2.x (board: Arduino Uno)
- USB-A to USB-B cable
- Optional: external LED + 220 ohm resistor on pin 13
- Serial Monitor @ 9600 baud

## Key Takeaways

- Digital output basics: on/off, timed blink, and software PWM breathe patterns.
- How serial commands map to device states — the same pattern used later for APP/AWS switch DPs.
- That a single LED demo is enough to validate toolchain, wiring, and upload flow before moving to WiFi.

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
- Product catalog sort: 01
