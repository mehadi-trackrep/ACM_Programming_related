







baki F,G,H,I,J,K,L,M,N no, gula de










aita G
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

















F
#include<stdio.h>
#include<math.h>
int main()
{
    long long T,i,cnt1,cnt2,m,cnt,n,r,j,k,h;
    char arr[100];
    scanf("%lld",&T);
    for(k=1;k<=T;k++)
    {
        scanf("%lld",&n);
        r=0;
        cnt1=0;
        cnt2=0;
        for(i=0;n>0;i++)
        {
            if(n%2==1)
            {
                arr[i]='1';
                cnt1=cnt1+1;
            }
            else
                arr[i]='0';
            n=n/2;
        }
        arr[i]='\0';
        j=0;
        for(j=0;;j++)
        {
            if(arr[j]=='1')
            {
                while(arr[j]=='1')
                {
                    //printf("%lld\n",j);
                    arr[j]='0';
                    j++;
                }
                arr[j]='1';
                break;
            }
        }
        if(i==j)
            arr[j+1]='\0';
        else
            arr[i]='\0';
        for(i=0;arr[i]!='\0';i++)
        {
            if(arr[i]=='1')
            {
                cnt2++;
            }
            else
                continue;
        }
        cnt=cnt1-cnt2;
        for(h=0;h<cnt;h++)
        {
            arr[h]='1';
        }
        for(h=0;arr[h]!='\0';h++)
        {
            m=arr[h]-48;
            r=r+m*pow(2,h);
        }
        printf("Case %lld: %lld\n",k,r);
    }
}
