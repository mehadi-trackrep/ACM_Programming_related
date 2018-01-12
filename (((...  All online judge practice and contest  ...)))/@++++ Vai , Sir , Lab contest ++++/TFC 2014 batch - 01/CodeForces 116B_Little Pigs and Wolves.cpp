#include <bits/stdc++.h>
using namespace std;

int fx[] = {-1,0,0,1};
int fy[] = {0,1,-1,0};

int n,m;

char ara[15][15];

vector < pair<int,int> > vec;

int main()      ///AC
{
    cin >> n >> m;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> ara[i][j];
            if(ara[i][j] == 'W')
            {
                vec.push_back(make_pair(i,j));
            }
        }
    }

    int cnt = 0;

    for(int i=0; i<vec.size(); i++)
    {
        int sx = vec[i].first;
        int sy = vec[i].second;
        int ck = 0;

        for(int j=0; j<4; j++)
        {
            int u = sx + fx[j];
            int v = sy + fy[j];
            //printf("%d %d\n",u,v);
            if(u >= 0 && u < n && v >= 0 && v < m && ara[u][v] == 'P' && !ck)
            {
                cnt++;
                ck = 1;
                //printf("-->%d %d\n",u,v);
            }
        }
    }

    printf("%d\n",cnt);
}


