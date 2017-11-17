#include <stdlib.h>
#include <stdio.h>
#define SIZE 5000
#include "data.h"
#include "processing.h"
#include "menu.h"

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
