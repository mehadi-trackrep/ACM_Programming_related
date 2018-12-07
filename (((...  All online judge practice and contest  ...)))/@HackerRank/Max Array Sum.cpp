#include <bits/stdc++.h>
using namespace std;

#define sz 100005

int n;
int vis[sz][2];
int ara[sz];
int dp[sz][2];

int dp_func(int pos, int ck){
    if(pos > n) return 0;
    if(vis[pos][ck]) return dp[pos][ck];

    int ret = INT_MIN;

    if(ck == 0) ret = ara[pos] + dp_func(pos+1, 1); /// false(0) means immediate adjacent position already took
    ret = max(ret, dp_func(pos+1, 0));
    vis[pos][ck] = 1;
    return dp[pos][ck] = ret;
}

int main(){                 ///AC
    int mx = INT_MIN;
    memset(vis, 0, sizeof(vis));
    scanf("%d",&n);
    for(int i=1; i<=n; i++) scanf("%d",&ara[i]);

    mx = max(mx, dp_func(1,0));

    printf("%d\n",mx);

    return 0;
}
