#include <bits/stdc++.h>
using namespace std;
#define max 100

vector <int> Enew[max];
vector <int> graph[max];
set <int> Vnew;
vector <int> weight[max][max];
set <int> min_weight;
queue <int> q;

int V,E;
int mu,mv,mw = 999999;   /// m means minimum
int vis[max];

void MST()
{
    Vnew.insert(mu);
    Vnew.insert(mv);
    q.push(mu);
    q.push(mv);
    min_weight.insert(mw);
    vis[mu] = 1;
    vis[mv] = 1;
    while(Vnew.size() != V){

    }
}

int main()
{
    cin >> V >> E;

    for(int i = 1;i <= E;i++){

        int u,v,w;
        cin >> u >> v >> w;
        graph[u].push_back(v);
        graph[v].push_back(u);
        weight[u][v].push_back(w);

        if(mw < w){
            mw = w;
            mu = u;
            mv = v;
        }

    }

    memset(vis,0,sizeof(vis));

    ///MST();

    return 0;
}

/*

8 11
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
