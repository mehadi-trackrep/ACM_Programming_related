
#include<stdio.h>
int main()
{
    long long T,n,i,l,j,count;
    char str[1000];
    scanf("%lld",&T);
    for(j=1;j<=T;j++)
    {
        scanf("%lld %s",&n,str);
        count=0;
        for(i=0;i<n;)
        {
            if(str[i]=='#')
                i++;
            else
            {
                count++;
                i=i+3;
            }
        }
        printf("Case %lld: %lld\n",j,count);
    }
}

