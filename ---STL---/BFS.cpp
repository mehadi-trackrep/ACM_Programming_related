#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int vis[10000],lev[10000],par[100000];
vector <int> vec[100];
int bfs(int s,int e)
{
    queue <int > q;
    q.push(s);
    vis[s]=1;
    lev[s]=0;
    par[s]=-1;
    while(!q.empty())
    {
        int top=q.front();
        q.pop();
        for(int i=0;i<vec[top].size();i++)
        {
            int now=vec[top][i];
            if(!vis[now])
            {
                vis[now]=1;
                lev[now]=lev[top]+1;
                par[now]=top;
                //if(now==e) return lev[now];
                q.push(now);
            }
        }
    }
    return lev[e];
}
int main()
{

    int n,x;
    cin >> n;
    memset(vis,0,sizeof(vis));
    memset(par,0,sizeof(par));
    memset(lev,0,sizeof(lev));
    int u,v;
    for(int i = 0;i < n;i++)
        {
            cin>>u>>v;
            vec[u].push_back(v);
            vec[v].push_back(u);
        }
    int ans=bfs(1,6);

    printf("%d\n",ans);
    int e=6;
    printf("%d ",e);
    while(par[e]!=-1)
    {
        printf("%d ",par[e]);
        e=par[e];
    }
    printf("\n");
}
/*
8
1 2
1 3
2 4
2 5
3 7
3 8
5 7
5 6
*/
