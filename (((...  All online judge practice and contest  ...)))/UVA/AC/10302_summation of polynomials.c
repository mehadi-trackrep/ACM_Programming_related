#include <stdio.h>
int main()
{
    unsigned long long i,n,sum;

    while(scanf("%llu",&n) == 1){

        sum = 0;

        sum = ((n*(n+1))/2) * ((n*(n+1))/2);

        printf("%llu\n",sum);
    }

    return 0;
}

