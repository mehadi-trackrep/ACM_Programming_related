#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()      ///AC
{
    ll n;
    while(cin >> n)
    {
        ll p = 0;
        ll x = n;

        while(x)
        {
            x /= 10;
            p++;
        }

        ll ans = p*(n+1);
        ll k=1;

        cerr << "-->ans " << ans << endl;

        for(int i=0; i<p-1; i++)
        {
            k *= 10;
            k++;
            //ans -= k;
            cerr << k << endl;
        }

        ans -= k;

        cout << ans << endl;
    }

    return 0;
}

/**


1000000000

**/
