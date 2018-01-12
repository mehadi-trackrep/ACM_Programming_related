
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
    ll min_val,pos;

} tree[mx * 3];

queue < pair<ll,ll> > temp;     /// AC
pair <ll,ll> tp;

ll ind;
ll val;

void build_min(ll node, ll b, ll e)
{
    if (b == e)
    {
        tree[node].min_val = ara[b];
        tree[node].pos = b;
        return;
    }

    ll Left = node << 1;
    ll Right = (node << 1) + 1;

    ll mid = (b + e) >> 1;

    build_min(Left, b, mid);
    build_min(Right, mid + 1, e);

    if(tree[Left].min_val < tree[Right].min_val)
    {
        tree[node].min_val = tree[Left].min_val;
        tree[node].pos = tree[Left].pos;
    }
    else
    {
        tree[node].min_val = tree[Right].min_val;
        tree[node].pos = tree[Right].pos;
    }
}

void query(ll node, ll b, ll e, ll i, ll j)       /// position paile value pabo ...
{
    if (i > e || j < b)
        return ;
    if (b >= i && e <= j)
    {
        tp.first = tree[node].min_val;  /// first a min_value
        tp.second = tree[node].pos;     /// second a position
        temp.push(tp);

        return ;
    }

    ll Left = node << 1;
    ll Right = (node << 1) + 1;

    ll mid = (b + e) >> 1;

    query(Left, b, mid, i, j);
    query(Right, mid + 1, e, i, j);

    return ;
}


int main()
{

    ll tcas,n,q;

    scanf("%lld",&tcas);

    for(ll cas=1; cas<=tcas; cas++)
    {

        scanf("%lld",&n);

        for(ll i=1; i<=n; i++)
        {
            scanf("%lld",&ara[i]);
        }

        build_min(1, 1, n);

        queue < pair<ll,ll> > q;

        pair <ll,ll> pir;

        pir.first = 1;      /// low
        pir.second = n;     /// high

        q.push(pir);

        ll max_area = 0;

        while(!q.empty())
        {
            pair <ll,ll> p,p1,p2,pp,pp1;

            p = q.front();

            ll i,j;

            i = p.first;
            j = p.second;

            //cerr << " pair: (i,j) -> " << i << " , " << j << endl;

            if(i > j)
            {
                q.pop();
                continue;
            }

            query(1,1,n,i,j);

            pp = temp.front();  /// etate val,ind ace ...
            temp.pop();

            while(!temp.empty())
            {
                pp1 = temp.front();
                if(pp.first > pp1.first)
                {
                    pp.first = pp1.first;
                    pp.second = pp1.second;
                }
                temp.pop();
            }

            val = pp.first;
            ind = pp.second;

            ll v;

            v = (j-i+1)*val;

            //cerr << "==> val: " << val << endl;

            if(v > max_area) max_area = v;

            p1.first = i;
            p1.second = ind-1;

            q.push(p1);

            p2.first = ind+1;
            p2.second = j;

            q.push(p2);

            q.pop();
        }

        printf("Case %lld: %lld\n",cas,max_area);

    }

    return 0;
}

/*

1
7
2 4 6 3 5 7 1

1
5
4 4 3 2 4

5
78 1 22 12 3

*/

