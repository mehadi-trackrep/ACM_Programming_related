#include <stdio.h>
int main()
{
    long long n,pn,t,i,sum,c = 1;

    scanf("%lld",&t);

    while( t >= 1){

        scanf("%lld",&n);

        pn = n;

        while(1){

            sum = 0;

            while(n >= 1){
                sum += (n%10)*(n%10);
                n /= 10;
            }

            if(sum == 1){
                printf("Case #%lld: %lld is a Happy number.\n",c++,pn);
                break;
            }

            else if(sum < 10){
                printf("Case #%lld: %lld is an Unhappy number.\n",c++,pn);
                break;
            }

            n = sum;
        }

        t--;
    }

    return 0;
}
