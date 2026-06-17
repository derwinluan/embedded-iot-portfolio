# ESP32 Weather Station MQTT

> Embedded IoT Portfolio Demo | Sort 12 | Platform Level 03/06

## Portfolio Summary

ESP32-C6 weather/comfort station with WiFi telemetry — desk display + cloud time-series ready for AWS Timestream.

This repository is part of an open-source **embedded + AWS cloud** demo series for overseas clients, Upwork proposals, and IT outsourcing collaborations. Firmware is production-oriented: clear structure, JSON telemetry, and a documented path to AWS IoT Core.

## What This Demo Proves

- Direct ESP32 WiFi telemetry (no separate gateway required)
- Temp/humidity JSON suitable for Timestream ingestion
- Local LCD + cloud dual-display architecture

## Outsourcing & Project Fit

- Environmental monitoring hardware
- ESP32 firmware + AWS IoT Core integration
- Comfort/HVAC hinting products for offices and homes

## Tech Stack

- ESP32-C6-LCD-1.69
- C++ ESP32 Arduino core
- Simulated temp/humidity telemetry (DHT optional)
- `config.h` for WiFi / MQTT / AWS IoT Core

## Development Environment

- Arduino IDE ESP32 board package (C6 support) or PlatformIO `espressif32`
- USB-C cable; optional DHT11/22 on chosen GPIO
- Serial @ 115200 for local debug before cloud attach

## Key Takeaways

- ESP32 can publish telemetry without an external gateway.
- Comfort metrics (temp/humi) as Timestream-ready time series.
- How `config.h` separates credentials from application logic.

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
- Product catalog sort: 12
