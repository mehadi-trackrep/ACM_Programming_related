#include <stdio.h>
int main()
{
    unsigned long long n,i,sum;
    int t,count;

    while(scanf("%d",&t) == 1){ /// problem :
        while(t >= 1){

            scanf("%llu",&n);  /// evabe korle TLE khete hobe

            sum = 0;
            count = 0;

            for(i = 1;;i++){
                sum += i;
                if(sum <= n)
                    count++;
                else
                    break;
            }

            printf("%d\n",count);

            t--;
        }
    }

    return 0;
}

