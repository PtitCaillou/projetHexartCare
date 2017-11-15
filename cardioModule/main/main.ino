#include "cardio.h"

//int counter = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(analogRead(0)>20){
    //Serial.print(counter);
    //Serial.print(" : ");
    //Serial.println("POUL");
    //counter = counter + 1;
    //while(analogRead(0)!=0){
      //delay(15);
    //}
    
    Serial.println(analogRead(0));
    delay(15);
  }
  
  //gather();
}
