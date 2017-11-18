#include "coeur.h"
#include "param.h"
#include "cardio.h"

void setup() {
 
  Serial.begin(9600);
  
    // CAPTEUR BATTEMENT
  pinMode(A0,INPUT);

    // LED
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);  
  for (int i=0 ; i<=11; i++){
    digitalWrite (i,HIGH);
  }
}

void loop() {
  
    if(analogRead(0)>50){
    gather();
} 

  switch(fonction) {
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
  
}
