#include <stdio.h>
int main()
{
    int prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    int fact[26],i,j,n,count1,x,ck,count2 = 25;

    while(scanf("%d",&n) && n != 0)
    {

        memset(fact,0,sizeof(fact));

        count2 = 0;

        for(i = n;i >= 2;i--){
            x = i;
            for(j = 0;j < 25;j++){
                count1 = 0;
                ck = 0;
                while(x % prime[j] == 0){
                    x /= prime[j];
                    count1++;
                    ck = 1;
                }
                if(ck == 1){
                    fact[j] += count1;
                    count2++;
                }
            }
        }
        if(n == 100)
            printf("%d! =",n);
        else if(n >= 10)
            printf(" %d! =",n);
        else
            printf("  %d! =",n);

        for(i = 0;fact[i] != 0 && i < 25;i++){
            if(i == 15)
                printf("\n      ");
            if(fact[i] >= 10)
                printf(" %d",fact[i]);
            else
                printf("  %d",fact[i]);
        }
        printf("\n");
    }

    return 0;
}
