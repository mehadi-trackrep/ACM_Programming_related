#include <stdio.h>
int main()
{
    int T,G,L,i,j;

    while(scanf("%d",&T) == 1)
    {
        while(T >= 1)
        {
            scanf("%d%d",&G,&L);

            if(L % G == 0)
                printf("%d %d\n",G,L);
            else
                printf("-1\n");


            T--;
        }
    }

    return 0;
}
