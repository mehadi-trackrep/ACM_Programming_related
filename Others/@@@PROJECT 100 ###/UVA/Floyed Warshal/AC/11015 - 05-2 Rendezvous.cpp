#include <bits/stdc++.h>
using namespace std;
#define Max 105
#define inf 500000

int N,E;
int dis[Max][Max];

void floyd_warshall(int n)
{
    for(int k=1; k<=n; k++)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                dis[i][j] = min(dis[i][j],(dis[i][k]+dis[k][j]));   ///AC
            }
        }
    }
}

void init()
{
    for(int i=1; i<=100; i++)
    {
        for(int j=1; j<=100; j++)
        {
            if(i==j) dis[i][j] = 0;
            else dis[i][j] = inf;
        }
    }
}

int main()
{
    int cas = 1;

    while(scanf("%d%d",&N,&E) == 2)
    {
        if(!(N+E)) break;
        init();         /// v.v.i.
        string str;
        map <int,string> mp;

        for(int i=1; i<=N; i++)
        {
            cin >> str;
            mp[i] = str;
        }
        int u,v,w;
        for(int i=1; i<=E; i++)
        {
            cin >> u >> v >> w;
            dis[u][v] = w;
            dis[v][u] = w;
        }

        floyd_warshall(N);

        int total_cost = 0;
        int min_cost = inf;
        int ind;

        for(int i=1; i<=N; i++)
        {
            total_cost = 0;
            for(int j=1; j<=N; j++){
                total_cost += dis[i][j];
            }
            if(total_cost < min_cost)
            {
                min_cost = total_cost;
                ind = i;
            }
        }

        printf("Case #%d : ",cas++);
        cout << mp[ind] << endl;
    }

    return 0;
}

/// save test cases ...

/*

4 3
timotius
harry
richard
januar
1 2 10
1 3 8
1 4 6
4 3
rocky
herwin
gaston
jefry
1 2 5
1 3 5
1 4 5
0 0

*/

