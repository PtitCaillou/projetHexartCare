#include <stdlib.h>
#include <stdio.h>
#define SIZE 5000
#include "data.h"
#include "processing.h"
#include "menu.h"

data *fileManage(){
  int i = 1, test;
  data *toProcess = malloc(SIZE * sizeof(data));
  FILE* recData = fopen("../ProcessingCode/main/Battements.csv", "r");

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
