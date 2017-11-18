#include "codeGeneration.h"
#include <stdio.h>

int createParam(int numUser, int fonct)
{
    FILE* fichier = NULL;
    fichier = fopen("Arduino/main/param.h", "w");

    fprintf(fichier,"#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n\nint numUser = %d;\nint fonction = %d;\n\n#endif ", numUser, fonct );

    fclose(fichier);
    return 0;
}
