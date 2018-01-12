#include <stdio.h>
int main()
{
    int n,i,max;
    int ara[99999];

    while(scanf("%d",&n) && n!=0)   ///AC
    {
        if(n % 2 == 0)
            n -= 1;
        ara[0] = 0;
        ara[1] = 1;

        max = 1;

        for(i = 2;i <= n;i++){
            if(i % 2 == 0){
                ara[i] = ara[i/2];
                if(ara[i] > max)
                    max = ara[i];
            }
            else if(i % 2 != 0){
                ara[i] = ara[i/2]+ara[i/2 + 1];
                if(ara[i] > max)
                    max = ara[i];
            }
        }

        printf("%d\n",max);
    }

    return 0;
}
