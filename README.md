# Adafruit NeoPixel Simplified Library [![Build Status](https://travis-ci.org/adafruit/Adafruit_NeoPixel.svg?branch=master)](https://travis-ci.org/adafruit/Adafruit_NeoPixel)

Arduino library for controlling single-wire-based LED pixels and strip such as the [Adafruit 60 LED/meter Digital LED strip][strip], the [Adafruit FLORA RGB Smart Pixel][flora], the [Adafruit Breadboard-friendly RGB Smart Pixel][pixel], the [Adafruit NeoPixel Stick][stick], and the [Adafruit NeoPixel Shield][shield].

After downloading, rename folder to 'Adafruit_NeoPixel_simplified' and install in Arduino Libraries folder. Restart Arduino IDE, then open File->Sketchbook->Library->Adafruit_NeoPixel_simplified->simple_colors sketch.

Compatibility notes: Port A is not supported on any AVR processors at this time

Currently a modified version of Adafruit NeoPixel library with improved functionality

> This project was made possible by inspiration from Ingo Lohs and his [tutorial][tutorial] on hackerster.io. Please pay his website a visit to show your support for the tinkering community.

[flora]:  http://adafruit.com/products/1060
[strip]:  http://adafruit.com/products/1138
[pixel]:  http://adafruit.com/products/1312
[stick]:  http://adafruit.com/products/1426
[shield]: http://adafruit.com/products/1430
[tutorial]: https://www.hackster.io/ingo-lohs/myadafruit-neopixel-ring-with-12-leds-unboxing-15c9d1

---
## New Features
Check list of colors in keywords.txt to use custom colors (like teal and maroon) without knowing individual RGB values
Refer to simple_colors in examples for reference
```c
void colorWipe(Color COLOR, int delaytime);  // fill the LEDs one after the other with a color
void theaterChase(Color COLOR, int delaytime); // displays theater-style crawling lights in color of choice
void rainbow(int delaytime); // slowly changes colors leaving LED ring/strip/matrix with two-tone lights
void theaterChaseRainbow(int delaytime); // like theaterChase() and rainbow() mixed together
void rainbowCycle(int delaytime); // like rainbow() but this makes the rainbow equally distributed throughout
```

---

## Supported chipsets

We have included code for the following chips - *sometimes these break for exciting reasons that we can't control* in which case please open an issue!

 * AVR ATmega and ATtiny (any 8-bit) - 8 MHz, 12 MHz and 16 MHz
 * Teensy 3.x and LC
 * Arduino Due
 * Arduino 101
 * ATSAMD21 (Arduino Zero/M0 and other SAMD21 boards) @ 48 MHz
 * ATSAMD51 @ 120 MHz
 * Adafruit STM32 Feather @ 120 MHz
 * ESP8266 any speed
 * ESP32 any speed
 * Nordic nRF52 (Adafruit Feather nRF52), nRF51 (micro:bit)

Check forks for other architectures not listed here!

---
