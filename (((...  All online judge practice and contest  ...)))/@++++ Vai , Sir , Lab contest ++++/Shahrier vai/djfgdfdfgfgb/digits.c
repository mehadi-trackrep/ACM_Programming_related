#include <stdio.h>
int prim(long long n)
{
    long long i,count=0;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if((count==0)&&(n>10))
        return 1;
    else
        return 0;
}
int main()
{
    long long n,i,j,arr[100000],k,s,num,m;
    scanf("%lld",&n);
    if(prim(n)==1)
        printf("-1\n");
    else if(n==0)
        printf("%lld\n",n+10);
    else if(n>=1 &&n<=9)
        printf("%lld\n",n);
    else
    {
        m=n;
        j=0;
        for(i=9;i>1;i--)
        {
            while(n%i==0)
            {
                arr[j++]=i;
                n=n/i;
            }
        }
        if((n<10)&&(n!=1))
             arr[j++]=n;
        num=1;
        for(i=0;i<j;i++)
        {
            num=num*arr[i];
        }
        if(num!=m)
            printf("-1\n");
        else
        {
        for(i=0;i<j;i++)
        {
            for(k=i+1;k<j;k++)
            {
                if(arr[i]>arr[k])
                {
                    s=arr[i];
                    arr[i]=arr[k];
                    arr[k]=s;
                }
            }
        }
        for(i=0;i<j;i++)
            printf("%lld",arr[i]);
        printf("\n");
        }

    }
}
