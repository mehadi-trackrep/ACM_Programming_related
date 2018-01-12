#include <stdio.h>
int main()
{

    long long i,a,b,c,sum;

    a = 0;
    b = 1;
    sum = 0;

    for(i = 0;sum <= 4000000;i++){
        c = a + b;
        a = b;
        b = c;
        if(c % 2 == 0)
            sum += c;
    }

    printf("%lld",sum);

    return 0;
}
