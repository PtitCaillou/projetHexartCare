#include "coeur.h"
#include "param.h"
#include "cardio.h"

void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
  for(int i=2 ; i<12; i++){
    pinMode(i, OUTPUT); 
  }
  for(int i=2; i<12; i++){
    digitalWrite (i,HIGH);
  }
  allLED();
}

void loop() {
  long value=0;
  while(true){
    value = analogRead(0);
    if(value>20){
      switch(fonction){
        case 1:
          allLED();
          break;
        case 2:
          demi();
          break;
        case 3:
          tier();
          break;
        case 4:
          quart();
          break;
        case 5:
          invertSnake();
          break;
        case 6:
          snake();
          break;
        case 7:
          oneLed(numUser);
          break;
        case 8:
          xmas1();
          break;
        case 9:
          xmas2();
          break;
      }
      gather();
      delay(20);
      stopit();
    }
  }
}
