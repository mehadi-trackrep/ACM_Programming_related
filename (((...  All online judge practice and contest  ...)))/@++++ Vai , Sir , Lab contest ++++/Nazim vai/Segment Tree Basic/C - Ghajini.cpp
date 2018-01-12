
/// i to j range er moddhe sum ber korar code... ///
/// i to j range er moddhe sum ber korar code... ///
/// i to j range er moddhe sum ber korar code... ///
/// i to j range er moddhe sum ber korar code... ///
/// i to j range er moddhe sum ber korar code... ///    :-

#include <bits/stdc++.h>
using namespace std;

#define mx 100001
#define ll long long

ll ara[mx];

struct info
{
    ll min_val,max_val;
}tree[mx * 3];

void build(ll node, ll b, ll e)             ///AC
{
    if (b == e) {
        tree[node].min_val = ara[b];
        tree[node].max_val = ara[b];
        return;
    }

    ll Left = node << 1;
    ll Right = (node << 1) + 1;

    ll mid = (b + e) >> 1;

    build(Left, b, mid);
    build(Right, mid + 1, e);

    tree[node].min_val = min( tree[Left].min_val , tree[Right].min_val );
    tree[node].max_val = max( tree[Left].max_val , tree[Right].max_val );

    //cerr << "--> node: " << tree[node] << endl;
}

ll query_max(ll node, ll b, ll e, ll i, ll j)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j){
        //cerr << "--> tree[node]: " << tree[node] << endl;
        return tree[node].max_val;
    }

    ll Left = node << 1;
    ll Right = (node << 1) + 1;

    ll mid = (b + e) >> 1;

    ll p1 = query_max(Left, b, mid, i, j);
    ll p2 = query_max(Right, mid + 1, e, i, j);

    return max(p1,p2);
}


ll query_min(ll node, ll b, ll e, ll i, ll j)
{
    if (i > e || j < b)
        return mx;
    if (b >= i && e <= j)
        return tree[node].min_val;

    ll Left = node << 1;
    ll Right = (node << 1) + 1;

    ll mid = (b + e) >> 1;

    ll p1 = query_min(Left, b, mid, i, j);
    ll p2 = query_min(Right, mid + 1, e, i, j);

    return min(p1,p2);
}



int main()
{

    int tcas;

    scanf("%d",&tcas);

    for(int cas=1; cas<=tcas; cas++)
    {

        ll n,d;

        scanf("%lld%lld",&n,&d);

        for(ll i=1; i<=n; i++)
        {
            scanf("%lld",&ara[i]);
        }

        build(1, 1, n);

        ll dif = 0;

        printf("Case %d: ",cas);

        for(ll i=1; (i+d-1)<=n; i++)
        {
            ll a = query_max(1,1,n,i,i+d-1);
            ll b = query_min(1,1,n,i,i+d-1);

            //cerr << "--> a: " << a << endl;
            //cerr << "--> b: " << b << endl;

            if(a-b > dif) dif = a-b;
        }

        printf("%lld\n",dif);

    }

    //update(1, 1, n, 2, 0);
    //cout << query(1, 1, n, 1, 3) << endl;
    //update(1, 1, n, 2, 2);
    //cout << query(1, 1, n, 2, 2) << endl;

    return 0;
}

/*

5
78 1 22 12 3

*/

