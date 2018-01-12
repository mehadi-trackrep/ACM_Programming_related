#include <cstdio>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;

#define pb push_back
#define sf scanf
#define pf printf

struct edge
{
    int u, v, w, o;
    bool operator < (const edge&p)
    const
    {
        return w < p.w;
    }
};
vector <edge> vc;
int pr[110];

int fin(int r)
{
    return (pr[r] == r) ? r : fin(pr[r]);
}
int f, p;
int kruskal1(int n, int z)
{
    sort(vc.begin(), vc.end());
    int x, y, i;
    for(i = 1; i <= n; i++)
        pr[i] = i;
    int sum = 0;
    int cnt = 0;
    int len = vc.size();
    for(i = 0; i < len; i++)
    {
        if(i == z)
            continue;
        x = fin(vc[i].u);
        y = fin(vc[i].v);
        if(x != y)
        {
            if(!f)
            {
                p = i;
                f = 1;
            }
            pr[x] = y;
            cnt++;
            sum += vc[i].w;
            vc[i].o = 1;
            if(cnt == n-1)break;
        }
    }
    if(cnt == n-1)
    return sum;
}

int kruskal(int n, int z)
{
    sort(vc.begin(), vc.end());
    int x, y, i;
    for(i = 1; i <= n; i++)
        pr[i] = i;
    int sum = 0;
    int cnt = 0;
    int len = vc.size();
    for(i = 0; i < len; i++)
    {
        if(i == z)
            continue;
        x = fin(vc[i].u);
        y = fin(vc[i].v);
        if(x != y)
        {
            if(!f)
            {
                p = i;
                f = 1;
            }
            pr[x] = y;
            cnt++;
            sum += vc[i].w;
            if(cnt == n-1)break;
        }
    }
    if(cnt == n-1)
    return sum;
}
int main()
{
    int i, n, m, t;
    sf("%d", &t);
    while(t--)
    {
        f = 0;
        vc.clear();
        sf("%d %d", &n, &m);
        for(int i = 1; i <= m; i++)
        {
            int x, y, w;
            edge e;
            sf("%d %d %d", &x, &y, &w);
            e.u = x;
            e.v = y;
            e.w = w;
            e.o = 0;
            vc.pb(e);
        }
        int res = kruskal1(n, -1);
        int mx = res;
        int flag = 1;

        for(i = 0; i < vc.size(); i++)
        {
            if(i == p)continue;
            if(vc[i].o == 1)
            {
                res = kruskal(n, i);
                if(mx == res)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag)
            pf("%d\n", mx);
        else pf("Not Unique!\n");
    }
    return 0;
}
