#include "cardio.h"

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(analogRead(0)>50){
    gather();
  } 
}
