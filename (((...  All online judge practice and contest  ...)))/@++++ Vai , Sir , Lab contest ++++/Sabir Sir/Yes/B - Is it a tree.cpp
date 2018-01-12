#include <bits/stdc++.h>
using namespace std;

bool flag;
int vis[10005],cnt = 1;
vector <int> v[10000];
int par[10005];

void dfs(int src)
{
    vis[src] = 1;
    for(int i=0; i<v[src].size(); i++)  ///AC
    {
        int a = v[src][i];
        if(vis[a] && par[src] != a)
        {
            flag = true;
            return ;
        }
        else if(vis[a] == 0)
        {
            cnt++;
            par[a] = src;
            dfs(a);
        }
    }
}

int main()
{
    int n,m;

    cin >> n >> m;

    int x,y;

    for(int i=1; i<=m; i++)
    {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    memset(vis,0,sizeof(vis));

    dfs(1);

    //cerr << "cnt: " << cnt << endl;

    if(cnt == n && !flag) printf("YES\n");
    else printf("NO\n");

    return 0;
}
