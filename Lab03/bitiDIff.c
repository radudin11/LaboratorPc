#include <stdio.h>
#include "functiiBin.h"

int main()
{
    //problema 3
    int n, m;
    int masca = 1 << 31;
    printf("dati doua valori pentru n si m: ");
    scanf("%d%d", &n,&m);
    int contor = 0;
    int i;
    int aux = 0;
    aux = n ^ m;
    afisareBin(n);
    afisareBin(m);
    afisareBin(aux);
    for(i = 0; i < 32; i++){
        if( aux & masca){
            contor++;
        }
        aux <<= 1;
    }
    printf("NUmaruld e biti diferiti intre n si m sunt %d\n", contor);
    return 0;
}