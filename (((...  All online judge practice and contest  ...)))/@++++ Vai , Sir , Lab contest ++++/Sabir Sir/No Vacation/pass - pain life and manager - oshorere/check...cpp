#include <bits/stdc++.h>

#define debug(x) cout << "> " << #x << " = " << x << endl;

using namespace std;

typedef long long ll;
typedef pair<ll, ll> ii;

int main() {

    int n;
    cin >> n;

    vector<ii> mp;

    for(int i = 0; i < n; ++i) {
        ll a, b;
        cin >> a >> b;
        mp.push_back({a, b});
    }

    sort(mp.begin(), mp.end());
    ll ans = -1;

    for(auto p : mp) {
        if(ans > p.second)
            ans = p.first;
        else
            ans = p.second;
    }
    cout << ans << "\n";
    return 0;
}
