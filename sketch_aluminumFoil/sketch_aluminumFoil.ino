

/*  3D Design - Project 1 - Sprint Challenge Code
 *   Motified by Cole Beattie
 *  Motified from StrandTest1 and StrandTest3 in class example
 *  https://github.com/IXD-Pcomp/3D2-Winter-2021/tree/main/strandtest3
 *  Turns a LED on and starts blinking blue and green LED
 *  Aluminum Foil as an object
 */




#include <Adafruit_NeoPixel.h>

#define LED_PIN 6

#define LED_COUNT 1

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup(){
  strip.begin();
  strip.show();
  strip.setBrightness(180);
}

void loop() {
colorWipe(strip.Color(0, 255, 0),180);  /*green*/
colorWipe(strip.Color(0, 0, 255),180); /*blue*/
delay(60);  
}



void colorWipe(uint32_t color, int wait) {
  for(int i=0; i<strip.numPixels(); i++) { 
    strip.setPixelColor(i, color);         
    strip.show();                         
    delay(60);                           
  }
}
