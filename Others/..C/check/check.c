#include <stdio.h>
int main()
{
    int n,i,x;
    unsigned long long multi;

    while(scanf("%d",&n) == 1){

        multi = 1;
        x = n;

        for(i = 0;i < x;i++){
            multi = multi * n;
            n--;
        }

        if(multi < 10000)
            printf("Underflow\n");

        else if(multi > 6227020800)
            printf("Overflow\n");

        else
            printf("%llu\n",multi);
    }

    return 0;
}


