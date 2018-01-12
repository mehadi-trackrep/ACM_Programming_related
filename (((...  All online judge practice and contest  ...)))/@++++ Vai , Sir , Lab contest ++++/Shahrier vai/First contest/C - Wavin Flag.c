#include <stdio.h>
int main()
{
    long long i,n,total,a,b,c;
    scanf("%lld",&n);
    if(n == 1 || n == 2)
       printf("2\n");
    else{
        a = 2,b = 2;
        for(i = 2;i < n;i++){
            c = a+b;
            a = b;
            b = c;
        }
        printf("%lld\n",c);
    }

    return 0;
}
