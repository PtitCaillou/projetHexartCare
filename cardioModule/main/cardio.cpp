#include "cardio.h"
#include <Arduino.h>
#include <Time.h>

void gather(){
  unsigned long tim = millis();
  unsigned long pulseValue = analogRead(0);
  unsigned long result;
  //Serial.println(pulseValue);
  //result = process(pulseValue);
  
  //xprt(result, tim);
  
  delay(100);
}

long process(unsigned long pulseValue){
  unsigned long thresholdValue = 200;
  unsigned long tim, prvTime, prvVal, result;
  if(pulseValue > thresholdValue){
    if(prvVal <= thresholdValue){
      tim = millis();
      if(tim > (prvTime + 200)){
        result = ((1000*60) / (tim - prvTime));
        prvTime = tim;
      }
    }
  }
  prvVal = pulseValue;
  return result;
}

void xprt(unsigned long result, unsigned long tim){
  Serial.print(tim);
  Serial.print(',');
  Serial.print(result);
  Serial.println(';');
}

