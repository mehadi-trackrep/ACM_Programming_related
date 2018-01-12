#include <stdio.h>
int divisors(int x) {
    int limit = x,i;
    int numberOfDivisors = 0;

    if (x == 1) return 1;

    for (i = 1; i < limit; ++i) {
        if (x % i == 0) {
            limit = x / i;
            if (limit != i) {
                numberOfDivisors++;
            }
            numberOfDivisors++;
        }
    }

    return numberOfDivisors;
}
int main()
{
    int n;

    while(scanf("%d",&n) == 1){
        printf("%d\n",divisors(n));
    }

    return 0;
}
