#include "cardio.h"

void setup() {
  Serial.begin(9600);
}

void loop() {
  long prvVal = 0, value=0;
  while(true){
    value=analogRead(0);
    if(value>50){
      gather(prvVal);
      prvVal=value;
    }
  } 
}
