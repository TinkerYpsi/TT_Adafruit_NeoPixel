#include <TT_Adafruit_Neopixel.h>
#include <hexadecimal_colors_to_strings.h>

#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 13
#define NUMPIXELS 12

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)
TT_Adafruit_Neopixel strip = TT_Adafruit_Neopixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

void setup() {
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
  #if defined (__AVR_ATtiny85__)
    if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
  #endif
  // End of trinket special code


  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  strip.setBrightness(50);
  strip.colorWipe(TEAL, 30);
  strip.colorWipe(MAROON, 30);
  strip.colorWipe(IVORY, 30);

  strip.theaterChase(NAVY, 30);
  strip.theaterChase(LIMEGREEN, 30);
  strip.rainbowCycle(5);
  strip.theaterChaseRainbow(50);
  strip.rainbow(50);

  strip.colorWipe(strip.Color(255, 0, 0), 30); // Red
  strip.colorWipe(strip.Color(0, 255, 0), 30); // Green
  strip.colorWipe(strip.Color(0, 0, 255), 30); // Blue
}
