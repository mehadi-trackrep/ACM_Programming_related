#include <bits/stdc++.h>
using namespace std;

#define mx 120

int N,E;

vector <int> store;
vector <int> v[mx];
int vis[mx];
int indeg[mx];

void dfs(int rt)
{
    vis[rt] = 1;

    for(int i=0; i<v[rt].size(); i++)
    {
        int a = v[rt][i];
        if(!vis[a])
        {
            dfs(a);
        }
    }

    store.push_back(rt);
}

int main()
{
    while(scanf("%d%d",&N,&E) == 2)
    {
        if(N == 0 && E == 0) break;

        memset(vis,0,sizeof(vis));
        memset(indeg,0,sizeof(indeg));

        int a,b;
        int u;

        for(int i=0; i<E; i++)
        {
            scanf("%d%d",&a,&b);
            v[a].push_back(b);
            indeg[b]++;
            if(indeg[a] == 0) u = a;
            else if(indeg[b] == 0) u = b;
        }

        dfs(u);

        for(int i=1; i<=N; i++)
        {
            if(indeg[i] == 0 && i != u)
            {
                printf("%d ",i);
            }
        }

        for(int i=store.size()-1; i>=0; i--)
        {
            if(i == store.size()-1) printf("%d",store[i]);
            else printf(" %d",store[i]);
        }

        printf("\n");

        store.clear();

        for(int i=1; i<=N; i++)
        {
            v[i].clear();
        }

    }

    return 0;
}
