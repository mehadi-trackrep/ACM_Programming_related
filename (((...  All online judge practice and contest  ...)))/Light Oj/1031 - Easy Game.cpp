#include <bits/stdc++.h>
using namespace std;

int ara[100005];
int vis[100005];
int dp[100005];
int n;

int dp_func(int pos){
    if(pos > n) return 0;
    if(vis[pos]) return dp[pos];

    int ret1,ret2,ret=INT_MIN;

    ret1 = ara[pos]+dp_func(pos+1); /// false(0) means immediate adjacent position already took
    ret2 = dp_func(pos+1);
    ret = max(ret1, ret2);
    vis[pos] = 1;
    return dp[pos] = ret;
}


int main()
{
    int t;
    cin >> t;
    for(int c=1; c<=t; c++){
        cin >> n;
        for(int i=1; i<=n; i++) cin >> ara[i];

        int ans = INT_MIN,sum=0;

        memset(vis, 0, sizeof(vis));

        for(int i=1; i<=n; i++){
            sum += ara[i];
            if(sum>ans) ans = sum;
            if(sum<0) sum = 0;
        }

        printf("Case %d: %d\n",c,ans);
    }
    return 0;
}

