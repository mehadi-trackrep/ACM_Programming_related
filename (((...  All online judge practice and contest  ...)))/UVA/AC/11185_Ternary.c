#include <stdio.h>
int main()
{

    long long n,i,j,ara[100];

    while(scanf("%lld",&n)){

        if(n < 0)
            break;
        if(n == 0){
            printf("0\n");
            continue;
        }

        for(i = 0;n != 0;i++){
            ara[i] = n - 3*(n/3);
            n /= 3;
        }

        for(j = i-1;j >= 0;j--)
            printf("%lld",ara[j]);

        printf("\n");
    }

    return 0;
}
