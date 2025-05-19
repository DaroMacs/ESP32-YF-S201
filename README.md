# ESP32 Water Flow Sensor Calibration

This project provides a simple calibration tool for the YF-S201 water flow sensor using an ESP32 microcontroller. It helps you determine the pulse-to-volume ratio of your flow sensor by counting pulses over a known volume of water.

## Hardware Requirements

- ESP32 NodeMCU-32S
- YF-S201 Water Flow Sensor
- Jumper wires
- USB cable for programming and power
- Water container for calibration

## Wiring

Connect the YF-S201 flow sensor to the ESP32 as follows:

- VCC (Red wire) → 5V or 3.3V
- GND (Black wire) → GND
- Signal (Yellow wire) → GPIO 16 (configurable in code)

## Software Requirements

- PlatformIO IDE or VSCode with PlatformIO extension
- Arduino framework

## Project Structure

```
├── src/
│   └── main.cpp          # Main program code
├── include/              # Header files
├── lib/                  # Custom libraries
├── test/                 # Test files
└── platformio.ini        # PlatformIO configuration
```

## Usage

1. Upload the code to your ESP32 using PlatformIO
2. Open the Serial Monitor (baud rate: 921600)
3. Start water flow through the sensor
4. Measure a known volume of water (e.g., 1 liter)
5. Note the pulse count from the Serial Monitor
6. Calculate the calibration factor: pulses per liter = total pulses / volume in liters

## Calibration Formula

```
Calibration Factor = Total Pulses / Volume (in liters)
```

## Configuration

The following parameters can be modified in the code:

- `FLOW_SENSOR_PIN`: GPIO pin for the flow sensor (default: 16)
- `monitor_speed`: Serial communication speed (default: 921600)

## License

This project is open source and available under the MIT License.

## Contributing

Feel free to submit issues and enhancement requests!
