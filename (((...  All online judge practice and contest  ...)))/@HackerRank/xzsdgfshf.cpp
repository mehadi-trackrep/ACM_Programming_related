#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 1000000000
#define mx 20000000
int casio=1,n;
int vis[mx],dp[mx];
int dp_func(int sum)
{
    if(sum==0)return 0;
    if(sum<0)return 100000000;
    if(vis[sum]==casio)return dp[sum];
    int ret=100000000;
    ret=min(ret,dp_func(sum-(n-1)*1)+1);
    ret=min(ret,dp_func(sum-(n-1)*2)+1);
    ret=min(ret,dp_func(sum-(n-1)*5)+1);
    vis[sum]=casio;
    return dp[sum]=ret;
}
int main()
{
    int i,j,k,l,m,ts;
    cin>>ts;
    while(ts--){
    scanf("%d",&n);
    int ma=0,sum=0;

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&l);
        ma=max(ma,l);
        sum+=l;
    }
    casio++;
    int ret=100000000;
    for(int i=ma;i<=ma+30;i++)
    {
        ret=min(ret,dp_func((i*n)-sum));
     //   if(ret==1)cout<<i<<endl;
    }
    printf("%d\n",ret);
}


}
