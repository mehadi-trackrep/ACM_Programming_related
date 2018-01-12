/// quick sort operations
#include <stdio.h>
#include <string.h>
int main()
{
    long long n,i,j,count,ara[50005];
    //char ara[500005],temp;

    while(scanf("%lld",&n)){

        if(n == 0)
            break;

        for(i = 0;i < n;i++){

            scanf("%lld",&ara[i]);  /// problem , running
        }

        count = 0;

        for(i = 0 ; i < n ; i++){

            for(j = i+1 ; j < n ;j++){

                if( ara[i] > ara[j] ){

                    ara[i] = ara[i] ^ ara[j];
                    ara[j] = ara[i] ^ ara[j];
                    ara[i] = ara[i] ^ ara[j];

                    count++;
                }
            }
        }

        printf("%lld\n",count);
    }

    return 0;
}
