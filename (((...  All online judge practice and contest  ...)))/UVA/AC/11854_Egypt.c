#include <stdio.h>
int main()
{
    int ara[5],i,j;
    long long sum;

    while(scanf("%d%d%d",&ara[0],&ara[1],&ara[2]))
    {
        if(ara[0] == 0 && ara[1] == 0 && ara[2] == 0)
            break;
        for(i = 0;i < 3;i++)
        {
            for(j = i+1;j < 3;j++){
                if(ara[i] > ara[j]){
                    ara[i] = ara[i]^ara[j];
                    ara[j] = ara[i]^ara[j];
                    ara[i] = ara[i]^ara[j];
                }
            }
        }

        sum = ara[0]*ara[0] + ara[1]*ara[1];

        if(sum == ara[2]*ara[2])
            printf("right\n");
        else
            printf("wrong\n");
    }

    return 0;
}
