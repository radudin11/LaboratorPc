#include "functiiBin.h"
#include <stdio.h>
//show the value of x(int) in binary 
void afisareBin(int x){
	int masca = 1 << 31;
    int sizeInt = 32;
    int i;  
    for(i=0 ;i < sizeInt; i++ ){
        if(masca & x)
            printf("1" );
        else
            printf("0");
        x <<=1;
    }
    printf("\n");
}

