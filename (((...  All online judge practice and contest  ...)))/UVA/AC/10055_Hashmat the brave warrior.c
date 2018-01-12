#include <stdio.h>
int main()
{
    long long int n1,n2,d;

    while(scanf("%lld%lld",&n1,&n2) == 2){

        if(n1 > n2)
            d = n1 - n2;
        else
            d = n2 - n1;

        printf("%lld\n",d);
    }

    return 0;
}

