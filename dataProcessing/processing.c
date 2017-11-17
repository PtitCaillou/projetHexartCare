#include <stdlib.h>
#include <stdio.h>
#define SIZE 5000
#include "data.h"
#include "processing.h"
#include "menu.h"

void dataPulseAscendingWay(data *chain){

}

void dataTimeAscendingWay(data *chain){

}

void dataPulseDescendingWay(data *chain){

}

void dataTimeDescendingWay(data *chain){

}

void dataSpecificTime(data *chain, int timeZero, int timeOne){
  for(int i=1; i < SIZE; i++){
    if(chain[i].time >= timeZero && chain[i].time <= timeOne && chain[i].num != 0){
      printf("At %ld s: %ld pulse\n", chain[i].time, chain[i].pulse);
    }
  }
}

void dataAverageInTimeRange(data *chain, int timeZero, int timeOne){
  int addition, counter;
  float result;
  for(int i=1; i < SIZE; i++){
    if(chain[i].time >= timeZero && chain[i].time <= timeOne && chain[i].num != 0){
      addition = addition + chain[i].pulse;
      counter=i;
    }
  }
  result = addition / counter;
  printf("The average pulse between %ld and %ld is %.2f\n", timeZero, timeOne, result);
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
      minPulse.num = chain[i].num;
      minPulse.pulse = chain[i].pulse;
      minPulse.time = chain[i].time;
    }
  }
  printf("Minimum :\t time : %ld s\tpulse : %ld\n", minPulse.time, minPulse.pulse);
  printf("Maximum :\t time : %ld s\tpulse : %ld\n", maxPulse.time, maxPulse.pulse);
}
