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


int main()      ///AC
{
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++) cin >> ara[i];

        int ans1 = INT_MIN,sum=0,ans2=INT_MIN;

        memset(vis, 0, sizeof(vis));

        for(int i=1; i<=n; i++){
            ans2 = max(ans2, ara[i]+dp_func(i+1));
            sum += ara[i];
            if(sum>ans1) ans1 = sum;
            if(sum<0) sum = 0;
        }

        cout << ans1 << " " << ans2 << endl;
    }
    return 0;
}
