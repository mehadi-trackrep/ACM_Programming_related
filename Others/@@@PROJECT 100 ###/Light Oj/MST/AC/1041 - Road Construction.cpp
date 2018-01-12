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
        scanf("%d\n",&E);

        e.clear();

        map <string,int> mp;

        int x = 1;

        for(int i=1; i<=E; i++)
        {
            string u,v;
            int w;

            cin >> u >> v >> w;

            //if(w == 0) continue;

            if(mp[u] <= 0) mp[u] = x++;
            if(mp[v] <= 0) mp[v] = x++;

            edge get;

            get.u = mp[u];
            get.v = mp[v];
            get.w = w;

            e.push_back(get);

            get.u = mp[v];
            get.v = mp[u];
            get.w = w;

            e.push_back(get);
        }

        int ck = MST(x-1);

        //cerr << "==> " << q << endl;

        if(ck == -1) printf("Case %d: Impossible\n",cas);
        else printf("Case %d: %d\n",cas,ck);
    }

}

/*

2

12
Dhaka Sylhet 0
Ctg Dhaka 0
Sylhet Chandpur 9
Ctg Barisal 9
Ctg Rajshahi 9
Dhaka Sylhet 9
Ctg Rajshahi 3
Sylhet Chandpur 5
Khulna Rangpur 7
Chandpur Rangpur 7
Dhaka Rajshahi 6
Dhaka Rajshahi 7

2
Rajshahi Khulna 4
Kushtia Bhola 1

*/
