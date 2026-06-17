# Matter Ambient Smart Light

> Embedded IoT Portfolio Demo | Sort 15 | Platform Level 03

## Portfolio Summary

Matter smart light reference with parallel AWS telemetry — cross-ecosystem home control plus fleet OTA/analytics.

This repository is part of an open-source **embedded + AWS cloud** demo series for overseas clients, Upwork proposals, and IT outsourcing collaborations. Firmware is production-oriented: clear structure, JSON telemetry, and a documented path to AWS IoT Core.

## What This Demo Proves

- Matter lighting cluster strategy (on/off, brightness)
- Dual path: home ecosystem + AWS operations layer
- Certification-minded firmware separation of concerns

## Outsourcing & Project Fit

- Matter device bring-up and consulting
- Smart lighting products for Apple/Google Home
- Parallel AWS fleet management for OEM clients

## Tech Stack

- ESP32-C6 Matter-capable stack (demo uses MQTT telemetry parallel path)
- C++ ESP32 Arduino core
- Light/on-off + brightness concept
- AWS OTA/telemetry hook via `config.h`

## Development Environment

- ESP32-C6 with Espressif Matter SDK (production) or this repo's serial/MQTT demo first
- Arduino IDE / idf.py depending on Matter branch
- Home apps (Apple/Google) for Matter; AWS for fleet telemetry

## Key Takeaways

- Matter as interoperability layer vs AWS as operations/OTA layer — they complement each other.
- Why lighting demos start with on/off + brightness before color scenes.
- Certification-minded firmware keeps local control working when cloud is offline.

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
- Product catalog sort: 15
