#include <stdio.h>
#include <math.h>
long long check_number_of_divisors(long long n);
int main()
{
    long long L,H,P,j,k;
    long long N,i,count,max_count;

    while(scanf("%lld",&N) == 1){

        for(i = 1;i <= N;i++){

            scanf("%lld%lld",&L,&H);

            max_count = 0;
            count = 0;

            for(j = L;j <= H;j++){
                count = check_number_of_divisors(j);
                if(count > max_count){
                    P = j;
                    max_count = count;
                }
            }

            printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",L,H,P,max_count);
        }
    }

    return 0;
}

long long check_number_of_divisors(long long n)
{

    long long i,count = 0;

    for(i = 1;i*i<= n;i++){
        if(n % i == 0)
            count++;
    }

    if((double)sqrt(n) - (int)sqrt(n) == 0)
        return 2*count-1;
    else
        return 2*count;
}
