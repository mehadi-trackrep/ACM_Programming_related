#include <stdio.h>
int main()
{
    unsigned long n,i,sum;

    while(scanf("%lu",&n)){

        if(n == 0)
            break;

        sum = n;

        while(sum >= 10){

            sum = 0;

            while(n != 0){

                sum = sum + (n % 10);
                n /= 10;

            }

            n = sum;
        }

        printf("%lu\n",sum);
    }

    return 0;
}
