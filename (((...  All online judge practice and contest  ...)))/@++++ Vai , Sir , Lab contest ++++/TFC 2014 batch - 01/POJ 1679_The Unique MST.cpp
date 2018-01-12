/*
    BISMILLAH HIR RAHMANIR RAHIM .. "ALLAH IS ALMIGHTY" .

    ###########################################################################
    #                                                                         #
    #   //        //  //////   //    //      /\      //////\\    /////////    #
    #   // /    / //  //       //    //     /  \     //       \      //       #
    #   //   /    //  /////    ////////    /////\    //       |      //       #
    #   //        //  //       //    //   /      \   //       /      //       #
    #   //        //  //////   //    //  /        \  ////////    /////////    #
    #                                                                         #
    ###########################################################################
                                                                              SUST
*/

//#include <bits/stdc++.h>

/// Containers Start
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <iomanip>
#include <sstream>
#include <bitset>
#include <cstdlib>
#include <iterator>
#include <algorithm>
/// C Header Files
#include <cstdio>
#include <cctype>
#include <cmath>
#include <math.h>
#include <ctime>
#include <tgmath.h>
#include <cstring>
using namespace std;

#define ll      long long

struct edge
{
    int u,v;
    ll w;
    bool operator < (const edge &p)const
    {
        return w < p.w;
    }
};

vector <edge> graph;
vector <int> tree;
int par[110];
int n,m;

void make_set()
{
    for(int i=0; i<=105; i++) par[i] = i;
}

int find_set(int r)
{
    if(par[r] == r) return r;
    return par[r] = find_set(par[r]);
}

ll MST()
{
    sort(graph.begin(),graph.end());
    //cerr << "n: " << n << endl;
    make_set();

    int cnt = 0;
    ll cost = 0;
    for(int i=0; i<graph.size(); i++)
    {
        int u,v;
        ll w;

        u = graph[i].u;
        v = graph[i].v;
        w = graph[i].w;

        int x = find_set(u);
        int y = find_set(v);

        if(x != y)
        {
            cost += w;
            par[x] = y;
            cnt++;
            tree.push_back(i);
            if(cnt == n-1) return cost;
        }
    }

    return -1;
}


ll MST1(int pos)
{
    //cerr << "n: " << n << endl;
    make_set();
    int cnt = 0;
    ll cost = 0;

    for(int i=0; i<graph.size(); i++)
    {
        int u,v;
        ll w;
        u = graph[i].u;
        v = graph[i].v;
        w = graph[i].w;

        int x = find_set(u);
        int y = find_set(v);

        if(i == pos) continue;

        if(x != y)
        {
            cost += w;
            par[x] = y;
            cnt++;
            if(cnt == n-1) return cost;
        }
    }

    return -1;
}


int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int u,v;
        ll w;

        cin >> n >> m;

        for(int i=1; i<=m; i++)
        {
            cin >> u >> v >> w;
            edge get;
            get.u = u;
            get.v = v;
            get.w = w;
            graph.push_back(get);
        }

        if(n == 1)
        {
            printf("0\n");
            graph.clear();
            tree.clear();
            continue;
        }

        ll cost = MST();

        ll mnn = 21474836476757877;

        for(int i=0; i<tree.size(); i++)
        {
            int pos = tree[i];
            ll cost1 = MST1(pos);
            if(cost1 != -1)
            {
                if(cost1 < mnn)
                {
                    mnn = cost1;
                }
            }
        }

        if(cost == mnn) printf("Not Unique!\n");
        else cout << cost << endl;

        graph.clear();
        tree.clear();
    }
}

/*

1
5 5
1 2 1
2 3 2
3 4 5
4 5 1
5 1 3


*/
