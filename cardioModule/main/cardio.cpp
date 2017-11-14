#include "cardio.h"

void gather(){
  unsigned long time = millis();
  unsigned long pulseValue = analogRead(0);
  println(pulseValue);
  result = process(pulseValue);

  export(result, time);
  
  delay(50);
}

long process(unsigned long pulseValue){
  unsigned long thresholdValue =/*Valeur à déterminer*/;
  unsigned long time, prvTime;
  if(pulseValue > thresholdValue){
    if(prvVal <= thresholdValue){
      time = millis();
      if(time > (prvTime + 200)){
        return ((1000*60) / (time - prvTime));
        prvTime = time;
      }
    }
  }
  prvVal = pulseValue;
}

void export(unsigned long result, unsigned long time){
  Serial.print(time);
  Serial.println(result);
}

