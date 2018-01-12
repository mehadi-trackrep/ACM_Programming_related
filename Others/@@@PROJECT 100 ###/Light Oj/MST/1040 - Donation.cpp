#include <bits/stdc++.h>
using namespace std;
#define M 100

int par[M];
int N,E;

struct edge
{
    int u,v,w;
    bool operator < (const edge &p)const    ///
    {
        return (w < p.w); /// jetar upor basis kore sort hobe.../ means small weight(w) gula first a rakhbe...
    }
};

vector <edge> e;

void makeset()
{
    for(int i=1; i<=M ; i++)
        par[i] = i;
}

int find_set(int r)
{
    if(r == par[r])
        return r;
    return par[r] = find_set(par[r]);
}


int MST(int N)
{
    sort(e.begin(),e.end());
    makeset();
    int cnt = 0;
    int cost = 0;

    for(int i=0; i<e.size(); i++)
    {
        int u,v,w;
        u = e[i].u;
        v = e[i].v;
        w = e[i].w;

        int x,y;

        x = find_set(u);
        y = find_set(v);

        if(x != y)
        {
            cost += w;
            cnt++;
            par[x] = y;
            if(cnt == N-1) return cost;
        }
    }

    return -1;
}

int main()          ///AC
{
    int tcas;

    scanf("%d",&tcas);

    for(int cas = 1; cas<=tcas; cas++)
    {
        cin >> N;

        e.clear();

        int cost,total_cost = 0;

        if(N == 1)
        {
            cin >> cost;
            printf("Case %d: %d\n",cas,cost);
            continue;
        }

        for(int i=1; i<=N; i++)
        {
            for(int j=1; j<=N; j++)
            {
                cin >> cost;
                if(cost == 0) continue; /// means no path
                total_cost += cost;
                edge get;
                get.u = i;
                get.v = j;
                get.w = cost;

                e.push_back(get);
            }
        }

        int ck = MST(N);

        //cerr << "==> " << q << endl;

        if(ck == -1) printf("Case %d: -1\n",cas);
        else printf("Case %d: %d\n",cas,total_cost-ck);
    }

}

/*

3

2
27 26
1 52

4
0 10 10 0
0 0 1 1
0 0 0 2
0 0 0 0

4
0 1 0 0
1 0 0 0
0 0 0 1
0 0 1 0

*/

