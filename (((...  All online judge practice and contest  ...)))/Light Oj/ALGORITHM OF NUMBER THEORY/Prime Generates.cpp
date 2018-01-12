#include <cstdio>
#include <cmath>
using namespace std;
#define MAX 100
int prime[26],p_cnt = 0;    /// V.V.I
int main()
{
    int size = MAX >> 1; /// MAX >> 1 means MAX/2;
    int status[size+1];
    int i, j, sqrtN;
    for( i = 1; i <= size; i++ )
        status[i] = 0;
    sqrtN = (int)( sqrt((double)MAX) ); /// have to check primes up to (sqrt(N))
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( status[i >> 1] == 0 )
        {
            /// so, i is a prime, so, discard all the multiples
            /// j = i * i, because it’s the first number to be colored
            for( j = i * i; j <= MAX; j += i + i )
                status[j >> 1] = 1; /// status of the multiple is 1
        }
    }
    ///prime array te prime gula insert kora...
    prime[p_cnt++] = 2;
    for( i = 3; i <= MAX; i += 2 )
    {
        if( status[i >> 1] == 0 )
            prime[p_cnt++] = i;
    }
    /// print the primes

    for( i = 0; i < p_cnt; i++ )
    {
        printf("%d ",prime[i]);
    }

    return 0;
}

