#include<bits/stdc++.h>
using namespace std;

#define mx      100005
#define ll      long long

ll tree[3*mx],prop[3*mx];

void update(ll node,ll s,ll e,ll x,ll y,ll v)   ///AC
{
    if(s>y || e<x) return;

    if(s>=x && e<=y)
    {
        prop[node]+=v;
        tree[node]+=(e-s+1)*v;
        return;
    }

    ll mid,l,r;

    mid=(s+e)/2;

    l=node*2,r=l+1;

    update(l,s,mid,x,y,v);
    update(r,mid+1,e,x,y,v);

    tree[node]=tree[l]+tree[r]+(e-s+1)*prop[node];
}

ll query(ll node,ll s,ll e,ll x,ll y,ll carry)
{
    if(s>y || e<x) return 0;
    if(s>=x && e<=y)
    {
        return tree[node]+carry*(e-s+1);
    }

    ll mid,l,r;

    mid=(s+e)>>1;

    l=node<<1,r=l+1;

    ll r1,r2;

    r1=query(l,s,mid,x,y,carry+prop[node]);
    r2=query(r,mid+1,e,x,y,carry+prop[node]);

    return r1+r2;

}

int main()
{
    int t,n,q,x,y;
    scanf("%d",&t);
    ll k,v;
    for(int ca=1; ca<=t; ca++)
    {
        scanf("%d %d",&n,&q);

        memset(tree,0,sizeof tree);
        memset(prop,0,sizeof prop);

        while(q--)
        {
            scanf("%lld",&k);
            if(k==0)
            {
                scanf("%d %d %lld",&x,&y,&v);
                update(1,1,n,x,y,v);
            }
            else
            {
                scanf("%d %d",&x,&y);
                printf("%lld\n",query(1,1,n,x,y,0));
            }
        }

    }
}
