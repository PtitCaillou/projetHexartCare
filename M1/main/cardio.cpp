#include "cardio.h"
#include <Arduino.h>
#include <Time.h>
 
void gather(long prvVal) {
  unsigned long tim = millis();
  unsigned long pulseValue = analogRead(0);
  unsigned long result;
  result = calcPulse(pulseValue, prvVal);
  xprt(result, tim);
  delay(200);
}

unsigned long calcPulse(unsigned long actualValue, long prvVal) {
  int thresholdValue;
  long detectionVal, result, detectionTime;

  actualValue = analogRead(0);
  thresholdValue = 20;

  if (actualValue > thresholdValue) {  
    if (prvVal <= thresholdValue) { 
      detectionTime = millis();
      if (detectionTime > (prvVal + 200)){  
        result = (1000.0 * 60.0) / (detectionTime - prvVal);
        prvVal = detectionTime;
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

