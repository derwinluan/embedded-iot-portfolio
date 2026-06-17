# Serial Servo Actuator

> Embedded IoT Portfolio Demo | Sort 06 | Platform Level 01+04+10

## Portfolio Summary

Cloud-driven servo actuator over serial gateway — demonstrates remote angle control for curtains, feeders, and industrial mini actuators.

This repository is part of an open-source **embedded + AWS cloud** demo series for overseas clients, Upwork proposals, and IT outsourcing collaborations. Firmware is production-oriented: clear structure, JSON telemetry, and a documented path to AWS IoT Core.

## What This Demo Proves

- Command path: cloud/app -> gateway -> UNO -> PWM
- Angle setpoint + feedback JSON loop
- Scalable to AWS Jobs batch configuration

## Outsourcing & Project Fit

- Remote actuator projects on Upwork
- Smart curtain / feeder / damper control
- STM32/UNO slave + ESP32 gateway engagements

## Tech Stack

- Arduino UNO + SG90 servo
- C++ Arduino framework + Servo library
- Serial angle setpoint execution
- JSON feedback loop

## Development Environment

- Arduino IDE 2.x (Arduino Uno)
- SG90 on pin 9; stable 5V for servo under load
- Serial Monitor @ 9600 — send `{{"angle":90}}` or `ANGLE 90`

## Key Takeaways

- Separating command (target angle) from feedback (current angle JSON).
- How the same firmware pattern scales to APP curtain control and AWS Jobs default positions.
- Actuator safety: always clamp commands before writing hardware.

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

- Platform doc: `01 / 04 / 10`
- Product catalog sort: 06
