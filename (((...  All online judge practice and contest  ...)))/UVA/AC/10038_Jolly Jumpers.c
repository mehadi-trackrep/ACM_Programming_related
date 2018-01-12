#include <stdio.h>
int main()
{
    int i,j,ck,n,num[3010],ara[3010],d;

    while(scanf("%d",&n) == 1){

        for(i = 0;i < n;i++)
            scanf("%d",&num[i]);

        for(i = 0;i < n-1;i++){

            ara[i] = num[i] - num[i+1];

            if(ara[i] < 0)
                ara[i] *= (-1);
        }

        for(i = 0;i < n-1;i++){
            for(j = i;j < n-1;j++){
                if(ara[i] > ara[j]){
                    ara[i] = ara[i]^ara[j];
                    ara[j] = ara[i]^ara[j];
                    ara[i] = ara[i]^ara[j];
                }
            }
        }

        ck = 1;

        for(i = 0;i < n-2;i++){
            d = ara[i+1] - ara[i];
            if(d == 1)
                continue;
            else{
                ck = 0;
                printf("Not jolly\n");
                break;
            }
        }

        if(ck != 0)
            printf("Jolly\n");
    }

    return 0;
}
