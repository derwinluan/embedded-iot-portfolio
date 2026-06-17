# Desktop Scene Switch

> Embedded IoT Portfolio Demo | Sort 04 | Platform Level 01

## Portfolio Summary

Debounced button + LED scene switch — models wireless switches, desk shortcuts, and local/remote co-control logic.

This repository is part of an open-source **embedded + AWS cloud** demo series for overseas clients, Upwork proposals, and IT outsourcing collaborations. Firmware is production-oriented: clear structure, JSON telemetry, and a documented path to AWS IoT Core.

## What This Demo Proves

- Input debouncing and toggle state machines
- JSON state reporting for device shadow sync
- Foundation for scene panels and game/accessory buttons

## Outsourcing & Project Fit

- Smart switch / scene key firmware
- Human-interface device (HID) prototypes
- Edge input nodes for automation systems

## Tech Stack

- Arduino UNO + tactile button + LED
- C++ Arduino framework
- Input pull-up, debounce, toggle logic
- Serial state reporting

## Development Environment

- Arduino IDE 2.x (Arduino Uno)
- Button on pin 2 (INPUT_PULLUP), LED on pin 13
- Breadboard + jumper wires from starter kit
- Serial Monitor @ 9600 baud

## Key Takeaways

- Debouncing mechanical inputs before trusting button events.
- Linking input events to outputs — foundation for scene switches and game buttons.
- Reporting `{btn, led}` JSON as a minimal device shadow pattern.

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

- Platform doc: `01-IoT-Sensor-Starter-Kit`
- Product catalog sort: 04
