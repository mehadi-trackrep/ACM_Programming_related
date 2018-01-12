#include <bits/stdc++.h>
#define M 100
using namespace std;

int E,N;
int total=0;

struct edge
{
    int u,v,w;
    bool operator < (const edge &p)const
    {
        return w < p.w;
    }
};

struct other_edge
{
    int u,v,w;
};

vector <edge> graph;
vector <other_edge> graph1;

int parent[M];

void makeset()
{
    for(int i=0; i<=M; i++)
        parent[i] = i;
}

int find_parent(int r)
{
    if(parent[r] == r) return r;
    else return parent[r] = find_parent(parent[r]);
}

void MST()
{
    sort(graph.begin(),graph.end());
    makeset();
    int count = 0;
    cerr << "N: " << N << endl;
    for(int i=0; i<graph.size(); i++)
    {
        int u,v,w;

        u = graph[i].u;
        v = graph[i].v;
        w = graph[i].w;

        int x,y;

        x = find_parent(u);
        y = find_parent(v);

        if(x != y)
        {
            parent[x] = y;
            count++;
            total += w;
            if(count == N-1) break;
        }
    }

}

int main()
{
    scanf("%d%d",&N,&E);
    for(int i=1; i<=E; i++)
    {
        int u,v,w;
        scanf("%d%d%d",&u,&v,&w);
        edge get;
        get.u = u;
        get.v = v;
        get.w = w;
        graph.push_back(get);
    }

    int K;

    cin >> K;

    for(int i=1; i<=K; i++)
    {
        int u,v,w;
        scanf("%d%d%d",&u,&v,&w);
        other_edge get;
        get.u = u;
        get.v = v;
        get.w = w;
        graph1.push_back(get);
    }

    MST();
    printf("%d\n",total);

    for(int i=0; i<graph1.size(); i++)
    {
        edge get;

        get.u = graph1[i].u;
        get.v = graph1[i].v;
        get.w = graph1[i].w;

        graph.push_back(get);
    }

    total = 0;

    MST();
    printf("%d\n",total);

    return 0;
}

/*

5 6
1 2 5
1 3 5
1 4 5
1 5 5
5 4 8
3 4 8

1
2 3 2

*/
