#include <bits/stdc++.h>
using namespace std;

int m,n;
int dp[11][11];
int digits[11];


int dp_func(int cnt, int prev_digit){
    if(cnt>n) return 1;
    if(dp[cnt][prev_digit] != -1) return dp[cnt][prev_digit];

    int ret=0;

    for(int i=1; i<=m; i++){
        if(prev_digit == 0 || abs(digits[i]-prev_digit) <= 2) ret += dp_func(cnt+1, digits[i]);
    }
    return dp[cnt][prev_digit] = ret;
}

int main()      ///AC
{
    int tc,ans;
    cin >> tc;

    for(int c=1; c<=tc; c++){
        cin >> m >> n;
        for(int i=1; i<=m; i++) cin >> digits[i];

        memset(dp, -1, sizeof(dp));

        ans = dp_func(1,0);
        printf("Case %d: %d\n",c,ans);
    }

    return 0;
}
