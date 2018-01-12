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
int level[M];
int weight[M][M];

void bfs(int src)
{
    int u , i , v ;
    queue<int>q ;
    q.push(src);
    int visited[100] = {0};
    visited[src] = 1 ;
    level[src] = 0 ;

    while(!q.empty())
    {
        u = q.front();
        cerr << "u : ###" << u << endl;
        for(i=0 ; i<graph[u].size() ; i++)
        {
            v = graph[u][i] ;
            cerr << "v : ==>" << v << endl;
            if(!visited[v])
            {
                level[v] = level[u] + 1 ;
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
    cerr << "makeset -> node: " << node << endl;
    for(int i=0; i<=M ;i++)
        par[i] = i;
}

int find_set(int r)
{
    cerr << "find_set -> node: " << node << endl;
    if(r == par[r])
        return r;
    return par[r] = find_set(par[r]);
}

void MST()
{
    cerr << "check-MST=> node: " << node << endl;
    sort(e.begin(),e.end());
    makeset();
    int count = 0;
    for(int i=0; i<e.size(); i++)
    {
        cout << "...node: " << node << endl;
        int u,v,w;
        u = e[i].u;
        v = e[i].v;
        w = e[i].w;
        cout << "node: " << node << endl;
        int x,y;
        cerr << "node: " << node << endl;
        x = find_set(u);
        y = find_set(v);
        if(x != y){
            count++;
            graph[u].push_back(v);
            graph[v].push_back(u);
            printf("u - v => w : %d - %d => %d\n",u,v,w);
            weight[u][v] = w;
            weight[v][u] = w;
            
            par[x] = y;
            if(count == node-1)
                break;
          //  cout << "MST-> node: " << node << endl;
        }
    }
}

int main()
{
    int tcas,c=1;
    
    scanf("%d",&tcas);
    
    while(tcas--)
    {
        
        //for(int i=0;i<=M;i++)graph[i].clear();
        scanf("%d%d",&node,&E);
        for(int i=0;i<=node;i++)graph[i].clear();
     e.clear();
        //cout << N << endl;
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
        
        memset(level,0,sizeof (level));
        bfs(root);
        
        printf("Case %d:\n",c++);
        cerr << "check-N: " << node << endl;
        for(int i=0; i<5; i++)
        {
            printf("%d er level - %d\n",i,level[i]);
            int x = level[i];
             
             if(i == root)
                cout << "0" << endl;
             else if(x == 0)
                printf("Impossible\n");
             
             else
             {
                 int min_cost = 0;
                 int m = i;
                 while(m != root)
                 {
                     if(weight[m][parent[m]] > min_cost)
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

*/
