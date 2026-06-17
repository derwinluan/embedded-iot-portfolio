# STM32 Status Tower Light

> Embedded IoT Portfolio Demo | Sort 07 | Platform Level 02

## Portfolio Summary

STM32 status tower light with multi-state LEDs and heartbeat telemetry — industrial HMI and machine-status indicator reference.

This repository is part of an open-source **embedded + AWS cloud** demo series for overseas clients, Upwork proposals, and IT outsourcing collaborations. Firmware is production-oriented: clear structure, JSON telemetry, and a documented path to AWS IoT Core.

## What This Demo Proves

- STM32 GPIO multi-state indicator logic
- Heartbeat JSON for fleet online/offline monitoring
- Industrial-style status coding (run/warn/fault patterns)

## Outsourcing & Project Fit

- Factory status light / Andon tower firmware
- STM32 outsourcing for control panels
- Edge device health reporting to AWS Shadow

## Tech Stack

- STM32F103C8T6 (Blue Pill class)
- Arduino STM32 core or STM32Cube + Arduino wrapper
- Multi-GPIO status LEDs (G/Y/R)
- Serial heartbeat telemetry

## Development Environment

- Arduino IDE with STM32 board package, or PlatformIO `ststm32`
- ST-Link or USB bootloader for flash
- Serial @ 115200 baud
- LEDs on PA1 / PA2 / PA3 (adjust to your board)

## Key Takeaways

- Running a multi-state indicator (tower light) with a simple phase state machine.
- STM32 GPIO vs UNO: same logic, different pin map and upload tool.
- Heartbeat JSON `{alive:1}` as an online/offline signal for fleet monitoring.

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
- Product catalog sort: 07
