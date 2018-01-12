#include <stdio.h>
int main()
{
    int t,n,ara[15],i,j,c = 1;

    while(scanf("%d",&t) == 1)
    {
        while(t >= 1){
            scanf("%d",&n);

            for(i = 0;i < n;i++)
                scanf("%d",&ara[i]);

            printf("Case %d: %d\n",c++,ara[n/2]);

            t--;
        }
    }

    return 0;
}
