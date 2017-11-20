#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define SIZE 5000
#include "data.h"
#include "processing.h"
#include "menu.h"

data *fileManage(){
  int i = 1, test;
  char actData[10], prvData[10], *posRtn;
  data *toProcess = malloc(SIZE * sizeof(data));
  FILE* recData = fopen("../ProcessingCode/main/Battements.csv", "r");

  if(recData != NULL){
    while(fgets(actData,10,recData) != NULL){
      if(strchr(actData, ';') == NULL){
        strcat(prvData, actData);
        posRtn = strchr(prvData, '\n');
        *posRtn = '\0';
      }
      else{
        strncat(prvData,actData, strlen(actData));
        toProcess[i] = translate(prvData);
        strcpy(prvData, "\0");
        toProcess[i].num = i;
        i++;
      }
    }
  }
  else{
    printf("ERROR\n");
  }
  fclose(recData);
  return toProcess;
}

data translate(char actData[10]){
  data toProcess;
  char Time[10] = {"\0"}, pulse[10] = {"\0"};

  int a=0;
  for(int i=0; i<strlen(actData); i++){
    if(actData[i] == '!' && a == 0){
      for(int j=0; j<i; j++){
        Time[j] = actData[j];
      }
      toProcess.time = strtol(Time, NULL, 10);
      a=1;
    }
    else if(actData[i] == ';' && a == 1){
      for(int j=0; j<strlen(Time)+1; j++){
        pulse[j] = actData[j+strlen(Time)+1];
      }
      toProcess.pulse = strtol(pulse, NULL, 10);
    }
  }
  return toProcess;
}
