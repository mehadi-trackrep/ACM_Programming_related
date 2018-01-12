#include <bits/stdc++.h>
#define M 1000001
using namespace std;

int E,N;
int total=0;

struct edge
{
    int u,v,w;
    bool operator < (const edge &p)const    ///AC
    {
        return w < p.w;
    }
};

vector <edge> graph;

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

int MST()
{
    sort(graph.begin(),graph.end());

    makeset();
    int count = 0;
    int total_cost = 0;

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
            total_cost += w;
            if(count == N-1) break;
        }
    }

    return total_cost;
}

int main()
{
    int ck = 0;

    while(scanf("%d",&N)==1)
    {
        if(ck == 1) cout << "\n";

        int x,y,z;
        int total_orginal_cost = 0;

        for(int i=1; i<=N-1; i++)
        {
            scanf("%d%d%d",&x,&y,&z);
            total_orginal_cost += z;
        }

        int K;

        cin >> K;

        graph.clear();

        for(int i=1; i<=K; i++)
        {
            int u,v,w;
            scanf("%d%d%d",&u,&v,&w);
            edge get;
            get.u = u;
            get.v = v;
            get.w = w;
            graph.push_back(get);
        }

        cin >> E;

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

        int total_new_cost = MST();

        printf("%d\n%d\n",total_orginal_cost,total_new_cost);

        ck=1;
    }

    return 0;
}

/*

5
1 2 5
1 3 5
1 4 5
1 5 5
1
2 3 2
6
1 2 5
1 3 5
1 4 5
1 5 5
3 4 8
4 5 8

*/
