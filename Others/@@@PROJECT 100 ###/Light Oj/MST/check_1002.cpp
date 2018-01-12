#include <bits/stdc++.h>
using namespace std;
#define M 100

int par[M];
int E;
static int node;

struct edge
{
    int u,v,w;
    bool operator < (const edge &p)const
    {
        return (w < p.w); /// means small weight(w) gula first a rakhbe...
    }
};

struct new_edge
{
    int u,v,w;
};

vector <edge> e;
vector <new_edge> tree;
vector <int> graph[M];

int parent[M];
int weight[M][M];

void bfs(int src)
{
    int u , i , v ;
    queue<int>q ;
    q.push(src);
    int visited[100] = {0};
    visited[src] = 1; /// level lag be na...

    while(!q.empty())
    {
        u = q.front();
        for(i=0 ; i<graph[u].size() ; i++)
        {
            v = graph[u][i] ;
            if(!visited[v])
            {
                parent[v] = u ;
                visited[v] =  1 ;
                q.push(v) ;
            }
        }
        q.pop();
    }
}

void makeset()
{
    for(int i=0; i<=M ;i++)
        par[i] = i;
}

int find_set(int r)
{
    if(r == par[r])
        return r;
    return par[r] = find_set(par[r]);
}

void MST()
{
    sort(e.begin(),e.end());
    makeset();
    int count = 0;
    for(int i=0; i<e.size(); i++)
    {
        int u,v,w;
        u = e[i].u;
        v = e[i].v;
        w = e[i].w;
        int x,y;
        x = find_set(u);
        y = find_set(v);
        if(x != y){
            count++;
            graph[u].push_back(v);
            graph[v].push_back(u);
            
            weight[u][v] = w;
            weight[v][u] = w;
            
            par[x] = y;
            if(count == node-1)
                break;
        }
    }
}

int main()
{
    int tcas,c=1;
    
    scanf("%d",&tcas);
    
    while(tcas--)
    {
        
        
        scanf("%d%d",&node,&E);
        
        e.clear();
        
        for(int i=1; i<=E; i++)
        {
            int x,y,z;
            
            scanf("%d%d%d",&x,&y,&z);
            
            edge get;
            
            get.u = x;
            get.v = y;
            get.w = z;
            
            e.push_back(get);
            
        }
        
        int root;
        
        scanf("%d",&root);
        
        MST();
        
        memset(parent,-1,sizeof (parent));
        parent[0] = -1;
        
        bfs(root);
        
        printf("Case %d:\n",c++);

        for(int i=0; i<node; i++)
        {
            //cerr << i << " er parent: "<< parent[i] << endl;
            int x = parent[i];
             
            if(i == root)
                cout << "0" << endl;
            else if(x == -1)
                printf("Impossible\n");

            else
            {
                int min_cost = 0;
                int m = i;
                while(parent[m] != -1)
                {
                    //cerr << "m er parent: "<< parent[m] << endl;
                    if(weight[m][parent[m]] > min_cost)    /// ..........problem
                        min_cost = weight[m][parent[m]];
                    m = parent[m];
                }
                printf("%d\n",min_cost);
            }

            cout << "\n\n\n";

            graph[i].clear();
        }
        
        //tree.clear();
       // e.clear();
    }
    
    return 0;
}

/*

2

5 6
0 1 5
0 1 4
2 1 3
3 0 7
3 4 6
3 1 8
1

5 4
0 1 5
0 1 4
2 1 3
3 4 7
1

1

5 6
1 0 2
1 4 8
0 3 6
0 2 9
2 4 3
3 4 7


*/
