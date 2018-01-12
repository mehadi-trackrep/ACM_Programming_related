#include <bits/stdc++.h>
using namespace std;
#define MAXN 100
struct edge
{
    int u,v,w;
    bool  operator < ( const  edge & p ) const
    {
        return w < p.w;
    }
};
int pr[MAXN];  /// pr means parent
vector <edge> e;
int find(int r) /// r means node
{
    return (pr [r] == r) ? r : find(pr [r]);
}
vector <int> weight;
int mst (int n) /// n means number of nodes
{
    sort(e.begin(),e.end());


    for(int i = 1; i <= n; i++)
        pr[i] = i;

    int count = 0,s = 0,w = e[0].w;

    for(int i = 0; i < (int)e.size(); i++)
    {
        int u = find(e[i].u);
        int v = find(e[i].v);

        if(u != v)
        {
            pr[u] = v;
            count++;
            //s += e[i].w;
            if(e[i].w > w)
                w = e[i].w;
            ///weight.push_back(e[i].w);
            if(count == n-1) break;
        }
    }

    return w;
}

int main()
{
// READ("in");
    int n,m;
    cin>>n>>m;  /// m means number of edges
    for(int i=1; i<=m; i++)
    {
        int u,v,w;
        cin >> u >> v >> w; /// w means weight
        edge get;
        get.u = u;
        get.v = v;
        get.w = w;
        e.push_back(get);
    }
    cout << mst (n) << endl ;   ///problem ace...
    return 0;
}
/*

5 5
1 2 100
2 3 80
3 4 120
1 5 220
5 4 170

4 3
1 2 100
2 3 80
3 4 120

*/
