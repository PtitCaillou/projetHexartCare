#include "menu.h"
#include <stdio.h>



int displayMenuLED(){

    int fonct;
    int no = 0;

do
{
    no = 0;

    printf("\n             LED Settings - Christmas Edition:\n0 - Exit \n1 - Turn On LEDs \n2 - 1/2 LEDs \n3 - 1/3 LEDs \n4 - 1/4 LEDs \n5 - Invert Snake \n6 - Snake \n7 - Turn ON One LED \n8 - Xmas#1\n9 - Xmas#2\n\nPut your choice: ");
    scanf("%d",&fonct);

    if(fonct < 0){
        no = 1;
    }
    else if(fonct > 9){
        no = 1;
    }

    else if(fonct == 0){
        return 0;

    }

    else{
    return fonct;

    }
}while(no==1);

}

