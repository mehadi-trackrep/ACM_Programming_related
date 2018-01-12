/// Bismilla~hir Rahma~nir Rahi~m ///

#include <bits/stdc++.h>

using namespace std;

// definitions

#define pi	acos(-1.0)
#define ll	long long
#define ull	unsigned long long
#define ff	first
#define ss	second
#define pb	push_back

#define MAX	1000000
#define mod	1000000007
#define INF	2147483647

// I/O

#define sf                   scanf
#define pf                   printf

#define sf1(a)               scanf("%d", &a)
#define sf2(a,b)             scanf("%d%d",&a, &b)
#define sf3(a,b,c)           scanf("%d%d%d", &a, &b, &c)
#define sf4(a,b,c,d)         scanf("%d%d%d%d", &a, &b, &c, &d)
#define sf5(a,b,c,d,e)       scanf("%d%d%d%d%d", &a, &b, &c, &d, &e)

#define sll1(a)              scanf("%I64d", &a)
#define sll2(a,b)            scanf("%I64d%I64d", &a, &b)
#define sll3(a,b,c)          scanf("%I64d%I64d%I64d", &a, &b, &c)
#define sll4(a,b,c,d)        scanf("%I64d%I64d%I64d%I64d", &a, &b, &c, &d)

#define pf1(a)               printf("%d\n",a)
#define pf2(a,b)             printf("%d %d\n",a,b)
#define pf3(a,b,c)           printf("%d %d %d\n",a,b,c)
#define pf4(a,b,c,d)         printf("%d %d %d %d\n",a,b,c,d)

#define pll1(a)              printf("%I64d\n",a)
#define pll2(a,b)            printf("%I64d %I64d\n",a,b)
#define pll3(a,b,c)          printf("%I64d %I64d %I64d\n",a,b,c)
#define pll4(a,b,c,d)        printf("%I64d %I64d %I64d %I64d\n",a,b,c,d)

#define READ                 freopen("input.txt", "r", stdin);
#define WRITE                freopen("output.txt", "w", stdout);

//loops

#define fep(i,a,b)            for(i=a;i<=b;i++)
#define fem(i,a,b)            for(i=a;i>=b;i--)
#define fp(i,a,b)             for(i=a;i<b;i++)
#define fm(i,a,b)             for(i=a;i<b;i++)

struct edge{
    int u,v,w;

    bool operator <(const edge& p)const{
        return w<p.w;
    }
};

vector<edge> e;
int ans[510],par[510];
vector<int> tree[510],cost[510];

void make_set(int n)
{
    int i;
    fep(i,0,n) par[i]=i;
}

int find_representative(int n)
{
    if(par[n]==n) return n;

    par[n]=find_representative(par[n]);
    return par[n];
}

void MST(int n)
{
    int i,cnt=0;

    sort(e.begin(),e.end());

    make_set(n);

    for(i=0;i<e.size();i++)
    {
        int U,V;

        U=find_representative(e[i].u);
        V=find_representative(e[i].v);

        if(U!=V){
            cnt++;
            par[U]=V;

            tree[U].pb(V);
            tree[V].pb(U);

            cost[U].pb(e[i].w);
            cost[V].pb(e[i].w);

            if(cnt==n-1) break;
        }
    }
}

bool visit[510];

void DFS(int src)
{
    visit[src]=1;

    for(int i=0;i<tree[src].size();i++)
    {
        if(!visit[tree[src][i]]){
            ans[tree[src][i]] = max(ans[src],cost[src][i]);
            DFS(tree[src][i]);
        }
    }
    return;
}

int main()      ///AC
{
    int i,j,n,m,u,v,w,des,t,cs=1;
    sf1(t);

    while(t--)
    {
        sf2(n,m);

        for(i=0;i<m;i++)
        {
            sf3(u,v,w);

            edge New;
            New.u=u;
            New.v=v;
            New.w=w;

            e.pb(New);
        }

        sf1(des);

        MST(n);

        memset(ans,-1,sizeof(ans));     /// maximum cost store er array ...
        memset(visit,0,sizeof(visit));

        ans[des]=0;

        DFS(des);

        pf("Case %d:\n",cs++);
        for(i=0;i<n;i++){
            if(ans[i]==-1) pf("Impossible\n");
            else pf1(ans[i]);
        }
        e.clear();

        for(i=0;i<n;i++){
            tree[i].clear();
            cost[i].clear();
        }
    }
    return 0;
}
