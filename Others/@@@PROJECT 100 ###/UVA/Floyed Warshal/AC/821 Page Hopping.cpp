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
                dis[i][j] = min(dis[i][j],(dis[i][k]+dis[k][j]));       ///AC
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
    int u,v;
    int cas = 1;
    while(1)
    {
        init();
        map <int,int> mp;
        int x=1;
        scanf("%d%d",&u,&v);
        if(!(u+v))  break;

        if(mp[u] < 1) mp[u] = x++;
        if(mp[v] < 1) mp[v] = x++;

        dis[mp[u]][mp[v]] = 1;

        while(1)
        {
            scanf("%d%d",&u,&v);
            if(!(u+v))  break;
            if(mp[u] < 1) mp[u] = x++;
            if(mp[v] < 1) mp[v] = x++;
            dis[mp[u]][mp[v]] = 1;
        }

        floyd_warshall(x-1);

//        for(int i=1; i<=x-1; i++)
//        {
//            for(int j=1; j<=x-1; j++)
//                printf(" %d",dis[i][j]);
//            printf("\n");
//        }
        double ans;
        int cnt1 = 0,cnt2 = 0;

        for(int i=1; i<=x-1; i++)
        {
            for(int j=1; j<=x-1; j++){
                if(dis[i][j] != inf) cnt1+=dis[i][j];
                if(dis[i][j] != inf && dis[i][j] != 0) cnt2++;
            }
        }
        ans = (double)cnt1/(double)cnt2;
        printf("Case %d: average length between pages = %.3lf clicks\n",cas++,ans);
    }

    return 0;
}

/// save test cases ...

/*

1 2  2 4  1 3  3 1  4 3  0 0
1 2  1 4  4 2  2 7  7 1  0 0
0 0


1 2  2 4  1 3  3 1  4 3  0 0
1 2  1 4  4 2  2 7  7 1  0 0
4 1  4 3  3 2  2 1  1 2  2 3  0 0

*/

