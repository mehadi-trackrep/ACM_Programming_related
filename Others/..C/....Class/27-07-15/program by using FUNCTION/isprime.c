#include <stdio.h>

void isprime()
{
    int n,i,ch,c = 1;
    while(scanf("%d",&n) == 1){
        if(n == 1){
            printf("Not prime\n");   /// v.v.i code
            continue;
        }
        if(n == 2){
            printf("prime\n");
            continue;
        }
        if(n%2 == 0){
            printf("Not prime\n");
            continue;
        }

        ch = 1;

        for(i = 3;i*i <= n;i += 2){
            if(n%i==0){
                printf("Not prime\n");
                ch = 0;
                break;
            }
        }
        if(ch != 0)
            printf("prime\n");

    }
}

int main()
{
    int n;
    isprime();

    return 0;
}
