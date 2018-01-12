#include <stdio.h>
int main()
{
    int n,h,i,sum,move,c = 0;;
    int ara[55];

    while(scanf("%d",&n))
    {
        if(n == 0)
            break;

        sum = 0;
        move  = 0;

        for(i = 0;i < n;i++)
        {
            scanf("%d",&ara[i]);
            sum += ara[i];
        }

        h = sum/n;

        for(i = 0;i < n;i++)
        {
            if(ara[i] > h)
            {
                move += ara[i] - h;
            }
        }

        printf("Set #%d\n",++c);
        printf("The minimum number of moves is %d.\n\n",move);
    }

    return 0;
}
