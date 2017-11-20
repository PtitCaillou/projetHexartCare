#include "coeur.h"
#include <Arduino.h>

void stopit(){
  digitalWrite(2, HIGH);
    digitalWrite(3,HIGH);
  digitalWrite(4, HIGH);
    digitalWrite(5,HIGH);
  digitalWrite(6, HIGH);
    digitalWrite(7,HIGH);
  digitalWrite(8, HIGH);
    digitalWrite(9,HIGH);
  digitalWrite(10, HIGH);
    digitalWrite(11,HIGH);
}

void led(int port, int delayis){
  digitalWrite(port, HIGH);  
  delay(delayis);                      
  digitalWrite(port, LOW);    
  delay(delayis); 
}

void oneLed(int num){
  int etat;
  etat = digitalRead(A0);
  if(etat>20){   
    digitalWrite (num,LOW);      
  }
  else{
    digitalWrite (num,HIGH);      
  }
}

void allLED(){
  /*
  long etat;
  etat = analogRead(A0);
  if(etat>20){  
  */ 
    digitalWrite(2, LOW);
    digitalWrite(3,LOW);
    digitalWrite(4, LOW);
    digitalWrite(5,LOW);
    digitalWrite(6, LOW);
    digitalWrite(7,LOW);
    digitalWrite(8, LOW);
    digitalWrite(9,LOW);
    digitalWrite(10, LOW);
    digitalWrite(11,LOW);
  /*
  }
  else{
    stopit();
  }
  */
}

void demi(){
  int etat;
  etat = analogRead(A0);
  if(etat>20){  
    digitalWrite(2, LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11,HIGH);
  }
  else{
    stopit();
  }
}

void tier(){
  int etat;
  etat = analogRead(A0); 
  if(etat>20){ 
    digitalWrite(2, LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11,LOW);
  }
  else{
    stopit();
  }
}

void quart(){
  int etat;
  etat = analogRead(A0);
  if(etat>20){ 
    digitalWrite(2, LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11,HIGH);
  }
  else{
    stopit();
  }
}

void invertSnake() {
  int etat;
  etat = analogRead(A0);
  if(etat>20){  
    led(2, 100);
    led(3, 100);
    led(4, 100);
    led(5, 100);
    led(6, 100);
    led(7, 100);
    led(8, 100);
    led(9, 100);
    led(10, 100);
    led(11, 100); 
  }
  else{
    stopit();
  }
}

void snake() {
  int etat;
  etat = analogRead(A0);  
  if(etat>20){ 
    led(11, 50);
    digitalWrite(2,HIGH);
    led(10, 50);
    digitalWrite(11,HIGH);
    led(9, 50);
    digitalWrite(10,HIGH);
    led(8, 50);
    digitalWrite(9,HIGH);
    led(7, 50);
    digitalWrite(8,HIGH);
    led(6, 50);
    digitalWrite(7,HIGH);
    led(5, 50);
    digitalWrite(6,HIGH);
    led(4, 50);
    digitalWrite(5,HIGH);
    led(3, 50);
    digitalWrite(4,HIGH);
    led(2, 50); 
    digitalWrite(3,HIGH);
  }
  else{
    stopit();
  }
}

void xmas1() {
  int pinLed[10]={2,3,4,5,6,7,8,9,10,11}; 
  boolean affichage[25][10]={

  0,0,0,0,0,0,0,0,0,0,

  0,0,0,0,1,0,0,0,0,1,

  0,0,0,1,0,0,0,0,1,0,

  0,0,1,0,0,0,0,1,0,0,

  0,1,0,0,0,0,1,0,0,0,
  
  1,0,0,0,0,1,0,0,0,0,

  0,0,0,0,0,0,0,0,0,0,

  1,0,0,0,0,1,0,0,0,0,

  0,1,0,0,0,0,1,0,0,0,

  0,0,1,0,0,0,0,1,0,0,

  0,0,0,1,0,0,0,0,1,0,

  0,0,0,0,1,0,0,0,0,1,

  0,0,0,0,0,0,0,0,0,0,

  1,1,1,1,1,1,1,1,1,1,

  1,1,1,1,0,1,1,1,1,0,

  1,1,1,0,0,1,1,1,0,0,

  1,1,0,0,0,1,1,0,0,0,

  1,0,0,0,0,1,0,0,0,0,

  0,0,0,0,0,0,0,0,0,0,

  1,1,1,1,1,1,1,1,1,1,

  0,1,1,1,1,0,1,1,1,1,

  0,0,1,1,1,0,0,1,1,1,

  0,0,0,1,1,0,0,0,1,1,

  0,0,0,0,1,0,0,0,0,1,

  0,0,0,0,0,0,0,0,0,0};

  int etat;
  etat = analogRead(A0);  
  if(etat>20){ 
    for (int i=0;i<25;i++){
      for (int p=0;p<10;p++){
        boolean etat=affichage[i][p];
        digitalWrite(pinLed[p],etat); 
      }
      delay(75); 
    }
  }
  else{
    stopit();
  }
}

void xmas2() {
  int pinLed[10]={2,3,4,5,6,7,8,9,10,11}; 
  boolean affichage[25][10]={

  0,0,0,0,0,0,0,0,0,0,

  0,0,0,0,1,0,0,0,0,0,

  0,0,0,1,0,1,0,0,0,0,

  0,0,1,0,0,0,1,0,0,0,

  0,1,0,0,0,0,0,1,0,0,
  
  1,0,0,0,0,0,0,0,1,0,

  0,0,0,0,0,0,0,0,0,1,

  1,0,0,0,0,0,0,0,1,0,

  0,1,0,0,0,0,0,1,0,0,

  0,0,1,0,0,0,1,0,0,0,

  0,0,0,1,0,1,0,0,0,0,

  0,0,0,0,1,0,0,0,0,0,

  0,0,0,0,0,0,0,0,0,0,

  1,1,1,1,1,1,1,1,1,1,

  1,1,1,1,0,1,1,1,1,1,

  1,1,1,0,0,0,1,1,1,1,

  1,1,0,0,0,0,0,1,1,1,

  1,0,0,0,0,0,0,0,1,1,

  0,0,0,0,0,0,0,0,0,1,

  1,1,1,1,1,1,1,1,1,0,

  0,1,1,1,1,1,1,1,0,0,

  0,0,1,1,1,1,1,0,0,0,

  0,0,0,1,1,1,0,0,0,0,

  0,0,0,0,1,0,0,0,0,0,

  0,0,0,0,0,0,0,0,0,0};
  
  int etat;
  etat = analogRead(A0);
  if(etat>20){ 
    for (int i=0;i<25;i++){
      for (int p=0;p<10;p++){
        boolean etat=affichage[i][p];
        digitalWrite(pinLed[p],etat); 
      }
      delay(75); 
    }
  }
  else{
    stopit();
  }
}
