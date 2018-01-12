/// formula : 1/2(n*n + n + 2)
#include <stdio.h>
int main()
{
    long long n,i,res;

    while(scanf("%lld",&n)){

        if(n < 0)
            break;

        res = 0.5 * (n*n + n + 2);

        printf("%lld\n",res);
    }

    return 0;
}
