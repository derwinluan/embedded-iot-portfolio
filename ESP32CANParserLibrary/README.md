# ESP32 CAN Parser Library

> Embedded IoT Portfolio Demo | Sort 27 | Platform Level 05

## Portfolio Summary

ESP32 CAN frame parser library — vehicle, robot, and machinery signal extraction with JSON cloud upload.

This repository is part of an open-source **embedded + AWS cloud** demo series for overseas clients, Upwork proposals, and IT outsourcing collaborations. Firmware is production-oriented: clear structure, JSON telemetry, and a documented path to AWS IoT Core.

## What This Demo Proves

- CAN 2.0 frame struct + serializer library pattern
- Transport vs domain logic separation (DBC-ready)
- Industrial telematics JSON topic design

## Outsourcing & Project Fit

- CAN bus integration outsourcing
- Vehicle / AMR / machinery data loggers
- ESP32-S3-RS485-CAN gateway firmware projects

## Tech Stack

- ESP32-S3-RS485-CAN board class
- C++ (Arduino/ESP-IDF style)
- CAN 2.0 frame struct + JSON serializer
- Custom ID parsing library pattern

## Development Environment

- PlatformIO recommended for `main.cpp` builds
- ESP32-S3-RS485-CAN or compatible CAN transceiver setup
- Serial @ 115200 to inspect parsed frames

## Key Takeaways

- Parsing CAN frames into JSON for cloud and app consumption.
- Separating transport (CAN) from domain logic (ID mapping, DBC optional).
- Reusable library shape: `parseFrame()` -> string buffer -> MQTT topic.

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

- Platform doc: `05-Industrial-Data-Gateway`
- Product catalog sort: 27
