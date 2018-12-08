#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

string s;

int dp[200005];
int l;

int dp_func(int pos){
    if(pos<0) return 0;
    if(dp[pos] != -1) return dp[pos];

    int ret,ret1;

    ret = (s[pos]-'0') + dp_func(pos-1)*10;
    cerr << "--> ret: " << ret << endl;
    ret1 = dp_func(pos-1);
    cerr << "==> ret1: " << ret1 << endl;
    ret += ret1;

    return dp[pos] = ret%mod;
}

int main()
{
    cin >> s;
    l = s.size();

    memset(dp, -1, sizeof(dp));

    int ans = dp_func(l-1)%mod;

    cout << ans << endl;

    return 0;
}
