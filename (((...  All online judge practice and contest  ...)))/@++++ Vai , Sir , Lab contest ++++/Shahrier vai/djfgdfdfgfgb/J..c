#include<stdio.h>
int main()
{
    long long T,a,b;
    scanf("%lld",&T);
    while(T--)
    {
        scanf("%lld %lld",&a,&b);
        if(b%a==0)
            printf("%lld %lld\n",a,b);
        else
            printf("-1\n");
    }
}
