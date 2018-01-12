#include <bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    ll e,o;
    int tc;
    cin >> tc;
    while(tc--)     ///AC
    {
        cin >> e >> o;
        ll s,x;
        s = e+o;
        x = s/5; /// Therefore , e/o must be 2*x/3*x , so , e+o == x*5 ; so , we have to know the value of x , and ans = abs(e-2*x) or, ans = abs(o-3*x) ...
        if(x*5 != s) printf("-1\n");
        else
        {
            ll ans;
            ans = abs(e-2*x);
            cout << ans << endl;
        }
    }
}

