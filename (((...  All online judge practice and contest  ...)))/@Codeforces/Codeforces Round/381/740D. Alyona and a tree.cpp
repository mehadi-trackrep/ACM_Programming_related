#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, ll> p;
const int maxn = 2e5 + 10;
int n, f, a[maxn], ans[maxn], sum[maxn];
ll w, dist[maxn];
vector <p> G[maxn];

void dfs(int u, int dep)
{
    //for(p e : G[u])
    for(int i=0; i<G[u].size(); i++)
    {
        p e;
        e = G[u][i];
        int v = e.first;
        ll w = e.second;
        cerr << "++++> dist[dep]: " << dist[dep] << endl;
        dist[dep+1] = dist[dep] + w;
        sum[dep+1] = 0;
        printf("-> par , child, dep, dist[dep], dist[dep+1]: %d %d %d %d %d\n",u,v,dep,dist[dep],dist[dep+1]);
        dfs(v, dep + 1);
    }
    int up = lower_bound(dist + 1, dist + dep, dist[dep] - a[u]) - dist;
    cerr << "=> up: " << up << endl;
    sum[up-1]--;
    sum[dep-1]++;
    sum[dep-1] += sum[dep];
    ans[u] = sum[dep];
}

int main()
{
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 2; i <= n; i++)
    {
        scanf("%d%I64d", &f, &w);
        G[f].push_back(p(i, w));
    }
    dfs(1, 1);
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", ans[i]);
    }
    return 0;
}

/*


5
2 5 1 4 6
1 7
1 1
3 5
3 6


*/
