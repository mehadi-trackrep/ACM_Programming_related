// BFS

#include <bits/stdc++.h>
using namespace std ;

vector<int>graph[10005];
int n , parent[10005];
int max_level = 0,node;

void bfs(int src)       ///AC
{
    int u , i , v ;
    queue<int>q ;
    q.push(src);
    int visited[10005] = {0} , level[10005];
    visited[src] = 1 ;
    level[src] = 0 ;

    while(!q.empty())
    {
        u = q.front();
        for(i=0 ; i<graph[u].size() ; i++)
        {
            v = graph[u][i] ;

            if(!visited[v])
            {
                level[v] = level[u] + 1 ;
                parent[v] = u ;
                visited[v] =  1 ;
                q.push(v) ;
                if(level[v] > max_level)
                {
                    node = v;
                    max_level = level[v];
                }
            }
        }
        q.pop();
    }

//    for(i=1; i<=n; i++)
//        printf("%d to %d distance %d and its parent: %d\n",src,i,level[i],parent[i]);
}

int main()
{
    int i , j , e , x , y ;

    scanf("%d",&n);

    for(i=0 ; i<n-1 ; i++)
    {
        scanf("%d %d",&x,&y);
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    bfs(1);

    bfs(node);

    printf("%d\n",max_level);

    return 0 ;
}
/*

5 7
1 2
2 3
2 4
1 4
4 3
4 5
1 5
1

*/

