
# ESP32 Temperature Monitor with Qt

## Overview

This project is a simple environmental monitoring system consisting of an ESP32 microcontroller, a DHT11 temperature and humidity sensor, and a Qt desktop application.

The ESP32 reads temperature and humidity values from the DHT11 sensor and transmits the measurements to a computer through a serial connection. The Qt application receives the data and displays the readings in real time.

## Features

- Real\-time temperature monitoring
- Real\-time humidity monitoring
- Serial communication between ESP32 and computer
- Desktop graphical user interface developed with Qt
- Automatic sensor updates every second
- Simple and lightweight implementation

## Hardware Requirements

- ESP32 Development Board
- DHT11 Temperature and Humidity Sensor
- Breadboard
- Jumper Wires
- USB Cable

## Software Requirements

### ESP32

- Arduino IDE 2.x
- ESP32 Board Package
- DHT Sensor Library by Adafruit
- Adafruit Unified Sensor Library

### Desktop Application

- Qt 6
- Qt Creator
- Qt Serial Port Module

## Hardware Connections

| DHT11 Pin | ESP32 Pin |
| --- | --- |
| VCC | 3.3V |
| GND | GND |
| DATA | GPIO4 |

## System Architecture
```
DHT11 Sensor
      |
      v
    ESP32
      |
 USB Serial
      |
      v
 Qt Application
      |
      v
 Temperature Display
```
## ESP32 Setup

1. Install Arduino IDE.
2. Install the ESP32 board package.
3. Install the required DHT libraries.
4. Connect the ESP32 using USB.
5. Upload the firmware.

### Example Output

Temperature: 24.3

Humidity: 46.0

Temperature: 24.2

Humidity: 45.0

## Qt Application Setup

1. Install Qt Creator and Qt 6.
2. Create or open the project.
3. Enable the Qt Serial Port module.
4. Build and run the application.
5. Select the correct COM/Serial port connected to the ESP32.

## Data Format

The ESP32 sends measurements through the serial port using the following format:

24.3,46.0

24.2,45.0

24.4,47.0

Where:

- First value = Temperature (°C)
- Second value = Humidity (%)

## Testing

The system was tested by comparing multiple measurements from the DHT11 sensor and verifying that:

- Sensor readings were received correctly by the ESP32.
- Data was transmitted through the serial connection without loss.
- The Qt application displayed updated values in real time.
- No communication errors occurred during continuous operation.

## Future Improvements

- Data logging to CSV files
- Temperature and humidity graphs
- Wi\-Fi communication using ESP32
- Historical measurement storage
- Export functionality
- Sensor calibration support

## Author

Isabella Salim

## License

This project is intended for educational purposes.


