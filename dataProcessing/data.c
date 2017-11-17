#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "data.h"

data *fileManage(){
  int i = 1, test;
  data *toProcess = malloc(SIZE * sizeof(data));
  FILE* recData = fopen("../processingModule/main/Battements.csv", "r");

  if(recData != NULL){
     while ((test = fscanf(recData, "%ld!%ld", &(toProcess[i]).time, &(toProcess[i]).pulse)) != 0 && test != EOF) {
        toProcess[i].num = i;
        i++;
     }
  }
  else{
    printf("ERROR\n");
  }
  fclose(recData);
  return toProcess;
}

void dataFileOrder(data *chain){
  for(int i=1; i<SIZE; i++){
    if(chain[i].num != NULL){
      printf("\tNUM : %d \t", chain[i].num);
      printf("TIME : %ld\t", chain[i].time);
      printf("PULSE : %ld\n", chain[i].pulse);
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
      printf("\nThere are %d data gathered.\n\n\n", i-1);
      break;
    }
  }
}

void dataExtremePulse(data *chain){
  data maxPulse = {NULL, NULL, NULL}, minPulse = {NULL, NULL, chain[1].pulse};

  for(int i=1; i<SIZE; i++){
    if(chain[i].pulse > maxPulse.pulse){
      maxPulse.num = chain[i].num;
      maxPulse.pulse = chain[i].pulse;
      maxPulse.time = chain[i].time;
    }
    if(chain[i].pulse < minPulse.pulse && chain[i].pulse != 0 && chain[i].pulse != NULL){
      //printf("%ld plus grand que %ld\n", chain[i].pulse, maxPulse.pulse);
      minPulse.num = chain[i].num;
      minPulse.pulse = chain[i].pulse;
      minPulse.time = chain[i].time;
    }
  }
  printf("Minimum :\t time : %ld s\tpulse : %ld\n", minPulse.time, minPulse.pulse);
  printf("Maximum :\t time : %ld s\tpulse : %ld\n", maxPulse.time, maxPulse.pulse);
}

