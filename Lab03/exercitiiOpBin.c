#include <stdio.h>
//returns max power of 2 smaller than x
int maxPower2(int x){
    int masca = 1;
    for(;masca < x;masca <<= 1){
    }
    return masca >> 1;

}

//prints a(int) in binary(32 bits)
void afisare(int a){
    int masca = 1 << 31;
    int sizeInt = 32;
    int i;  
    for(i=0 ;i < sizeInt; i++ ){
        if(masca & a)
            printf("1" );
        else
            printf("0");
        a <<=1;
    }
    printf("\n");
}

int main()
{
    int masca = 1 << 31;
    int N;
    int cN;
    //pb1
    printf("N=");
    scanf("%d", &N);
    printf("Cea mai mare putere a lui 2 ce intra in N este %d\n", maxPower2(N));
    cN = N;
    //pb 2
    /*
    1000000 0000000 0000000 0000000 - masca
    1010000 0000000 0000000 0000000 - 5
    0101111 0000000 0000000 0000000 - comp
    */

    //shows the complement of N in binary
    afisare(N);
    afisare(masca);
    int cont = 0;
    while( (masca & cN) == 0) 
    {
        cN <<= 1;
        cont++;
    }
    printf("%d\n", cont);
    afisare(cN);
    cN = ~cN;
    cN >>= cont;
    afisare(cN);
    printf("%d\n",cN);


    return 0; 
}