#include <stdio.h>
int main()
{
    long n,s,d,i;

    while(scanf("%ld",&n) == 1){
        for(i = 0;i < n;i++){
            scanf("%ld%ld",&s,&d);

            if(s < d || (s-d)%2 == 1){
                printf("impossible\n");
                continue;
            }
            printf("%ld %ld\n",(s+d)/2,(s-d)/2);
        }
    }

    return 0;
}
