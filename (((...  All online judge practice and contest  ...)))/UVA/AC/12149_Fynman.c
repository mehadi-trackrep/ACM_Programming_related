#include <stdio.h>
int main()
{
    int N,i;
    unsigned long long sum;

    while(scanf("%d",&N) && N != 0)
    {

        sum = 0;

        for(i = 1;i <= N;i++)
        {
            sum += i*i;
        }

        printf("%llu\n",sum);

    }

    return 0;
}
