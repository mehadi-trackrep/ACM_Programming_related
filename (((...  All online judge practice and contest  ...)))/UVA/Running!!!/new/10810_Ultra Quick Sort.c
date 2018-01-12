#include <stdio.h>
long long ara[500000];
int main()
{
    long long i,j,k,n,swap;

    while(scanf("%lld",&n) && n != 0){  /// TLE khaici

        for(i = 0 ; i < n ; i++)
            scanf("%lld",&ara[i]);

        swap = 0;

        for(i = 0 ; i < n ; i++){
            for(j = i+1 ; j < n ;j++){
                if(ara[i] > ara[j]){

                    ara[i] = ara[i] ^ ara[j];
                    ara[j] = ara[i] ^ ara[j];
                    ara[i] = ara[i] ^ ara[j];

                    swap++;
                }
            }
        }

        printf("%lld\n",swap);

    }

    return 0;
}
