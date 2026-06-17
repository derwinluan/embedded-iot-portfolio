# Matter Environment Sensor

> Embedded IoT Portfolio Demo | Sort 16 | Platform Level 03

## Portfolio Summary

Matter environmental sensor demo with comfort metrics — home/office air quality monitoring and automation triggers.

This repository is part of an open-source **embedded + AWS cloud** demo series for overseas clients, Upwork proposals, and IT outsourcing collaborations. Firmware is production-oriented: clear structure, JSON telemetry, and a documented path to AWS IoT Core.

## What This Demo Proves

- Environmental JSON normalized for rules engines
- Matter sensor model + optional AWS dual publish
- Automation input design (HVAC, alerts, scenes)

## Outsourcing & Project Fit

- Environmental sensor products
- Matter certification support engagements
- Building comfort monitoring for B2B clients

## Tech Stack

- ESP32-C6 environmental sensor demo
- C++ ESP32 Arduino core
- Temp/humidity/comfort JSON
- Matter sensor clusters (production path) + AWS telemetry

## Development Environment

- ESP32-C6 board; optional DHT sensor
- Arduino IDE or PlatformIO
- Serial debug @ 115200, then MQTT per `config.h`

## Key Takeaways

- Environmental sensing as automation input (comfort, HVAC triggers).
- Dual publish pattern: ecosystem (Matter) + cloud analytics (AWS).
- Normalizing sensor readings into stable JSON fields for rules engines.

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
- Product catalog sort: 16
