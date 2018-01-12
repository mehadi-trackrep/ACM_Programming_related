#include <stdio.h>
int main()
{
    long long t,s,d,a,b;

    while(scanf("%lld",&t) == 1)
    {
        while(t >= 1)
        {
            scanf("%lld%lld",&s,&d);

            if(s >= d && (s+d)%2 == 0)
            {
                a = (s+d)/2;
                b = (s-d)/2;

                printf("%lld %lld\n",a,b);

            }

            else
                printf("impossible\n");

            t--;
        }
    }

    return 0;
}
