#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l,n,x,i,j;
    char str[100000],s[100000];
    scanf("%lld %lld",&l,&n);
    x=n;
    if(l==1 && n<10)
        printf("%lld %lld\n",n,n);
    else if((l>1 && n==0)||(l==1 && n>9))
        printf("-1 -1\n");
    else
    {
        j=0;
        for(i=1;i<=l;i++)
        {
            if(x>8)
            {
                str[j]='9';
                x=x-9;
                j++;
            }
            else if(x<9)
            {
                str[j]=x+48;
                x=0;
                j++;
            }
        }
        if(x!=0)
            printf("-1 -1\n");
        else
        {
            strcpy(s,str);
            reverse(s,s+j);
            if(s[0]=='0')
            {
                for(i=0;i<j;i++)
                {
                    if(s[i]!='0')
                    {
                        s[i]=(long long)(s[i])-1;
                        s[0]='1';
                        break;
                    }
                }
            }
            printf("%s %s\n",s,str);
        }
    }
}
