#include <bits/stdc++.h>
using namespace std;

#define sf1(n) scanf("%d",&n)
#define sf2(a,b) scanf("%d%d",&a,&b)

#define pf1(n) printf("%d\n",n)
#define pf2(a,b) printf("%d %d\n",a,b)

vector<int> graph[1005];
int level[1005];

void bfs(int src){
    level[src] = 0;
    queue<int> q;
    q.push(src);
    while(!q.empty()){
        int v,u = q.front();
        q.pop();
        for(int i=0; i<graph[u].size(); i++){
            v = graph[u][i];
            if(level[v] == -1){
                level[v] = level[u] + 1;
                q.push(v);
            }
        }
    }
}

int main()
{
    int q,n,m,u,v,s;
    sf1(q);
    while(q--){
        sf2(n,m);
        for(int i=1; i<=m; i++){
            sf2(u,v);
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        sf1(s);
        memset(level, -1, sizeof(level));
        bfs(s);

        for(int i=1; i<=n; i++){
            if(i == s) continue;
            if(level[i] == -1) printf("-1 ");
            else printf("%d ",level[i]*6);
        }

        printf("\n");

        for(int i=1; i<=n; i++) graph[i].clear();
    }
    //cout << q << endl;
    return 0;
}
