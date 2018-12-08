#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

string s;
ll l;

ll solve(){

    ll res = 0;
    ll ones = 1;
    for(ll i=l-1; i>=0; i--) {
        res += (s[i]-'0')*ones*(i+1) % mod;
        ones = (ones*10 + 1) % mod;  /// shob substring a s[i] char. ta (i+1) times thakbe.. and 1111..  number diye multiple korle shob gular sum paoa jay.
    }
    return res;
}

int main()
{
    cin >> s;
    l = s.size();

    ll ans = solve();

    cout << ans << endl;

    return 0;
}

