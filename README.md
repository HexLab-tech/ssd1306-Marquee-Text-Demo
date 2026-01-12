# ssd1306-Marquee

# SSD1306 Marquee Text Demo

This project demonstrates a classic marquee / scrolling banner effect on a 0.96" SSD1306 OLED display using an Arduino Nano.

A large text message scrolls smoothly from right to left, similar to LED signboards or rotating shop displays. The text is rendered at a high scale to fill most of the screen, making it ideal for splash screens, startup animations, or simple OLED UI demos.

## Features
- Smooth horizontal scrolling (marquee effect)
- Large, screen-filling text
- Automatic text width calculation
- Looping animation
- SSD1306 (128x64) OLED support
- Arduino Nano compatible

## Hardware
- Arduino Nano (ATmega328P)
- 0.96" SSD1306 OLED (128x64, I2C)

## Libraries Used
- Adafruit SSD1306
- Adafruit GFX Library

## Wiring
- SDA → A4  
- SCL → A5  
- VCC → 5V  
- GND → GND

## Use Cases
- Startup splash screens
- Retro LED sign effects
- Simple UI animations
- OLED performance testing

## License
MIT License
