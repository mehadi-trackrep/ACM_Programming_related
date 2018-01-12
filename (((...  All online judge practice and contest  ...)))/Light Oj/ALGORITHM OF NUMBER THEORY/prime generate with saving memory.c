#include <stdio.h>
#include <math.h>
#define MAX 5000
int main()
{
    int size = MAX >> 1;
    int status[size+1];
    int i, j, sqrtN;
    for( i = 2; i <= MAX >> 1; i++ )
        status[i] = 0;
    sqrtN = (int)( sqrt((double)MAX) ); // have to check primes up to (sqrt(N))
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( status[i>>1] == 0 )
        {
            // so, i is a prime, so, discard all the multiples
            // j = i * i, because it’s the first number to be colored
            for( j = i * i; j <= MAX; j += i + i )
                status[j>>1] = 1; // status of the multiple is 1
        }
    }
    // print the primes
    printf("2 ");

    for( i = 3; i <= MAX; i += 2 )
    {
        if( status[i>>1] == 0 )
            printf("%d ", i);
    }
    return 0;
}

