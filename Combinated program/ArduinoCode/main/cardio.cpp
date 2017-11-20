#include "cardio.h"
#include <Arduino.h>
#include <Time.h>
 
void gather() {
  unsigned long tim = millis();
  unsigned long result = 0;
  result = calcPulse();
  if(result>0){
    xprt(result, tim);
  }
}

long prvVal=0, prvTime=0;
unsigned long calcPulse() {
  long result=0, detectionTime=0, thresholdValue=20, actualValue=0;
  actualValue = analogRead(0);
  
  if(actualValue > thresholdValue){
    if(prvVal <= thresholdValue){
      detectionTime = millis();
      if (detectionTime > (prvTime + 200)){
        result = (1000.0 * 60.0) / (detectionTime - prvTime);
        prvTime = detectionTime;
      }
    }
  }
  prvVal = actualValue;
  return result;
}

void xprt(unsigned long result, unsigned long tim) {
  int form = tim/1000;
  char toPrint[20];
  sprintf(toPrint, "%d!%ld;",form, result);
  Serial.print(toPrint);
}
