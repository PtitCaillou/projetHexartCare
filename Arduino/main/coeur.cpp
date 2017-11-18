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
// fonction 7
void oneLed(int num){

  int etat;
    etat = analogRead(A0);
    if(etat>20){   
digitalWrite (num,LOW);      
   }
    else{
digitalWrite (num,HIGH);      
  }
}


// fonction 1
void allLED(){

    int etat;
    etat = analogRead(A0);
    
    if(etat>20){   
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
   }
   else{
  stopit();
   }
}


// fonction 2
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

// fonction 3
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
    }else{
  stopit();
   }
  
}
// fonction 4
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
   }else{
    stopit();
   }
}




// fonction 5
void invertSnake() {
  
     int etat;
    etat = analogRead(A0);
    
    if(etat>45){  
  led(2, 20);
  led(3, 20);
  led(4, 20);
  led(5, 20);
  led(6, 20);
  led(7, 20);
  led(8, 20);
  led(9, 20);
  led(10, 20);
  led(11, 20); 
    }else{
      stopit();
    }
}


// fonction 6
void snake() {
  
     int etat;
    etat = analogRead(A0);
    
    if(etat>45){ 
  led(11, 20);
      digitalWrite(2,HIGH);
  led(10, 20);
      digitalWrite(11,HIGH);
  led(9, 20);
      digitalWrite(10,HIGH);
  led(8, 20);
      digitalWrite(9,HIGH);
  led(7, 20);
      digitalWrite(8,HIGH);
  led(6, 20);
      digitalWrite(7,HIGH);
  led(5, 20);
      digitalWrite(6,HIGH);
  led(4, 20);
      digitalWrite(5,HIGH);
  led(3, 20);
      digitalWrite(4,HIGH);
  led(2, 20); 
      digitalWrite(3,HIGH);
     }else{
           stopit();
     }
}
// fonction 8
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
    
    if(etat>45){ 
  for (int i=0;i<25;i++)
  {
    for (int p=0;p<10;p++)
    {
      boolean etat=affichage[i][p];
      digitalWrite(pinLed[p],etat); 
    }

    delay(45); 

    }
  }
  else{
    stopit();
  }
}

// fonction 9
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
    
    if(etat>45){ 
  
  for (int i=0;i<25;i++)
  {
    for (int p=0;p<10;p++)
    {
      boolean etat=affichage[i][p];
      digitalWrite(pinLed[p],etat); 
    }

    delay(45); 

      }
    }
    else{
      stopit();
    }
}
