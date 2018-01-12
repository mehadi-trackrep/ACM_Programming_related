#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

int N = 5000, status[2501];
int prime[2501],p_cnt = 0;
int List[128];  // saves the List
int listSize;   // saves the size of List

void primeFactorize( int n ) {  /// baki ace...
    listSize = 0;   // Initially the List is empty, we denote that size = 0
    int sqrtN = int( sqrt(n) ); // find the sqrt of the number
    for( int i = 0; prime[i] <= sqrtN; i++ ) { // we check up to the sqrt
        if( n % prime[i] == 0 ) { // n is multiple of prime[i]
            // So, we continue dividing n by prime[i] as long as possible
            while( n % prime[i] == 0 ) {
            n /= prime[i]; // we have divided n by prime[i]
            List[listSize] = prime[i]; // added the ith prime in the list
            listSize++; // added a prime, so, size should be increased
            }
            // we can add some optimization by updating sqrtN here, since n
            // is decreased. think why it's important and how it can be added
        }
    }
    if( n > 1 ) {
    // n is greater than 1, so we are sure that this n is a prime
    List[listSize] = n; // added n (the prime) in the list
    listSize++; // increased the size of the list
    }
}

void seive()
{
    int i, j, sqrtN;
    prime[p_cnt++] = 2;
    for( i = 2; i <= N >> 1; i++ )
        status[i] = 0;
    sqrtN = (int)( sqrt((double)N) );
    for( i = 3; i <= sqrtN; i += 2 ) {
        if( status[i>>1] == 0 ) {
        prime[p_cnt++] = i;
        for( j = i * i; j <= N; j += i + i )
            status[j>>1] = 1;
        }
    }
}


int main() {

    seive();
    primeFactorize( 114 );
    for( int i = 0; i < listSize; i++ ) // traverse the List array
    printf("%d ", List[i]);
    return 0;
}
