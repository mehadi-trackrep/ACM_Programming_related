#include <stdio.h>
int main()
{
    long long i,sum;
    long long N;

    printf("PERFECTION OUTPUT\n");

    while(scanf("%lld",&N)){

        if(N == 0)
            break;

        sum = 0;

        for(i = 1;i <= N/2;i++){

            if(N % i == 0)
                sum += i;
        }

           /* ch = list[j];

            for(i = 0;;i++){
                ch /= 10;
                count++;
                if(list[j] == 0)
                    break;
            }

            for(i = count;i < 5;i++)
                printf(" ");*/

        if(sum == N)
            printf("%5lld  PERFECT\n",N);

        else if(sum < N)
            printf("%5lld  DEFICIENT\n",N);

        else
            printf("%5lld  ABUNDANT\n",N);

    }

    printf("END OF OUTPUT");

    return 0;
}

