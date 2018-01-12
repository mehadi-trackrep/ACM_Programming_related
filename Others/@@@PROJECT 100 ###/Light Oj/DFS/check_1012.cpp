/*

6 9
....#.
.....#
......
......
......
......
......
#@...#
.#..#.

*/
#include <stdio.h>
#include <string.h>

char vis[100][100],oil_grid[100][100];

int fx[] = {-1,0,0,1};
int fy[] = {0,-1,1,0};

int n,m,cnt=1;

void DFS(int ux,int uy)
{
    int i;
    //if(vis[ux][uy] == 1 || char[ux][uy] == 0) return;
    //cnt++;
    vis[ux][uy] = 1;

    for(i = 0;i < 4;i++){
        int vx = ux + fx[i];
        int vy = uy + fy[i];
        if( vx < n && vx >= 0 && vy < m && vy >= 0 ){
            if(vis[vx][vy] == 0 && oil_grid[vx][vy] == '.')
            {
                cnt++;
                DFS(vx,vy);
            }
        }
    }
}

int main()
{
    int i,j,px,py;

    while(scanf("%d%d",&n,&m) && n != 0){

        getchar();

        for(i = 0;i < n;i++){
            for(j = 0;j < m;j++)
            {
                scanf("%c",&oil_grid[i][j]);
                if(oil_grid[i][j] == '@'){
                    px = i;
                    py = j;
                    cerr << px << ' ' << py << endl;
                }
            }
            oil_grid[i][j] = '\0';
            getchar();
        }

        memset(vis,0,sizeof(vis));

        DFS(px,py);

        printf("%d\n",cnt);

    }

    return 0;
}
