 #include <stdio.h>
#include "functiiBin.h"

int main()
{
    int n, cn;
    printf("Dati valoare pentru n: ");
    scanf("%d", &n);
    afisareBin(n);
    int masca = 1 << 31;
    int contor = 0;
    int i;
    cn = n;
    for(i =0; i < 32; i++ ){
        if(masca & cn){
            contor++;
        }
        cn <<= 1; 
    }
    printf("%d\n", contor);
    int contor_copie = contor;
    //creare min

    while(contor)
    {
        cn <<= 1;
        cn++;
        contor--;
    }
    afisareBin(cn);
    printf("Cel mai mic numar este : %d\n", cn);

    //creare max

    cn <<= (31 -contor_copie);
    afisareBin(cn);
    printf("Cel mai mare numar este : %d\n", cn);
    
    
}
