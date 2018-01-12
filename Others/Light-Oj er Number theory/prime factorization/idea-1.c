#include <stdio.h>
int List[128];  // saves the List
int listSize;   // saves the size of List
int prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
void primeFactorize( int n ) {
    int i;
    listSize = 0;   // Initially the List is empty, we denote that size = 0
    for(i = 0; prime[i] <= n; i++ ) {
        if( n % prime[i] == 0 ) { // So, n is a multiple of the ith prime             // So, we continue dividing n by prime[i] as long as possible
            while( n % prime[i] == 0 ) {
                n /= prime[i]; // we have divided n by prime[i]
                List[listSize] = prime[i]; // added the ith prime in the list
                listSize++; // added a prime, so, size should be increased
            }
        }
    }

    return ;
}
int main() {
    int i;
    primeFactorize(40);
    for(i = 0; i < listSize; i++ ) // traverse the List array
        printf("%d ", List[i]);
    return 0;
}
