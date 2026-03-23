# Arduino Light Sensor LED

## Overview
This project uses an Arduino and a light sensor to control an LED based on ambient light intensity.

## Working Principle
- The light sensor reads the surrounding light level.
- When the sensor is covered by hand, the light intensity decreases.
- If the light level is below a threshold, the LED turns on.
- If the light level is high enough, the LED turns off.

## Components Used
- Arduino Uno
- Light sensor
- LED
- Resistor

## Files in this Repository
- `light_sensor.ino` : Arduino source code
- `led_on.jpg` : LED turns on when the sensor is covered
- `led_off.jpg` : LED turns off under normal light conditions

## Result
The LED successfully responds to changes in light intensity.
