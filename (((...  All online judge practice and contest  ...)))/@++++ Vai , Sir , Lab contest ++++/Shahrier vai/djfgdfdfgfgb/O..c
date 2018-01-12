#include<stdio.h>
int main()
{
    long long T,e,c,sum,count;
    scanf("%lld %lld",&e,&c);
    sum=e;
    count=0;
    while(sum>=c)
    {
        sum=sum-c+1;
        count++;
    }
    printf("%lld\n",count+e);
}

