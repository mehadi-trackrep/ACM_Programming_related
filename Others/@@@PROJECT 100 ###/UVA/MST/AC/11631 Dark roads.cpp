#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
#define M 200000

int par[M];
int N,E;

struct edge
{
    int u,v,w;
    bool operator < (const edge &p)const
    {
        return (w < p.w);
    }
};

vector <edge> e;

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



int MST()
{
    sort(e.begin(),e.end());
    makeset();
    int count = 0,total_cost=0;
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
            total_cost += w;
            par[x] = y;
            if(count == N-1)
                break;
        }
    }
    return total_cost;
}

int main()
{
    while(scanf("%d%d",&N,&E) == 2)
    {
        if(N == 0 && E == 0)
            break;
        int total_cost=0,min_cost;
        e.clear();
        for(int i=1; i<=E; i++)
        {
            int u,v,w;
            scanf("%d%d%d",&u,&v,&w);
            edge get;
            get.u = u;
            get.v = v;
            get.w = w;
            e.push_back(get);
            total_cost += w;
        }
        min_cost = MST();
        printf("%d\n",total_cost-min_cost);
    }
}

/*

6 8
1 2 1
2 8 7
1 3 2
2 3 3
3 5 4
8 5 5
5 6 6
6 8 8

5 6
0 1 5
0 1 4
2 1 3
3 0 7
3 4 6
3 1 8

*/
