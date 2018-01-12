#include<bits/stdc++.h>
using namespace std;
long long n,m,q,arr[3000][3000],a[3000],cnt,R,k,x,y,i,j;
int main()
{
    scanf("%lld %lld %lld",&n,&m,&q);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            scanf("%lld",&arr[i][j]);
        a[i]=0;
        cnt=0;
        for(k=1;k<=m;k++)
        {
            if(arr[i][k]==1)
                cnt++;
            else
                cnt=0;
            a[i]=max(a[i],cnt);
        }
    }
    for(i=1;i<=q;i++)
    {
        scanf("%lld %lld",&x,&y);
        if(arr[x][y]==1)
            arr[x][y]=0;
        else if(arr[x][y]==0)
            arr[x][y]=1;
        a[x]=0;
        cnt=0;
        for(k=1;k<=m;k++)
        {

            if(arr[x][k]==1)
                cnt++;
            else
                cnt=0;
            a[x]=max(a[x],cnt);
        }
        R=0;
        for(k=1;k<=n;k++)
            R=max(R,a[k]);
        printf("%lld\n",R);
    }
}
