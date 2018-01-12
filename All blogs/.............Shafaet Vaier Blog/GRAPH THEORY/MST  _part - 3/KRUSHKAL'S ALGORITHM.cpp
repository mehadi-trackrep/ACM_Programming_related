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
int mst (int n) /// n means number of nodes
{
    sort(e.begin(),e.end());


    for(int i = 1; i <= n; i++)
        pr[i] = i;

    int count = 0,s = 0;

    for(int i = 0; i < (int)e.size(); i++)
    {
        int u = find(e[i].u);
        int v = find(e[i].v);

        if(u != v)
        {
            pr[u] = v;
            count++;
            s += e[i].w;
            if(count == n-1) break;
        }
    }

    return s;
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
    cout << mst (n) << endl ;
    return 0;
}

///input:
/*

8 10
1 2 4
1 4 10
1 5 2
2 3 18
2 4 8
3 4 11
4 5 5
4 7 11
4 8 9
6 7 1
6 8 2

*/
