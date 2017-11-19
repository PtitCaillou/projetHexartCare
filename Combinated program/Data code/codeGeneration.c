#include "codeGeneration.h"
#include <stdio.h>

int createParam(int numUser, int choice)
{
  FILE* folder = NULL;
  folder = fopen("../ArduinoCode/main/param.h", "w");
  if(folder != NULL){
    fprintf(folder,"#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n\nint numUser = %d;\nint fonction = %d;\n\n#endif ", numUser, choice );
  }
  else{
    printf("\nERROR\n");
  }
  fclose(folder);
  return 0;
}
