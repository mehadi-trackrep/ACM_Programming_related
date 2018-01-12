#include <stdio.h>
long long rev(long long a){

    long long p,q = 0;

    while(a >= 1){
        p = (a % 10) + q;
        q = p * 10;
        a /= 10;
    }

    return p;
}

int main()
{
    long long n,i,count;
    long long x,c;

    scanf("%lld",&n);

    while(n >= 1){

        scanf("%lld",&x);
        count = 0;
        c = rev(x);

        while(1){

            x = x + c;
            c = rev(x);
            count++;
            if(x == c)
                break;
        }

        printf("%lld %lld\n",count,x);

        n--;
    }

    return 0;
}

