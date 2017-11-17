#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "data.h"
#include "processing.h"
#include "menu.h"

void menu(){
    printf("Welcome ! How would you like the data to be organized ?\n(1) In the order of the file.\n"
                                                                     "(2) In ascending way.\n"
                                                                     "(3) In descending way.\n"
                                                                     "(4) Search for a specific time.\n"
                                                                     "(5) Calculate the average pulse in a specific time range.\n"
                                                                     "(6) Display the number of data gathered.\n"
                                                                     "(7) Display the maximum and the minimum pulse with their time.\n"
                                                                     "(8) Exit the program.\n");
  int choice, choiceD, timeZero=0, timeOne=0;
  scanf("%d", &choice);
  switch(choice){
    case 1:
      system("cls");
      printf("(1) In the order of the file.\n");
      dataFileOrder(fileManage());
      break;
    case 2:
      system("cls");
      printf("(2.1) Organize the pulse.\n(2.2) Organize the time.\n");
      scanf("%d", &choiceD);
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
      scanf("%d", &choiceD);
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
      printf("(8) Exit the program.\n");
      exit(0);
      break;
    }
}
