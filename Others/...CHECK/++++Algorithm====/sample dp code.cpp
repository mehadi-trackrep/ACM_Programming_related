#include <bits/stdc++.h>
using namespace std;

int ara[103];
int n;

int dp[105][105];

int rec(int x,int y,int th)
{
    if(th == n+1) return 0;
    if(dp[x][y] != -1) return dp[x][y];
    int ret1,ret2;
    ret1 = ara[x]*th + rec(x+1,y,th+1);
    ret2 = ara[y]*th + rec(x,y-1,th+1);
    return dp[x][y] = min(ret1,ret2);
}

int main()
{
    cin >> n;
    for(int i=0; i<n; i++) cin >> ara[i];
    memset(dp,-1,sizeof(dp));
    int ans = rec(0,n-1,1);
    cout << ans << endl;
}

/**


4
1 2 3 4

4
2 4 1 3


**/
