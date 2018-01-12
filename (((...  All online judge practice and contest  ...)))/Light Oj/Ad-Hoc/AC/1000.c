#include <stdio.h>
int main()
{
    int a,b,t,i,c;
    unsigned long int sum;

    while(scanf("%d",&t) == 1){
        c = 0;
        for(i = 0;i < t;i++){
            scanf("%d%d",&a,&b);
            sum = a+b;
            printf("Case %d: %lu\n",++c,sum);
        }
    }

    return 0;
}

