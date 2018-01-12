#include<bits/stdc++.h>
using namespace std;
int a[105], cnt[1005],vis[1005];

vector<int>g[1005];

void dfs(int src)
{
    vis[src] = 1;

    for(int i=0; i<g[src].size(); i++)
    {
        int v = g[src][i];

        if( !vis[v])
        {
            cnt[v]++;

            dfs(v);
        }
    }
}


int main()
{
    int t,n,m,k,i,j,u, v, cs = 1;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d %d", &k,&n, &m);

        memset(cnt, 0, sizeof(cnt));

        for(i=0; i<k; i++)
        {
            scanf("%d",&a[i]);

            cnt[a[i]]++;
        }

        for(i=0; i<m; i++)
        {
            scanf("%d %d", &u, &v);

            g[u].push_back(v);

            //g[v].push_back(u);
        }

        for(i=0; i<k; i++)
        {
            memset(vis, 0, sizeof(vis));

            dfs(a[i]);
        }

        int c = 0;

        for(i=1; i<=n; i++)
        {
            if(cnt[i] >= k) c++;
        }

        printf("Case %d: %d\n", cs++, c);

        for(i=1; i<=n; i++) g[i].clear();
    }

    return 0;
}

/*


2

3 5 4

1

1

1

1 2

1 4

2 3

3 5

3 5 4

1

1

5

1 2

1 4

2 3

3 5

*/
