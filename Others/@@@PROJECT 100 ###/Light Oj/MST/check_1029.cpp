#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
#define M 100

int par[M];
int N,E;

struct edge
{
    int u,v,w;
    bool operator < (const edge &p)const
    {
        return (w < p.w); /// jetar upor basis kore sort hobe.../ means small weight(w) gula first a rakhbe...
    }
};

struct new_edge
{
    int u,v,w;
};

vector <edge> e;
vector <new_edge> tree;

void makeset()
{
    for(int i=1; i<=M ;i++)
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
    cerr << '*' << e.size() << endl;
    for(int i=0; i<e.size(); i++)
    {
        int u,v,w;
        u = e[i].u;
        v = e[i].v;
        w = e[i].w;
        //union_check(u,v,w);
        int x,y;
        x = find_set(u);
        y = find_set(v);
        if(x != y){
            count++;
            
            par[x] = y;
        if(count == N-1)
            break;
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
        e.push_back(get);
        
        new_edge get1;
        get1.u = u;
        get1.v = v;
        get1.w = w;
        tree.push_back(get1);
    }
    MST();
    
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
