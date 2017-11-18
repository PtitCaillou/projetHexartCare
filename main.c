#include "menu.h"
#include "codeGeneration.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int port;
    int fonct;

    fonct = displayMenuLED();

    if(fonct == 7){

        printf("\n\n\nPut your LED Port choice: ");
        scanf("%d", &port);
        createParam(port , fonct);
        return 0;
    }
    else{
    port = 0;

    createParam(port , fonct);

    return 0;
    }
}
