#include <stdio.h>
int main()
{
    long long a,b,sum; /// what is 32 bit adder ///

    while( scanf("%lld%lld",&a,&b) == 2 ){

        sum = a ^ b;
        printf("%lld\n",sum);

    }

    return 0;
}

