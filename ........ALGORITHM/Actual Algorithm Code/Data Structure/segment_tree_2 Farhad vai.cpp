#include <bits/stdc++.h>

using namespace std ;

#define forln(i,a,n) for(int i=a ; i<n ; i++)
#define foren(i,a,n) for(int i=a ; i<=n ; i++)
#define forg0(i,a,n) for(int i=a ; i>0 ; i--)
#define fore0(i,a,n) for(int i=a ; i>=0 ; i--)
#define pb push_back
#define pp pop_back
#define clr(a,b) memset(a,b,sizeof(a))
#define sf1(a) scanf("%d",&a)
#define sf2(a,b) scanf("%d %d",&a,&b)
#define sf3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define sf4(a,b,c,d) scanf("%d %d %d %d",&a,&b,&c,&d)
#define pi acos(-1.0)
#define jora_int pair<int,int>
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define Max 100000+10
#define ll long long

struct nd
{
    long long sum , prog ;
};

int arra[Max] ;
nd tree[3*Max] ;

long long query(int node , int b , int e , int i , int j , int carry);
void build(int node, int b , int e);
void update(int node , int b , int e , int i , int j ,int x);

int main()
{
    #ifndef ONLINE_JUDGE
     //freopen("input.txt","r",stdin);
#endif
    ll tcas;
    ll N;

    scanf("%lld",&tcas);

    for(ll cas = 1; cas<=tcas; cas++)
    {
        ll q;

        scanf("%lld%lld",&N,&q);

        //memset(arra,0,sizeof(arra));      /// initially array ta 0

        memset(tree, 0 ,sizeof(tree));

        //build(1,1,N);

        printf("Case %lld:\n",cas);

        while(q--)
        {
            ll ck,x,y,v;

            scanf("%lld%lld%lld",&ck,&x,&y);    /// input index 0 theke ....

            if(ck == 0)
            {
                scanf("%lld",&v);

                update(1, 1, N, x+1, y+1, v);
            }
            else
            {
                ll ans = query(1, 1, N, x+1, y+1, 0);

                printf("%lld\n",ans);
            }
        }

    }

    return 0;
}

void build(int node, int b , int e)
{
    if(b == e)
    {
        tree[node].sum = arra[b];
        tree[node].prog = 0 ;
        return ;
    }

    int lft , rigt , mid ;

    lft = 2*node ;
    rigt = 2*node + 1 ;
    mid = (b+e)/2 ;

    build(lft,b,mid);
    build(rigt,mid+1,e);

    tree[node].sum = tree[lft].sum + tree[rigt].sum ;
    tree[node].prog = 0 ;
}

void update(int node , int b , int e , int i , int j ,int x)
{
    if(i>e || j<b)
        return;

    if(i<=b && j>=e)
    {
        tree[node].sum += ((e-b+1)*x);
        tree[node].prog +=x ;
        return;
    }

    int lft , rigt , mid ;

    lft = node*2 ;
    rigt = 2*node + 1 ;
    mid = (b+e)/2 ;

    update(lft,b,mid,i,j,x);
    update(rigt,mid+1,e,i,j,x);

    tree[node].sum = tree[lft].sum + tree[rigt].sum + ((e-b+1)*tree[node].prog) ; // sum of lft and rgt + prog of this node
}

long long query(int node , int b , int e , int i , int j , int carry)
{
    if(i>e || j<b)
        return 0 ;

    if(i<=b && j>=e)
    {
        return tree[node].sum + carry*(e-b+1) ;
    }

    int lft , rigt , mid ;
    long long p1 , p2 ;

    lft = 2*node ;
    rigt = 2*node + 1 ;
    mid = (b+e)/2 ;

    p1 = query(lft,b,mid,i,j,carry+tree[node].prog);
    p2 = query(rigt,mid+1,e,i,j,carry+tree[node].prog);

    return p1+p2 ;
}
