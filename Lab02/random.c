#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand((unsigned)time(NULL));
    int random = rand();
    printf("random = %d\n", random);
    return 0;
}