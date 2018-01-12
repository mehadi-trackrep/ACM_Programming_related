
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
ll tree[mx * 3];

ll freq[mx];

void build(ll node, ll b, ll e)
{
    if (b == e) {
        tree[node] = freq[b];
        return;
    }

    ll Left = node << 1;
    ll Right = (node << 1) + 1;

    ll mid = (b + e) >> 1;

    build(Left, b, mid);
    build(Right, mid + 1, e);

    tree[node] = max(tree[Left],tree[Right]);
}

ll query(ll node, ll b, ll e, ll i, ll j)       ///AC
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree[node];

    ll Left = node << 1;
    ll Right = (node << 1) + 1;

    ll mid = (b + e) >> 1;

    ll p1 = query(Left, b, mid, i, j);
    ll p2 = query(Right, mid + 1, e, i, j);

    return max(p1,p2);
}


int main()
{

    ll n,q;

    for(ll cas=1; ; cas++)
    {

        scanf("%lld",&n);

        if(n == 0) break;

        scanf("%lld",&q);

        map <ll,ll> mp;

        for(ll i=1; i<=n; i++)
        {
            scanf("%lld",&ara[i]);
            mp[ara[i]]++;
        }

        map <ll,ll> :: iterator it;

        it = mp.begin();

        for(ll i=1; i<=n; i++)
        {
            if(ara[i] == it->first)
            {
                freq[i] = it->second;
            }
            else
            {
                it++;
                freq[i] = it->second;
            }

            //cerr << "ara[i]: " << ara[i] << " it->first: " << it->first << " and it->second: " <<  it->second << endl;
        }

//        for(ll i=1; i<=n; i++)
//        {
//            printf("%d ",freq[i]);
//        }
//        cerr << endl;

        build(1, 1, n);

        ll i,j,r,l,k;

        while(q--)
        {
            scanf("%lld%lld",&i,&j);

            if(i > j) swap(i,j);

            ll Max = 0,cnt = 1;

            for(k = i+1;k<=j; k++)
            {
                if(ara[k] == ara[i])
                {
                    cnt++;
                }
                else break;
            }

            if(cnt > Max) Max = cnt;

            cnt = 1;

            l = k;


            for(k = j-1;k>=i; k--)
            {
                if(ara[k] == ara[j])
                {
                    cnt++;
                }
                else break;
            }

            r = k;

            if(cnt > Max) Max = cnt;

            ll ck = query(1,1,n,l,r);

            //cerr << "ck: " << ck << endl;

            if(ck > Max) Max = ck;

            printf("%lld\n",Max);
        }

    }

    return 0;
}

/*

5 0
1 1 2 1 3


10 3
-1 -1 1 1 1 1 3 10 10 10
1 10
2 3
5 10

*/
