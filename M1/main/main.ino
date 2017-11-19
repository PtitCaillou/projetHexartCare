#include "cardio.h"

void setup() {
  Serial.begin(9600);
}

void loop() {
  long prvVal = 0, value=analogRead(0);
  while(true){
    if(analogRead(0)>50){
      gather(prvVal);
      prvVal=value;
    }
  } 
}
