#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 1000000000

int chocolates[10005];
ll dp[10000005];
int n,m;

ll rec(int cap){
    if(cap == 0) return 0;

    if(dp[cap] != -1) return dp[cap];

    if(cap-5>=0) return dp[cap] = rec(cap-5) + 1;
    if(cap-2>=0) return dp[cap] = rec(cap-2) + 1;

    return dp[cap] = rec(cap-1) + 1;
}

int main(){

    int tc,mn;

    cin >> tc;

    while(tc--){

        cin >> n;
        mn = INF;

        for(int i=0; i<n; i++)
        {
            cin >> chocolates[i];
            mn = min(mn, chocolates[i]);
        }
        cerr << "mn: " << mn << endl;
        ll ans=INF,cnt;
        int val;
        memset(dp, -1, sizeof(dp));

        for(int k=0; k<3; k++){
            cnt = 0;

            if(k == 0) val = 1;
            else if(k == 1) val = 2;
            else val = 5;

            for(int i=0; i<n; i++) cnt += rec(chocolates[i]-mn+val);
            cerr <<  " cnt: " << cnt << endl;
            ans = min(ans, cnt);
        }

        cout << ans << endl;

    }

    return 0;
}

/**

4 3
1 2 3

**/

