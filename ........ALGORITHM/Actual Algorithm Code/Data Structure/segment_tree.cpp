#include <bits/stdc++.h>
using namespace std;

/// short form ...
#define pb	        push_back
#define sf              scanf
#define pf              printf
/// Function short form ...
#define mem(a,x) memset(a,x,sizeof(a))
#define sf1(a)                scanf("%d", &a)
#define sf2(a,b)              scanf("%d %d",&a, &b)
#define sf1ll(a)              scanf("%lld", &a)
#define sf2ll(a,b)            scanf("%lld %lld", &a, &b)
#define pf1(a)                printf("%d\n", a)
#define pf2(a,b)              printf("%d %d\n",a,b)
#define pf1ll(a)              printf("%lld\n",a)
#define pf2ll(a,b)            printf("%lld %lld\n",a,b)
/// loop short form ...
#define loop_tc(tc)            	 for(int cas=1; cas<=tc; cas++)	   	/// V.V.I.
#define fi(i,a,b)           for(int i=a; i<b; i++)

#define pi      	acos(-1.0)
#define ll      	long long
#define mod	    	1000000007
#define pinf	    	2147483646		/// positive infinite
#define ninf	    	-2147483646	/// negative infinite
#define sz     	100005

#define lson rt<<1, l, mid
#define rson  rt<<1|1, mid+1, r
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

void build(int rt,int l,int r)
{
    if(l == r)
    {
        ll x;
        scanf("%lld",&x);
        a[rt].bls = a[rt].brs = a[rt].s = a[rt].bs = x;
        return ;
    }
    int mid = (l+r)>>1;
    build(lson);
    build(rson);
    a[rt] = pushup(a[rt<<1],a[rt<<1|1]);
}

info query(int rt,int l,int r,int L,int R)
{
    if(L>r || R<l) return ck;
    if(L<=l and r<=R)
    {
        ///cerr << "-=-=-=-> tree range: " << l << " " << r << endl;
        ///cerr << "-=-=-=-> update range: " << L << " " << R << endl;
        ///cerr << ".......> tree[rt].prop: " << tree[rt].prop << endl;
        return a[rt];
    }
    int mid = (l+r)>>1;
    info x = query(lson,L,R);
    info y = query(rson,L,R);
    info ret = pushup(x,y);
    return ret;
}

int main()
{
    scanf("%d",&n);
    build(1,1,n);
    ck.bls = ck.bs = ck.brs = ninf;
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
