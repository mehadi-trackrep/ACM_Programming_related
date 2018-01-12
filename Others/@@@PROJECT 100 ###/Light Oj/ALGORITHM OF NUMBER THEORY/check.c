#include <stdbool.h>
int N = 29;
bool isPrime( int i ) {
    int j;
    for( j = 2; j < i; j++ ) {
    if( i % j == 0 ) // i is divisible by j, so i is not a prime
    return false;
    }
    // No integer less than i, divides i, so, i is a prime
    return true;
}
int main() {
    int i;
    for( i = 2; i <= N; i++ ) {
    if( isPrime(i) == true )
    printf("%d ", i);
    }
    return 0;
}
