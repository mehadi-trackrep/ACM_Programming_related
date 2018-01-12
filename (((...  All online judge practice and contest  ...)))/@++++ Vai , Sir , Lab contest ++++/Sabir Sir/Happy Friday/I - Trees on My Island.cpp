#include <bits/stdc++.h>
using namespace std;

#define mx 10000
#define ll long long

ll x[mx];
ll y[mx];

ll N;

ll AREA()      /// area = 1/2 ( (x1*y2 + x2*y3 + ...) - (y1*x2 + y2*x3 + ... ) )
{
    double ans;
    double first = 0,second = 0;        ///AC

    for(int i=1; i<=N; i++)
    {
        if(i == N)
            first += (x[i]*y[1]);
        else    first += (x[i]*y[i+1]);     /// x1*y2 + x2*y3 + ...
    }

    for(int i=1; i<=N; i++)
    {
        if(i == N)
            second += (y[i]*x[1]);
        else    second += (y[i]*x[i+1]);     /// y1*x2 + y2*x3 + ...    , just x er jagay y and y er jagay x
    }

    ans = (0.5)*(first - second);

    //cerr << "first: " << first << endl;
   //cerr << "second: " << second << endl;
    //cerr << "area: " << ans << endl;

    return (ll)fabs(ans);
}

int gcd(ll a,ll b)
{
    if(b == 0) return a;
    return gcd(b,a%b);
}

int total_boundary_point_b()
{
            /// if polygon tir N ti vertex(konar point gula) thake , taile polygon tir N ti edge (bahu) o ace  ...

    ll total = 0;

    for(int i=1; i<=N; i++) /// gcd ber korle ekti edge a total integer point number paoa jay
    {
        int a,b;

        if(i == N)
        {
            a = fabs(y[i]-y[1]);
            b = fabs(x[i]-x[1]);
        }
        else
        {
            a = fabs(y[i]-y[i+1]);
            b = fabs(x[i]-x[i+1]);
        }

        //cerr << "-->a : " << a << " b: " << b << endl;

        ll val = gcd(a,b);

        //printf("gcd of %d and %d is %d: \n",a,b,val);

        total += (val-1);  /// vertex bade total body te integer point number ...
    }

    //cerr << "-->total: " << total << endl;

    total += N; /// ekhon vertex shoho total body te integer point number ...

    return total;
}

int main()
{
    int tcas;

    scanf("%d",&tcas);

    for(int cas=1; cas<=tcas; cas++)
    {
        scanf("%lld",&N);

        for(int i=1; i<=N; i++)
        {
            scanf("%lld%lld",&x[i],&y[i]);
        }

        ll a = AREA();

        ll b = total_boundary_point_b();   /// pick's theorem : A = (1/2)b + i - 1;

        ll i = a - b/2 + 1;

        printf("Case %d: %lld\n",cas,i);
    }

    return 0;
}


/*

1
9
1 2
2 1
4 1
4 3
6 2
6 4
4 5
1 5
2 3


1
6
-3 -2
-1 4
6 1
3 10
-4 9
-3 -2

*/
