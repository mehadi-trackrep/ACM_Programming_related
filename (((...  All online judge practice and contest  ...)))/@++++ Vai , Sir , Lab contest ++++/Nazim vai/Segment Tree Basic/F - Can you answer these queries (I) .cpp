#include <bits/stdc++.h>
using namespace std;
#define inf -1000000000
#define lson rt<<1, b, mid
#define rson  rt<<1|1, mid+1, e
#define ll      long long
struct info
{
    ll bls,brs,s,bs;
}a[4*50005];

info ck;
int n;

info pushup(info l,info r)
{
    info res;
    res.s = l.s+r.s;
    res.bls = max(l.bls,l.s+r.bls);
    res.brs = max(r.brs,r.s+l.brs);
    res.bs = max(max(l.bs,r.bs),l.brs+r.bls);
    return res;
}

void build(int rt,int b,int e)
{
    if(b == e)
    {
        ll x;
        scanf("%lld",&x);
        a[rt].bls = a[rt].brs = a[rt].s = a[rt].bs = x;
        return ;
    }
    int mid = (b+e)>>1;
    build(lson);
    build(rson);
    a[rt] = pushup(a[rt<<1],a[rt<<1|1]);
}

info query(int rt,int b,int e,int i,int j)
{
    if(i>e || j<b) return ck;
    if(b>=i and e<=j) return a[rt];
    int mid = (b+e)>>1;
    info x = query(lson,i,j);
    info y = query(rson,i,j);
    info ret = pushup(x,y);
    return ret;
}

int main()  ///AC
{
    scanf("%d",&n);
    build(1,1,n);
    ck.bls = ck.bs = ck.brs = inf;
    ck.s = 0;
    int x,y,q;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d",&x,&y);
        info ret = query(1,1,n,x,y);
        ll ans = max(max(ret.brs,ret.bls),max(ret.bs,ret.s));
        printf("%lld\n",ans);
    }
}

/***


6
5 2 -4 7 -1 10
5
1 6
3 6
2 5
3 5
3 4


***/
