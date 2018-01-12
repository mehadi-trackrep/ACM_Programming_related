#include <bits/stdc++.h>
using namespace std;
#define M 100

int N,E;

struct edge{
    int u,v,w;
    bool operator < (const edge &p)const {
        return w<p.w;
    }
};

struct new_edge{
    int u,v,w;
};

vector <edge> graph;
int par[M];

vector <new_edge> tree;

void makeset()
{
    for(int i=1; i<=N; i++)
        par[i] = i;
}

int find_par(int r)
{
    if(par[r] == r)
        return r;
    return par[r] = find_par(par[r]);
}

void MST()
{
    sort(graph.begin(), graph.end());
    makeset();
    int count = 0;
    for(int i=0; i<graph.size(); i++)
    {
        int u,v,w,x,y;
        u = graph[i].u;
        v = graph[i].v;
        w = graph[i].w;
        
        x = find_par(u);
        y = find_par(v);
        
        if(x != y){
            par[x] = y;
        
            new_edge get;
            
            get.u = u;
            get.v = v;
            get.w = w;
            
            tree.push_back(get);
            
            count++;
            if(count == N-1)
                break;
        }
    }
}

int main()
{
    cin >> N >> E;
    
    for(int i=1; i<=E; i++)
    {
        int u,v,w;
        
        cin >> u >> v >> w;
        
        edge get;
        get.u = u;
        get.v = v;
        get.w = w;
        
        graph.push_back(get);
    }
    
    MST();
    printf("The Edge List of the MST:\n");
    for(int i=0; i<tree.size(); i++)
    {
        int u,v,w;
        u = tree[i].u;
        v = tree[i].v;
        w = tree[i].w;
        
        printf("%d %d %d\n",u,v,w);
    }
    
    return 0;
}

/*

8 10
1 2 1
2 5 3
2 3 4
1 5 2
5 3 5
4 3 7
5 4 6
6 8 9
7 8 10
6 7 8

8 11
1 2 1
2 5 3
2 3 4
1 5 2
5 3 11
4 3 7
1 2 5
5 4 6
6 8 9
7 8 10
6 7 8

*/