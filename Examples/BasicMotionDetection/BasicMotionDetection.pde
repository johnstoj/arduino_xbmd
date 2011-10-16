#include <XBMD.h>

uint8_t pinEn = 3;
uint8_t pinOut = 4;

void OnMotionCallback(void) {
  Serial.println("Motion detected!"); 
}

// Create an X Band Motion Detection object...
XBMD xbmd = XBMD(pinEn, pinOut, OnMotionCallback);

// /////////////////////////////////////////////////////////////////////////////
void setup() {
  // Start Serial logging...
  Serial.begin(9600);
  
  // Turn on the X Band Motion Detector...
  xbmd.on();
}

// /////////////////////////////////////////////////////////////////////////////
void loop() {
  // Check for motion...
  xbmd.check();
}
