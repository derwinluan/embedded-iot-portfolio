# Embedded IoT Portfolio — GitHub Demos

Open-source firmware demos showcasing **Arduino / STM32 / ESP32** edge development with a clear path to **AWS IoT Core**. Built for IT  collaborations.

## Demo Index

| Project | Folder | Contents |
|---------|--------|----------|
| [Desktop Ambient Mood Light](./DesktopAmbientMoodLight/) | `DesktopAmbientMoodLight` | Portfolio README + firmware |
| [Desktop Proximity Radar](./DesktopProximityRadar/) | `DesktopProximityRadar` | Portfolio README + firmware |
| [Smart Pet Door Actuator](./SmartPetDoorActuator/) | `SmartPetDoorActuator` | Portfolio README + firmware |
| [Desktop Scene Switch](./DesktopSceneSwitch/) | `DesktopSceneSwitch` | Portfolio README + firmware |
| [UNO UART MQTT Bridge](./UNOUARTMQTTBridge/) | `UNOUARTMQTTBridge` | Portfolio README + firmware |
| [Serial Servo Actuator](./SerialServoActuator/) | `SerialServoActuator` | Portfolio README + firmware |
| [STM32 Status Tower Light](./STM32StatusTowerLight/) | `STM32StatusTowerLight` | Portfolio README + firmware |
| [Mechanical Emotion Gauge](./MechanicalEmotionGauge/) | `MechanicalEmotionGauge` | Portfolio README + firmware |
| [STM32 Relay Remote Control](./STM32RelayRemoteControl/) | `STM32RelayRemoteControl` | Portfolio README + firmware |
| [ESP32 Weather Station MQTT](./ESP32WeatherStationMQTT/) | `ESP32WeatherStationMQTT` | Portfolio README + firmware |
| [ESP32 Smart Plug MQTT](./ESP32SmartPlugMQTT/) | `ESP32SmartPlugMQTT` | Portfolio README + firmware |
| [Matter Ambient Smart Light](./MatterAmbientSmartLight/) | `MatterAmbientSmartLight` | Portfolio README + firmware |
| [Matter Environment Sensor](./MatterEnvironmentSensor/) | `MatterEnvironmentSensor` | Portfolio README + firmware |
| [IMU Tilt Theft Alert](./IMUTiltTheftAlert/) | `IMUTiltTheftAlert` | Portfolio README + firmware |
| [ESP32 CAN Parser Library](./ESP32CANParserLibrary/) | `ESP32CANParserLibrary` | Portfolio README + firmware |

## Services Highlighted

- Embedded firmware (Arduino, STM32, ESP32)
- UART / MQTT / CAN / Matter device patterns
- IoT gateway and serial bridge architecture
- AWS IoT Core telemetry, Shadow, SNS, and OTA concepts
- Documented bring-up, test guides, and portfolio-ready README per project
# 🚀 Driven LED Screen Based on Raspberry Pi 4B

This repository provides a comprehensive, step-by-step technical guide to lighting up a **64x64 RGB LED matrix** from scratch using a **Raspberry Pi 4B**, including hardware wiring, system configuration, environment compilation, and creative GIF animations.

---

## 🛠️ 一、 Device Preparation

| Hardware Component | Description | Visual Reference |
| :--- | :--- | :--- |
| **Raspberry Pi 4B** | Main controller for managing the LED matrix GPIO timings. | 📷 ![RaspberryPi_01](https://githubusercontent.com)
 |
| **64×64 LED Screen** | HUB75 interface RGB LED matrix panel. | 📷 *[Insert your LED screen image here]* |
| **HDMI External Display** | Used for the initial setup of the Raspberry Pi OS. | 📷 *[Insert your monitor image here]* |
| **Peripherals** | USB Mouse & Keyboard for configuration. | - |

---

## ⚙️ 二、 Preparations

### 1. 🔌 Hardware Wiring
Connect the Raspberry Pi 4B GPIO pins to the HUB75 interface on the LED screen. 

> 💡 **Critical Instruction:** Just Connect Lines with Smiley Faces! 😊
> Make sure to double-check each pin definition to avoid frying the logic chips.

### 2. 💾 Raspberry Pi OS Flashing
1. Visit the official software page: [Raspberry Pi Imager](https://www.raspberrypi.com/software/).
2. Download and install the Imager tool.
3. Insert your MicroSD card, select **Raspberry Pi OS (64-bit)**, and click **Burn**.

### 3. 🖥️ Initial Boot & Setup
* Power on the Raspberry Pi and connect it to your external HDMI display.
* Configure the initial username and password (e.g., Default Password: `123456`).
* Connect to your local Wi-Fi network.

---

## 🏃‍♂️ 三、 Specific Steps

### 1. 📥 Clone the Source Repository
Open your terminal, create a project workspace, and clone the authoritative open-source LED matrix library:

```bash
# Create and navigate to your workspace
mkdir -p /home/project && cd /home/project

# Clone the repository
git clone https://github.com/hzeller/rpi-rgb-led-matrix.git
cd rpi-rgb-led-matrix
```
*Current working directory layout should be:* `./home/project/rpi-rgb-led-matrix`

---

### 2. 🔇 System Optimization: Disable Onboard Audio
The built-in audio subsystem conflicts with the precise hardware PWM timings needed for the LED matrix.

#### 🌟 (1) Blacklist the Sound Module
Run the following commands to block the `snd_bcm2835` driver:
```bash
cat <<EOF | sudo tee /etc/modprobe.d/blacklist-rgb-matrix.conf
blacklist snd_bcm2835
EOF

# Update the initramfs and reboot
sudo update-initramfs -u
sudo reboot
```

#### 🌟 (2) Isolate CPU Core for Matrix Refresh
Modify the boot configuration to dedicate a CPU core entirely to driving the display, mitigating potential flickering issues:
```bash
sudo nano /boot/cmdline.txt
```
Go to the very end of the single line text, append a space, and add `isolcpus=3`. 
*Save & Exit:* Save via `CTRL+O` ➡️ Press `Enter` ➡️ Exit via `CTRL+X`.

---

### 3. 🏗️ Compile the Core Library
Navigate to the root folder and compile the C++ binaries:
```bash
cd /home/project/rpi-rgb-led-matrix
make
```

---

### 4. 📺 Run the Hardware Demo
Once compiled successfully, enter the examples API directory and run the built-in C++ demonstration program:
```bash
cd examples-api-use
sudo ./demo -D0 --led-rows=64 --led-cols=64
```

> [!CAUTION]
> **Troubleshooting Audio Conflict Error:**
> If you encounter the following terminal error:
> ```text
> === snd_bcm2835: found that the Pi sound module is loaded. ===
> Don't use the built-in sound of the Pi together with this lib...
> ```
> This indicates the audio driver is still active. Repeat **Step 2**, restart the Pi, and run `lsmod | grep snd_bcm2835` to verify it returns empty before trying again.

---

### 5. 🐍 Configure the Python Environment
To run custom scripts or visual tools like the GIF viewer, compile the Python 3 bindings:

```bash
# Install required system development tools
sudo apt-get update && sudo apt-get install python3-dev cython3 -y

# Build and install the python package
cd /home/project/rpi-rgb-led-matrix/bindings/python
sudo make build-python 
sudo make install-python
```

---

### 6. 🐈 Play Creative Animated GIFs
1. Navigate to the Python samples workspace:
   ```bash
   cd /home/project/rpi-rgb-led-matrix/bindings/python/samples/
   ```
2. Modify the screen configuration inside `gif-viewer.py` to match your resolution (`64x64`) using `sudo nano gif-viewer.py`.
3. Put your targeted `.gif` file into the folder (e.g., `cat.gif`), then fire up the script:
   ```bash
   sudo python3 gif-viewer.py ./cat.gif
   ```

> 💡 **Pro-Tip:** Want to change the graphics? Simply grab any creative GIF animation online, drop it into the directory, and update the filename in your command!

---

## 📜 License & Acknowledgments
* Core driving engine powered by [hzeller/rpi-rgb-led-matrix](https://github.com/hzeller/rpi-rgb-led-matrix) (Licensed under GPL-2.0).
* Created as an embedded IoT portfolio project.

## Contact

- https://derwinluan.com/
- luandepinhk@gmail.com
- +852 4656 8918 (WhatsApp)
