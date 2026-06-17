# ESP32 Smart Plug MQTT

> Embedded IoT Portfolio Demo | Sort 14 | Platform Level 03

## Portfolio Summary

ESP32 smart plug / relay MQTT demo — remote switch, countdown-off, and AWS Shadow switch DP pattern.

This repository is part of an open-source **embedded + AWS cloud** demo series for overseas clients, Upwork proposals, and IT outsourcing collaborations. Firmware is production-oriented: clear structure, JSON telemetry, and a documented path to AWS IoT Core.

## What This Demo Proves

- Binary relay state as standard IoT switch datapoint
- ESP32 as combined edge + connectivity module
- Mobile-app-ready MQTT/Shadow integration hooks

## Outsourcing & Project Fit

- Smart socket / aroma diffuser / lamp control
- ESP32 MQTT firmware outsourcing
- AWS Cognito + IoT Shadow consumer app backends

## Tech Stack

- ESP32-C6 + 5V relay module
- C++ ESP32 Arduino core
- MQTT-ready switch DP pattern
- AWS IoT Core via `config.h`

## Development Environment

- ESP32-C6 board + relay module (low-voltage demo load)
- Arduino IDE or PlatformIO with ESP32 toolchain
- Fill WiFi/MQTT broker fields in `firmware/config.h`

## Key Takeaways

- Modeling a smart socket as a binary relay state + cloud shadow.
- ESP32 as both edge controller and WiFi endpoint.
- Foundation for countdown-off and scene-linked automations on AWS Rules.

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

- Platform doc: `03-Smart-Device-Reference`
- Product catalog sort: 14
