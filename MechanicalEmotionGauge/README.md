# Mechanical Emotion Gauge

> Embedded IoT Portfolio Demo | Sort 08 | Platform Level 02

## Portfolio Summary

STM32 timer-PWM gauge / pointer instrument — maps numeric values to physical dial motion for dashboards and exhibits.

This repository is part of an open-source **embedded + AWS cloud** demo series for overseas clients, Upwork proposals, and IT outsourcing collaborations. Firmware is production-oriented: clear structure, JSON telemetry, and a documented path to AWS IoT Core.

## What This Demo Proves

- Hardware PWM on STM32 for smooth pointer control
- Serial setpoint interface for SCADA/MQTT upstream
- Visual HMI element for IoT dashboards

## Outsourcing & Project Fit

- Instrument cluster / exhibit dial builds
- STM32 PWM outsourcing
- Modbus/MQTT gauge nodes for industrial SaaS

## Tech Stack

- STM32F103 + SG90 servo
- Timer PWM via Servo library on STM32
- Serial angle setpoint
- Gauge / emotion pointer demo

## Development Environment

- Arduino STM32 core or PlatformIO
- ST-Link upload; servo signal on PA6
- Serial @ 115200 — send integer angle 0–180

## Key Takeaways

- Hardware timer PWM for smooth pointer motion vs bit-banged delays.
- Mapping a numeric value to a physical dial — useful for dashboards and exhibit builds.
- STM32 as a local actuator node upstream of RS485/MQTT gateways.

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
- Product catalog sort: 08
