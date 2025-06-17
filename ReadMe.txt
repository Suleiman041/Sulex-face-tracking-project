# 🎯 Face Tracking with Python and Arduino

This project tracks a human face using a webcam and moves two servo motors (pan and tilt) connected to an Arduino to follow the face in real-time.

## 🧰 What You Need

### Hardware:
- Arduino Uno, Nano, or ESP32
- 2x Servo motors (SG90 recommended)
- USB cable
- Jumper wires
- Breadboard or servo mount (optional)
- Computer with camera (built-in or USB webcam)

### Software:
- Arduino IDE
- Python 3.7–3.11 (not 3.13, which may have compatibility issues)
- Libraries:
  - `opencv-python`
  - `pyserial`
  - `numpy`

---

## 🛠 Installation

### 🔌 Arduino Setup
1. Open `servo_control.ino` in the Arduino IDE
2. Upload it to your board
3. Close the Serial Monitor after uploading

### 🐍 Python Setup
Make sure Python is installed. Then install the required libraries:

```bash
pip install opencv-python pyserial numpy
