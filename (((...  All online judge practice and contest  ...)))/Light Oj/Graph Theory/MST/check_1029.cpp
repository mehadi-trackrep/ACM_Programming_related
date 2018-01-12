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
    bool operator < (const edge &p)const    /// AC
    {
        return (w < p.w); /// jetar upor basis kore sort hobe.../ means small weight(w) gula first a rakhbe...
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


int best_MST()
{
    sort(e.begin(),e.end());
    makeset();
    int count = 0;
    int cost = 0;
    //cerr << '*' << e.size() << endl;
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
            cost += w;
            count++;
            par[x] = y;
            if(count == N)
                break;
        }
    }

    return cost;
}

int worst_MST()
{
    //sort(e.begin(),e.end());
    makeset();
    int count = 0;
    int cost = 0;
    //cerr << '*' << e.size() << endl;
    for(int i=e.size()-1; i>=0; i--)
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
            cost += w;
            par[x] = y;
            if(count == N)
                break;
        }
    }

    return cost;
}

int main()
{
    int tcas;

    scanf("%d",&tcas);

    for(int cas = 1; cas<=tcas; cas++)
    {
        scanf("%d",&N);
        e.clear();
        for(int i=1; ; i++)
        {
            int u,v,w;

            scanf("%d%d%d",&u,&v,&w);

            if(!(u+v+w)) break;

            edge get;
            get.u = u;
            get.v = v;
            get.w = w;
            e.push_back(get);

//            new_edge get1;
//            get1.u = u;
//            get1.v = v;
//            get1.w = w;
//            tree.push_back(get1);
        }

        int p = best_MST();
        int q = worst_MST();
        int ck = (p+q);
        if((p+q)%2 == 0) printf("Case %d: %d\n",cas,ck/2);
        else printf("Case %d: %d/2\n",cas,ck);
    }

}

/*

3

1
0 1 10
0 1 20
0 0 0

3
0 1 99
0 2 10
1 2 30
2 3 30
0 0 0

2
0 1 10
0 2 5
0 0 0

*/
