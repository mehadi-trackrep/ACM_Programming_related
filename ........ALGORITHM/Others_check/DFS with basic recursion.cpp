#include <bits/stdc++.h>
using namespace std;
#define M 100

vector <int> graph[M];
int visited[M];

void DFS(int SN)
{
    if(visited[SN] == 1) return ;
    visited[SN] = 1;
    for(int i=0; i<graph[SN].size(); i++)
    {
        int u = graph[SN][i];
        cout << u << " " ;
        DFS(u);
    }
    printf("==> %d \n",SN);
}

int main()
{
    int N,E;
    cin >> N >> E;
    
    for(int i=1; i<=E; i++)
    { 
        int u,v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    memset(visited,0,sizeof(visited));
    
    DFS(1);
    
    return 0;
}

/*

5 8
1 2
1 3
1 4
2 3
2 4
2 5
3 4
4 5

*/