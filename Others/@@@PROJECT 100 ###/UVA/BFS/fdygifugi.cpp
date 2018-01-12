#include<iostream>
#include<cstdio>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>
#include<deque>
#include<iterator>
#include<assert.h>
#include<bitset>
#include<climits>
#include<ctime>
#include<complex>

using namespace std;

#define PI acos(-1.0)
#define i64 long long
#define M 100

struct edge{
    int u,v;
};

vector <edge> graph;
int degree[M] = {0};
int vis[M] = {0};
queue <int> q1,q2;

int main()
{
    int V,E;

    cin >> V >> E;

    map <string,int> mp;
    int v=1;

    for(int i=1; i<=E; i++)
    {
        string x,y;
        cin >> x >> y;
        if(mp[x] < 1)
            mp[x] = v++;
        if(mp[y] < 1)
            mp[y] = v++;
        edge get;
        get.u = mp[x];
        get.v = mp[y];
        graph.push_back(get);
    }

    //printf("\nEdge List:\n\n");

    for(int i=0;i<graph.size();i++)
    {
        int u,v;
        u = graph[i].u;
        v = graph[i].v;
        //printf("%d->%d\n",u,v);
        degree[v]++;
    }

    printf("\nMapped Value:\n");

    for(int i=0; i<graph.size(); i++)
    {
        int x,y;
        x = graph[i].u;
        y = graph[i].v;
        printf("%d %d\n",x,y);
    }

//    printf("\nDegree\n\n");
//
//    for(int i=1; i<=V; i++)
//    {
//        printf("%d er degree %d\n",i,degree[i]);
//    }

    printf("\n\n");

    int visited_node = 0;

    while(visited_node < V)
    {

        for(int i=1; i<=V; i++)
        {
            if(vis[i] == 0 && degree[i] == 0){
                vis[i] = 1;
                q1.push(i); /// minimum degree er store
                visited_node++;
                //cerr << visited_node << endl;
            }
        }

        while(!q1.empty())
        {
            int u=q1.front();
            for(int j=0; j<graph.size(); j++)
            {
                int x,y;
                x = graph[j].u;
                y = graph[j].v;
                if(u == x)
                    --degree[y];
                //cerr << "######" << endl;
            }
            q2.push(u);
            q1.pop();
        }
    }

    map <string,int> :: iterator it;

    while(!q2.empty())
    {
        int u = q2.front();
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->second == u){
                cout << it->first << ' ';
                break;
            }
        }
        q2.pop();
    }

    return 0;
}

/*

6 8
Breakfast Office
Office Dinner
Dressup Office
Office Sports
Office Email
Email Sports
Email Dinner
Dinner Sports

*/

