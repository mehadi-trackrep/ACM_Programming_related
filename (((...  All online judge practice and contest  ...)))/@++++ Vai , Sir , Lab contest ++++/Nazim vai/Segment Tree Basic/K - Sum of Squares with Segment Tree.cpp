
/// i to j range er moddhe sob index update korar code ... ///
/// i to j range er moddhe sob index update korar code ... ///
/// i to j range er moddhe sob index update korar code ... ///
/// i to j range er moddhe sob index update korar code ... ///
/// i to j range er moddhe sob index update korar code ... ///  :-


#include <bits/stdc++.h>
using namespace std ;

#define mx 100010
#define ll long long

int N,Q;

struct info
{
    ll set_prop,add_prop,sum,ans;
}tree[mx*3];

void build(int node, int b, int e)     /// i to j range er moddhe sum ber kora...
{
    if (b == e) {
        ll a;
        scanf("%lld",&a);
        tree[node].set_prop = 0;
        tree[node].add_prop = 0;
        tree[node].sum = a;
        tree[node].ans = a*a;
        return;
    }

    int l = node << 1;
    int r = l + 1;

    int mid = (b + e) >> 1;

    build(l, b, mid);
    build(r, mid + 1, e);

    tree[node].set_prop = 0;
    tree[node].add_prop = 0;
    tree[node].sum = tree[l].sum + tree[r].sum;
    tree[node].ans = tree[l].ans + tree[r].ans;

}

void update_set_prop(int node,int b,int e)
{
    int l = node << 1,r = l + 1,mid = (b + e) >> 1;
    ll prop = tree[node].set_prop;

    ll total_range_l = (mid-b+1);
    ll total_range_r = (e-mid-1+1);

    tree[l].set_prop = prop;
    tree[r].set_prop = prop;

    tree[l].sum = total_range_l*prop;
    tree[l].ans = total_range_l*prop*prop;
    tree[l].add_prop = 0;

    tree[r].sum = total_range_r*prop;
    tree[r].ans = total_range_r*prop*prop;
    tree[r].add_prop = 0;

    tree[node].set_prop = 0;
}

void update_add_prop(int node,int b,int e)
{
    int l = node << 1,r = l+1,mid = (b+e)>>1;
    ll val = tree[node].add_prop;

    ll total_range_l = (mid-b+1);
    ll total_range_r = (e-mid-1+1);

    tree[l].add_prop = val;
    tree[r].add_prop = val;

    tree[l].ans += (total_range_l*val*val + 2*tree[l].sum*val);
    tree[l].sum += total_range_l*val;
    tree[l].set_prop = 0;

    tree[r].ans += (total_range_r*val*val + 2*tree[r].sum*val);
    tree[r].sum += total_range_r*val;
    tree[r].set_prop = 0;

    tree[node].add_prop = 0;
}

void set_up(int node, int b, int e, int i, int j, ll x)  /// node/segment er range , update range er moddhe thakle okhan ei prop ta update kore dibo and sum o update kore dibo
                                                    /// r na hole , leaves er dike jete thakbo ... jekhane node/segment er range , update range er moddhe thakbe okhan ei prop ta update kore dibo and sum o update kore dibo
                                                    /// return korar somoy parent node o update kore dibo ...
{
    if (i > e || i < b)
        return;
    if (b >= i && j >= e) {
        ll total_range = (e-b+1);
        tree[node].ans = total_range*x*x;
        tree[node].sum = total_range*x;
        tree[node].set_prop = x;
        return;
    }

    int l = node << 1;
    int r = l + 1;

    int mid = (b + e) >> 1;

    if(tree[node].set_prop != 0) update_set_prop(node,b,e);     /// parent node theke jokhon tar child node a jabo tokhon , child node gular all value yi  update korte hobe ...
    if(tree[node].add_prop != 0) update_add_prop(node,b,e);

    set_up(l, b, mid, i, j, x);
    set_up(r, mid + 1, e, i, j, x);

    tree[node].sum = tree[l].sum + tree[r].sum; /// return korar somoy , parent node a , answer related value gula must update korte hobe ...
    tree[node].ans = tree[l].ans + tree[r].ans;
}

void add_to(int node, int b, int e, int i, int j, ll x)  /// node/segment er range , update range er moddhe thakle okhan ei prop ta update kore dibo and sum o update kore dibo
                                                    /// r na hole , leaves er dike jete thakbo ... jekhane node/segment er range , update range er moddhe thakbe okhan ei prop ta update kore dibo and sum o update kore dibo
                                                    /// return korar somoy parent node o update kore dibo ...
{
    if (i > e || i < b)
        return;
    if (b >= i && j >= e) {
        tree[node].ans += ( (e-b+1)*x+2*tree[node].sum*x );
        tree[node].sum += (e-b+1)*x;
        tree[node].add_prop += x;
        return;
    }

    int l = node << 1;
    int r = l + 1;

    int mid = (b + e) >> 1;

    if(tree[node].set_prop != 0) update_set_prop(node,b,e);     /// parent node theke jokhon tar child node a jabo tokhon , child node gular all value yi  update korte hobe ...
    if(tree[node].add_prop != 0) update_add_prop(node,b,e);

    add_to(l, b, mid, i, j, x);
    add_to(r, mid + 1, e, i, j, x);

    tree[node].sum = tree[l].sum + tree[r].sum; /// return korar somoy , parent node a , answer related value gula must update korte hobe ...
    tree[node].ans = tree[l].ans + tree[r].ans;
}

ll query(int node, int b, int e, int i, int j)   /// ey problem a carry korar cheye update_set_prop and update_add_prop function use kora hoyece ...
{
    //cerr << " ---> " << endl;
    if (i > e || j < b)
        return 0;

    if (b >= i && e <= j){
        return tree[node].ans;
    }

    int l = node << 1;
    int r = l + 1;

    int mid = (b + e) >> 1;

    if(tree[node].set_prop != 0) update_set_prop(node,b,e);     /// parent node theke jokhon tar child node a jabo tokhon , child node gular all value yi  update korte hobe ...
    if(tree[node].add_prop != 0) update_add_prop(node,b,e);

    ll p1 = query(l, b, mid, i, j);
    ll p2 = query(r, mid + 1, e, i, j);

    return p1 + p2;
}



int main()  ///AC
{
    int tcas;

    scanf("%d",&tcas);

    for(int c=1; c<=tcas; c++)
    {

        scanf("%d%d",&N,&Q);

        build(1,1,N);

        printf("Case %d:\n",c);

        int ch,st,nd;
        ll x;

        for(int i=1; i<=Q; i++)
        {
            scanf("%d",&ch);
            //cerr << "ch: " << ch << endl;
            if(ch == 2)
            {
                scanf("%d%d",&st,&nd);
                printf("%lld\n",query(1,1,N,st,nd));
            }
            else
            {
                scanf("%d%d%lld",&st,&nd,&x);
                if(ch == 1) add_to(1,1,N,st,nd,x);
                else if(ch == 0) set_up(1,1,N,st,nd,x);
            }
        }

    }

    return 0;
}

/*

2
4 5
1 2 3 4
2 1 4
0 3 4 1
2 1 4
1 3 4 1
2 1 4
1 1
1
2 1 1

*/
