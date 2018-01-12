#include <bits/stdc++.h>
using namespace std;

char oil_grid[105][105];  /// AC
int vis[105][105];

int fx[]= {-1,-1,-1,0,0,1,1,1};
int fy[]= {-1,0,1,-1,1,-1,0,1};
int n,m;

void DFS(int ux,int uy)
{
    int i;

    for(i = 0; i < 8; i++)
    {
        int vx = ux + fx[i];
        int vy = uy + fy[i];
        if(vx >= 0 && vx < n && vy >= 0 && vy < m)
            vis[vx][vy]++;
    }
}

int main()
{
    int i,j,cnt,c = 1;

    while(scanf("%d%d",&n,&m)==2)
    {
        getchar();
        if(n == 0 && m == 0)
            break;
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
                scanf("%c",&oil_grid[i][j]);

            getchar();
            //gets(oil_grid[i]);
        }
        memset(vis,0,sizeof(vis));
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                if(oil_grid[i][j] == '*')
                {
                    DFS(i,j);
                }
            }
        }
        ///output:
        if(c > 1)
            cout << endl;
        printf("Field #%d:\n",c++);
        
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                if(oil_grid[i][j] == '*')
                    cout << oil_grid[i][j];
                else
                    cout << vis[i][j];
            }
            cout << "\n";
        }
    }

    return 0;
}

/*

4 4
*...
....
.*..
....

3 5
**...
.....
.*...
0 0

*/
