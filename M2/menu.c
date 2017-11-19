#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "codeGeneration.h"

void displayMenuLED(){
  int error=1, choice=0, port=0;
  printf("\t\tLED Settings - Christmas Edition:\n(0) Exit\n"
                                                "(1) Turn On LEDs\n"
                                                "(2) 1/2 LEDs\n"
                                                "(3) 1/3 LEDs\n"
                                                "(4) 1/4 LEDs\n"
                                                "(5) Invert Snake\n"
                                                "(6) Snake\n"
                                                "(7) Turn ON One LED\n"
                                                "(8) Xmas#1\n"
                                                "(9) Xmas#2\n\n"
                                            "Put your choice: ");
  while(error==1){
    scanf("%d",&choice);
    if(choice>=0 && choice<10){
      error=0;
    }
    else{
      printf("\nERROR\nRepeat your choice : ");
    }
  }
  if(choice==7){
    printf("\nChoose the LED Port to power from port 2 to port 11 : ");
    error=1;
    while(error==1){
      scanf("%d",&port);
      if(choice>1 && choice<12){
        error=0;
      }
      else{
        printf("\nERROR\nRepeat your choice : ");
      }
    }
    createParam(port , choice);
  }
  else if(choice == 0){
    exit(0);
  }
  else{
    createParam(port , choice);
  }
}
