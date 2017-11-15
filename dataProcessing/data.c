#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "data.h"

void fileManage(){
  char fileData[5000], table[5000][20];
  data toProcess[5000];
  FILE* recData = NULL;
  recData = fopen("../processingModule/main/Battements.csv", "r");

  if(recData != NULL){
    for(int i=0; fgets(fileData, 10, recData) != NULL; i++){
      for(int j=0; j<strlen(fileData); j++){
        table[i][j] = fileData[j];
      }
      printf("%s", table[i]);


    }
  }
  else{
    printf("ERROR\n");
  }
  fclose(recData);
}
