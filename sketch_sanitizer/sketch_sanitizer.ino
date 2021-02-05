/*  3D Design - Project 1 - Sprint Challenge Code
 *   Motified by Cole Beattie
 *  Motified from StrandTest1 and StrandTest3 in class example
 *  https://github.com/IXD-Pcomp/3D2-Winter-2021/tree/main/strandtest3
 *  Turns a LED on and starts blinking blueish-green and yellow LED
 *  Bottle of Sanitizer as an object
 */




#include <Adafruit_NeoPixel.h>

#define LED_PIN 6

#define LED_COUNT 1

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup(){
  strip.begin();
  strip.show();
  strip.setBrightness(190);
}

void loop() {
colorWipe(strip.Color(51, 153, 102),190);  /*blueish-green*/
colorWipe(strip.Color(255, 255, 0),190); /*yellow*/
delay(120);  
}



void colorWipe(uint32_t color, int wait) {
  for(int i=0; i<strip.numPixels(); i++) { 
    strip.setPixelColor(i, color);         
    strip.show();                         
    delay(120);                           
  }
}
