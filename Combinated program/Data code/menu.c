#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "data.h"
#include "processing.h"
#include "menu.h"
#include "codeGeneration.h"

void menu(){
    printf("Welcome ! How would you like the data to be organized ?\n(1) In the order of the file.\n"
                                                                     "(2) In ascending way.\n"
                                                                     "(3) In descending way.\n"
                                                                     "(4) Search for a specific time.\n"
                                                                     "(5) Calculate the average pulse in a specific time range.\n"
                                                                     "(6) Display the number of data gathered.\n"
                                                                     "(7) Display the maximum and the minimum pulse with their time.\n"
                                                                     "(8) Change the LED heart settings\n"
                                                                     "(9) Exit the program.\n");
  int choice, choiceD, timeZero=0, timeOne=0, error=1;
  while(error==1){
    scanf("%d", &choice);
    if(choice>0 && choice<9){
      error=0;
    }
    else{
      printf("\nERROR\nRepeat your choice : ");
    }
  }
  switch(choice){
    case 1:
      system("cls");
      printf("(1) In the order of the file.\n");
      dataFileOrder(fileManage());
      break;
    case 2:
      system("cls");
      printf("(2.1) Organize the pulse.\n(2.2) Organize the time.\n");
      error=1;
      while(error==1){
        scanf("%d", &choiceD);
        if(choiceD>0 && choiceD<3){
          error=0;
        }
        else{
          printf("\nERROR\nRepeat your choice : ");
        }
      }
      switch(choiceD){
        case 1:
          system("cls");
          printf("(2.1) Organize the pulse.\n");
          dataPulseAscendingWay(fileManage());
          break;
        case 2:
          system("cls");
          printf("(2.2) Organize the time.\n");
          dataTimeAscendingWay(fileManage());
          break;
      };
      break;
    case 3:
      system("cls");
      printf("(3.1) Organize the pulse.\n(3.2) Organize the time.\n");
      error=1;
      while(error==1){
        scanf("%d", &choiceD);
        if(choiceD>0 && choiceD<3){
          error=0;
        }
        else{
          printf("\nERROR\nRepeat your choice : ");
        }
      }
      switch(choiceD){
        case 1:
          system("cls");
          printf("(3.1) Organize the pulse.\n");
          dataPulseDescendingWay(fileManage());
          break;
        case 2:
          system("cls");
          printf("(3.2) Organize the time.\n");
          dataTimeDescendingWay(fileManage());
          break;
      };
      break;
    case 4:
      system("cls");
      printf("(4) Search for a specific time.\nEnter the first time value : ");
      scanf("%d", &timeZero);
      system("cls");
      printf("(4) Search for a specific time.\nThe first time value is : %d", timeZero);
      printf("\nEnter the second time value : ");
      scanf("%d", &timeOne);
      system("cls");
      printf("(4) Search for a specific time.\nThe first time value is : %d", timeZero);
      printf("\nThe second time value is : %d\n\n", timeOne);
      if(timeZero >= timeOne){
        int temp = timeZero;
        timeZero = timeOne;
        timeOne = temp;
      }
      dataSpecificTime(fileManage(), timeZero, timeOne);
      break;
    case 5:
      system("cls");
      printf("(5) Calculate the average pulse in a specific time range.\nEnter the first time value : ");
      system("cls");
      printf("(5) Calculate the average pulse in a specific time range.\nEnter the first time value : ");
      scanf("%d", &timeZero);
      system("cls");
      printf("(5) Calculate the average pulse in a specific time range.\nThe first time value is : %d", timeZero);
      printf("\nEnter the second time value : ");
      scanf("%d", &timeOne);
      system("cls");
      printf("(5) Calculate the average pulse in a specific time range.\nThe first time value is : %d", timeZero);
      printf("\nThe second time value is : %d\n\n", timeOne);
      if(timeZero >= timeOne){
        int temp = timeZero;
        timeZero = timeOne;
        timeOne = temp;
      }
      dataAverageInTimeRange(fileManage(), timeZero, timeOne);
      break;
    case 6:
      system("cls");
      printf("(6) Display the number of data gathered.\n");
      dataNumberGathered(fileManage());
      break;
    case 7:
      system("cls");
      printf("(7) Display the maximum and the minimum pulse with their time.\n");
      dataExtremePulse(fileManage());
      break;
    case 8:
      system("cls");
      printf("(8) Change the LED heart settings\n");
      displayMenuLED();
      break;
    case 9:
      system("cls");
      printf("(9) Exit the program.\n");
      exit(0);
      break;
    }
}

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
