#include "cardio.h"
#include <Arduino.h>
#include <Time.h>

long tempsPrecedent = 0;
 
void gather() {
  unsigned long tim = millis();
  unsigned long pulseValue = analogRead(0);
  unsigned long result;
  //Serial.println(pulseValue);
  result = Bite(pulseValue);
  xprt(result, tim);
  delay(400);
}

unsigned long Bite(unsigned long valeurActuelle) {
  int valeurSeuil, valeurPrecedente = 0;
  long tempsDetection, result;

  valeurActuelle = analogRead(0);
  valeurSeuil = 20;

  if (valeurActuelle > valeurSeuil) {  // on est dans la zone max
    if (valeurPrecedente <= valeurSeuil) {  // est-ce qu'on vient d'y entrer?
      tempsDetection = millis();
      if (tempsDetection > (tempsPrecedent + 200)){  // ce n'est pas seulement du bruit?
        result = (1000.0 * 60.0) / (tempsDetection - tempsPrecedent);
        //Serial.println( (1000.0 * 60.0) / (tempsDetection - tempsPrecedent),0);
        tempsPrecedent = tempsDetection;
      }
    }
  }

  valeurPrecedente = valeurActuelle;
  return result;
}

void xprt(unsigned long result, unsigned long tim) {
  int form = tim/1000;
  char toPrint[20];
  sprintf(toPrint, "%d!%ld;",form, result);
  Serial.print(toPrint);
}

