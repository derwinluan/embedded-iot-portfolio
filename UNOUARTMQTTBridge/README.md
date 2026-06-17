# UNO UART MQTT Bridge

> Embedded IoT Portfolio Demo | Sort 05 | Platform Level 01+03+10

## Portfolio Summary

UNO sensor node + ESP32 UART gateway — classic edge architecture for legacy MCUs connecting to AWS IoT Core.

This repository is part of an open-source **embedded + AWS cloud** demo series for overseas clients, Upwork proposals, and IT outsourcing collaborations. Firmware is production-oriented: clear structure, JSON telemetry, and a documented path to AWS IoT Core.

## What This Demo Proves

- Two-board UART JSON bridge (sensor MCU + WiFi gateway)
- Gateway wrapping pattern used in commercial IoT hubs
- Clear upgrade path: serial today, MQTT/AWS tomorrow

## Outsourcing & Project Fit

- Legacy MCU cloud enablement
- IoT gateway + sub-device architecture
- Upwork fixed-price gateway firmware packages

## Tech Stack

- Arduino UNO (sensor slave) + ESP32-C6 (UART gateway)
- C++ Arduino / ESP32 Arduino core
- Serial JSON protocol between boards
- UART2 bridge (RX 16 / TX 17 on ESP32)

## Development Environment

- Arduino IDE 2.x or PlatformIO
- Two boards: UNO + ESP32-C6
- Cross UART: UNO TX -> ESP32 RX, UNO RX -> ESP32 TX, common GND
- UNO @ 9600 baud, ESP32 USB serial @ 115200 baud
- `config.h` placeholders for WiFi/MQTT/AWS

## Key Takeaways

- First end-to-end edge path: sensor MCU + connectivity MCU.
- Why gateways wrap slave JSON instead of putting WiFi on every node.
- UART framing by newline-delimited JSON — reusable for AWS IoT telemetry topics.

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

- Platform doc: `01 / 03 / 10`
- Product catalog sort: 05
