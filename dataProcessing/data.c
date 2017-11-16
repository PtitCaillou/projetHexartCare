#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define SIZE 5000
#include "data.h"

data *fileManage(){
  char fileData[SIZE], count;
  data *toProcess = malloc(SIZE * sizeof(data));
  FILE* recData = NULL;

  recData = fopen("../processingModule/main/Battements.csv", "r");

  if(recData != NULL){
    int a=0;
    for(int i=0; fgets(fileData, 20, recData) != NULL; i++){
      a=0;
      for(int j=0; j<strlen(fileData) && j < 20; j++){
        toProcess[i].num = i + 1;
        if(a==0){
          toProcess[i].time[j] = fileData[j];
          if(fileData[j]=='!'){
            toProcess[i].time[j] = ' ';
            a=1;
          }
        }
        if(a==1){
          toProcess[i].beat[j-(strlen(toProcess[i].time))] = fileData[j];
          if(fileData[j]==';'){
            toProcess[i].beat[j-(strlen(toProcess[i].time))] = ' ';
          }
        }
      }
      count++;
    }
  }
  else{
    printf("ERROR\n");
  }
  fclose(recData);
  return toProcess;
}

void dataFileOrder(data *chain){
  for(int i=0; i<SIZE; i++){
    if(chain[i].num != NULL){
      printf("\tNUM : %d\t", chain[i].num);
      printf("TIME : %s\t", chain[i].time);
      printf("BEAT : %s", chain[i].beat);
    }
  }
}

void dataPulseAscendingWay(data *chain){

}

void dataTimeAscendingWay(data *chain){

}

void dataPulseDescendingWay(data *chain){

}

void dataTimeDescendingWay(data *chain){

}

void dataSpecificTime(data *chain){

}

void dataAverageInTimeRange(data *chain){

}

void dataNumberGathered(data *chain){
  for(int i=0; i<SIZE; i++){
    if(chain[i].num == NULL){
      printf("\nThere are %d data gathered.\n\n\n", i+1);
      break;
    }
  }
}

void dataExtremePulse(data *chain){
  int maxPulse, minPulse;

  for(int i=0; i<SIZE; i++){
    if(chain[i].num != NULL){
      if(chain[i].num > maxPulse){
        maxPulse =
      }
      break;
    }
  }
}

