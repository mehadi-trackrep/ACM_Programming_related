
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
    ll max1,max2;
} tree[mx * 3];

vector <int> v;

void build(ll node, ll b, ll e)     ///AC
{
    if (b == e)
    {
        tree[node].max1 = ara[b];
        tree[node].max2 = 0;
        return;
    }

    ll Left = node << 1;
    ll Right = (node << 1) + 1;

    ll mid = (b + e) >> 1;

    build(Left, b, mid);
    build(Right, mid + 1, e);

    tree[node].max1 = max( tree[Left].max1 , tree[Right].max1 );
    tree[node].max2 = max( min( tree[Left].max1 , tree[Right].max1 ) , max( tree[Left].max2 , tree[Right].max2 ) );
}

void query(ll node, ll b, ll e, ll i, ll j)
{
    if (i > e || j < b)
        return ;
    if (b >= i && e <= j)
    {
        v.push_back(tree[node].max1);
        v.push_back(tree[node].max2);

        return ;
    }

    ll Left = node << 1;
    ll Right = (node << 1) + 1;

    ll mid = (b + e) >> 1;

    query(Left, b, mid, i, j);
    query(Right, mid + 1, e, i, j);

}

void update(ll node, ll b, ll e, ll i, ll newvalue)    /// i th index a update korbo ...
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i)
    {
        tree[node].max1 = newvalue;
        //tree[node].max1 = newvalue;
        return;
    }

    ll Left = node << 1;
    ll Right = (node << 1) + 1;

    ll mid = (b + e) >> 1;

    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);

    //cerr << " --> tree[Left].max1: " << tree[Left].max1 << endl;
    //cerr << " --> tree[Right].max1: " << tree[Right].max1 << endl;

    tree[node].max1 = max( tree[Left].max1 , tree[Right].max1 );
    tree[node].max2 = max( min( tree[Left].max1 , tree[Right].max1 ) , max( tree[Left].max2 , tree[Right].max2 ) );

    //cerr << " ==> tree[Left].max2: " << tree[Left].max2 << endl;
    //cerr << " ==> tree[Right].max2: " << tree[Right].max2 << endl;
}

int main()
{

    ll n,q;
    int tcas,c=1;

    scanf("%lld",&n);

    for(ll i=1; i<=n; i++)
    {
        scanf("%lld",&ara[i]);
    }

    build(1, 1, n);

    scanf("%lld",&q);
    getchar();

    while(q--)
    {
        char ch;

        cin >> ch;
        //scanf("%c",&ch);
        //getchar();

        //cerr << "check: " << ch << endl;

        if(ch == 'U')
        {
            ll ind;
            ll x;
            scanf("%lld%lld",&ind,&x);
            update(1,1,n,ind,x);
        }
        else if(ch == 'Q')
        {
            ll i,j;
            scanf("%lld%lld",&i,&j);
            v.clear();
            query(1,1,n,i,j);
            sort(v.begin(),v.end());
            int sz = v.size();
            ll sum = v[sz-1] + v[sz-2];
            printf("%lld\n",sum);

        }
    }

    return 0;
}

/*

5
1 2 3 4 5
6
Q 2 4
Q 2 5
U 1 6
Q 1 5
U 1 7
Q 1 5

*/
