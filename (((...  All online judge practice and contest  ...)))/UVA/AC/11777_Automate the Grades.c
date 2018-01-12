        ///input:
/*
3
15 18 25 8 15 17 12
20 20 30 10 20 20 20
20 20 30 10 18 0 0
*/
#include <stdio.h>
int main()
{
    int t,ara[10],i,avg,mid,max,c = 1,sum;
    scanf("%d",&t);
    while(t--){
        for(i = 0;i < 7;i++)
            scanf("%d",&ara[i]);
        if(ara[4] >= ara[5] && ara[4] >= ara[6]){
            max = ara[4];
            if(ara[6] >= ara[5])
                mid = ara[6];
            else
                mid = ara[5];
        }
        if(ara[5] >= ara[6] && ara[5] >= ara[4]){
            max = ara[5];
            if(ara[6] >= ara[4])
                mid = ara[6];
            else
                mid = ara[4];
        }
        if(ara[6] >= ara[5] && ara[6] >= ara[4]){
            max = ara[6];
            if(ara[4] >= ara[5])
                mid = ara[4];
            else
                mid = ara[5];
        }
        avg = (mid+max)/2;
        sum = ara[0]+ara[1]+ara[2]+ara[3]+avg;
        if(sum >= 90)
            printf("Case %d: A\n",c++);
        if(sum >= 80 && sum < 90)
            printf("Case %d: B\n",c++);
        if(sum >= 70 && sum < 80)
            printf("Case %d: C\n",c++);
        if(sum >= 60 && sum < 70)
            printf("Case %d: D\n",c++);
        if(sum < 60)
            printf("Case %d: F\n",c++);
    }
    return 0;
}
