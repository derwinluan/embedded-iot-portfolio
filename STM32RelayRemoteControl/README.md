# STM32 Relay Remote Control

> Embedded IoT Portfolio Demo | Sort 09 | Platform Level 02

## Portfolio Summary

STM32 relay control firmware with serial ON/OFF and JSON state — smart socket and load-switch prototype (low-voltage demo).

This repository is part of an open-source **embedded + AWS cloud** demo series for overseas clients, Upwork proposals, and IT outsourcing collaborations. Firmware is production-oriented: clear structure, JSON telemetry, and a documented path to AWS IoT Core.

## What This Demo Proves

- Isolated relay drive patterns and state echo
- Switch DP model aligned with AWS IoT Shadow
- Safety-conscious GPIO control before mains designs

## Outsourcing & Project Fit

- Smart plug / relay module firmware
- Remote load switching prototypes
- Industrial IO outsourcing (engineer-reviewed for production loads)

## Tech Stack

- STM32F103 + 5V relay module
- GPIO digital output (PA4)
- Serial ON/OFF commands
- JSON relay state reporting

## Development Environment

- Arduino STM32 core; relay IN to PA4, separate 5V for relay coil
- **Low-voltage loads only** in this demo (LED, fan, lamp module)
- Serial @ 115200 baud

## Key Takeaways

- Safe relay control patterns: explicit ON/OFF commands and state echo.
- Why isolation matters before switching mains-powered loads.
- Direct mapping to smart-plug / socket DP models on AWS IoT Shadow.

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

- Platform doc: `02-Industrial-Controller-Starter`
- Product catalog sort: 09
