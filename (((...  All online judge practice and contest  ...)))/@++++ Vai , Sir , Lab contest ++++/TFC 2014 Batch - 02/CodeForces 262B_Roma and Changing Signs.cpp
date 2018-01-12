#include <bits/stdc++.h>
using namespace std;

#define ll  long long

ll a[100005];

int main()      ///AC
{
    int n,k;
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i] < 0 && k)
        {
            a[i] = -a[i];
            k--;
        }
    }

    sort(a,a+n);

    if(k&1) a[0] = -a[0];
    ll sum = 0;
    for(int i=0; i<n; i++) sum += a[i];
    cout << sum << endl;
}
