#include <stdlib.h>
#include <stdio.h>
#define SIZE 5000
#include "data.h"
#include "processing.h"
#include "menu.h"

void division(data *chain, data *chainOne, long sizeOne, data *chainTwo, long sizeTwo){
  long i;
  for(i=0; i<sizeOne; i++){
    chainOne[i]=chain[i];
  }
  for(i=0; i<sizeTwo; i++){
    chainTwo[i]=chain[i+sizeOne];
  }
}

void fusionSort(data *chain, long Size){
  long sizeOne = Size/2;
  long sizeTwo = Size-sizeOne;
  data chainOne[sizeOne], chainTwo[sizeTwo];
  if(Size!=1){
    division(chain, chainOne, sizeOne, chainTwo, sizeTwo);
    fusionSort(chainTwo, sizeTwo);
    fusionSort(chainOne, sizeOne);
    fusion(chain, chainOne, sizeOne, chainTwo, sizeTwo);
  }
}

void fusion(data *chain, data *chainOne, long sizeOne, data *chainTwo, long sizeTwo){
  long i=0, j=0, k=0, m;
  while(i<sizeOne && j<sizeTwo){
    if(chainOne[i].pulse > chainTwo[j].pulse){
      chain[k] = chainOne[i];
      i++;
    }
    else{
      chain[k] = chainTwo[j];
      j++;
    }
    k++;
  }
  if(i!=sizeOne){
    for(m=i; m<sizeOne; m++){
       chain[k] = chainOne[m];
       k++;
    }
  }
  else if(j!=sizeTwo){
    for(m=j; m<sizeTwo; m++){
       chain[k] = chainTwo[m];
       k++;
    }
  }
}

void dataFileOrder(data *chain){
  for(int i=1; i<SIZE; i++){
    if(chain[i].num != NULL){
      printf("\tNUM : %d \tTIME : %ld\tPULSE : %ld\n", chain[i].num, chain[i].time, chain[i].pulse);
    }
  }
}

void dataPulseAscendingWay(data *chain){
  fusionSort(chain, SIZE);
  for(int i=SIZE-2; i > 0; i--){
    if(chain[i].num != NULL){
      printf("\tNUM : %d \tTIME : %ld\tPULSE : %ld\n", chain[i].num, chain[i].time, chain[i].pulse);
    }
  }
}

void dataTimeAscendingWay(data *chain){
  for(int i=SIZE-1; i>0; i--){
    if(chain[i].num != NULL){
      printf("\tNUM : %d \tTIME : %ld\tPULSE : %ld\n", chain[i].num, chain[i].time, chain[i].pulse);
    }
  }
}

void dataPulseDescendingWay(data *chain){
  fusionSort(chain, SIZE);
  for(int i=0; i < SIZE-1; i++){
    if(chain[i].num != NULL){
      printf("\tNUM : %d \tTIME : %ld\tPULSE : %ld\n", chain[i].num, chain[i].time, chain[i].pulse);
    }
  }
}

void dataTimeDescendingWay(data *chain){
  dataFileOrder(chain);
}

void dataSpecificTime(data *chain, int timeZero, int timeOne){
  for(int i=1; i < SIZE; i++){
    if(chain[i].time >= timeZero && chain[i].time <= timeOne && chain[i].num != 0){
      printf("At %ld s: %ld pulse\n", chain[i].time, chain[i].pulse);
    }
  }
}

void dataAverageInTimeRange(data *chain, int timeZero, int timeOne){
  int addition, coOneter;
  float result;
  for(int i=1; i < SIZE; i++){
    if(chain[i].time >= timeZero && chain[i].time <= timeOne && chain[i].num != 0){
      addition = addition + chain[i].pulse;
      coOneter=i;
    }
  }
  result = addition / coOneter;
  printf("The average pulse between %ld and %ld is %.2f\n", timeZero, timeOne, result);
}

void dataNumberGathered(data *chain){
  for(int i=1; i<SIZE; i++){
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
