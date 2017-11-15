#include "cardio.h"
#include <Arduino.h>
#include <Time.h>

long prvVal = 0;
 
void gather() {
  unsigned long tim = millis();
  unsigned long pulseValue = analogRead(0);
  unsigned long result;
  result = calcPulse(pulseValue);
  xprt(result, tim);
  delay(400);
}

unsigned long calcPulse(unsigned long actualValue) {
  int thresholdValue, prvVal = 0;
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

