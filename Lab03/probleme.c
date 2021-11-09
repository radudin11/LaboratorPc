#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//suma divizorilor unui numar
int divSum(int x)
{
    int sum;
    for(int i = 2; i <= x/2; i++ ){
        if(x % i == 0)
            sum += i;
    }
    return sum;
}

int main()
{
    int N, sumMax = 0;
    for(int i = 2; i <= N; i++){
        
    }
}