#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wait(int seconds){
  clock_t endwait;
  endwait = clock () + seconds * CLOCKS_PER_SEC ;
  while (clock() < endwait) {}
}

int main()
{   
    /*
    //pb2
    //verificare nr par
    srand((unsigned)time(NULL));
    int random = rand();

    //mod 1
    printf("numarul tau este = %d\n", random);
    if(random % 2){
        printf("numarul tau este impar\n");

    } else printf("numarul tau este par\n");
    return 0; 

    //mod2

    //..
    */
    //pb3
    //afisare 321
    /*
    for (int i = 3; i > 0; i--){
        printf("%d\n", i);
        wait(1);
    }
    printf("Start");
    */

    //pb4
    //laturi triunghi
    /*
    int a,b,c;
    printf("Introduceti 3 numere: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a + b < c || a + c < b || b + c < a)
    {
        printf("\nNu poate sa fie triunghi!\n");

    } else printf("\nPoate sa fie triunghi!\n");
    */
   //pb5
   //numere aleatoare

    srand((unsigned) time(NULL));
    int n1 = rand();
    int n2 = rand();
    int n3 = rand();
    int n4 = rand();
    int n5 = rand();
    printf("Valorilea aleatoare sunt:\nn1 = %d\nn2 = %d\nn3 = %d\nn4 = %d\nn5 = %d\n", n1,n2,n3,n4,n5 );
    srand ((unsigned)0x1234);
    n1 = rand();
    n2 = rand();
    n3 = rand();
    n4 = rand();
    n5 = rand();
    printf("Valorilea mai putin aleatoare sunt:\nn1 = %d\nn2 = %d\nn3 = %d\nn4 = %d\nn5 = %d\n", n1,n2,n3,n4,n5 );

    return 0;

}