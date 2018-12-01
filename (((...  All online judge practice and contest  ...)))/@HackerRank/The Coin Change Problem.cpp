#include <bits/stdc++.h>
using namespace std;

#define ll long long

int coins[55];
ll dp[51][255];
int n,m;

ll rec(int pos, int cap){
    if(pos >= m) return cap == 0;

    if(dp[pos][cap] != -1) return dp[pos][cap];

    ll ret1=0,ret2=0;

    if(cap>=coins[pos]){
        ret1 = rec(pos, cap-coins[pos]);
    }

    ret2 = rec(pos+1, cap);
    dp[pos][cap] = ret1 + ret2;

    return dp[pos][cap];
}

int main(){

    cin >> n >> m;

    for(int i=0; i<m; i++) cin >> coins[i];

    ll ans=0;

    memset(dp, -1, sizeof(dp));
    ans = rec(0,n);

    cout << ans << endl;

    return 0;
}

/**

4 3
1 2 3

**/

