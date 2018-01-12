#include<stdio.h>
#include<string.h>
int main()
{
    char str[4];
    long long X=0,n,i,l,j,count;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",str);
        l=strlen(str);
        count=0;
        for(j=0;j<l;j++)
        {
            if(str[j]=='+')
                count++;
        }
        if(count>0)
        {
            X=X+1;
        }
        else
            X=X-1;
    }
    printf("%lld\n",X);
}
