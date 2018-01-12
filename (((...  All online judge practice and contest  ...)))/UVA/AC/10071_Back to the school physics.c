#include <stdio.h>
int main()
{
    long int v,t,d;

    while(scanf("%ld%ld",&v,&t) == 2){

        d = v*2*t;

        printf("%ld\n",d);
    }

    return 0;
}

