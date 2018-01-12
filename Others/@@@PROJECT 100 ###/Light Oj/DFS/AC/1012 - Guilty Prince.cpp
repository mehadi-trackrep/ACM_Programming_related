#include <bits/stdc++.h>
using namespace std;
#define MAX 22

int W,H;    /// W = r, H = c;

int fx[] = {-1,0,0,1};
int fy[] = {0,-1,1,0};

int visited[MAX][MAX],cnt = 1;
char grid[MAX][MAX];

void dfs(int sx,int sy){

    visited[sx][sy] = 1;

    for(int i = 0;i < 4;i++){

        int ux = sx + fx[i];
        int uy = sy + fy[i];

        if((ux >= 0 && ux < H) && (uy >= 0 && uy < W) && visited[ux][uy] == 0
            && grid[ux][uy] == '.'){

            //visited[ux][uy] = 1;
            cnt++;
            dfs(ux,uy);
        }
    }
}

int main()
{
    int t,c = 1;
    int px,py;

    scanf("%d",&t);

    while(t--){

        scanf("%d%d",&W,&H);

        getchar();

        for(int j,i = 0;i < H;i++){
            for(j = 0;j < W;j++){
                scanf("%c",&grid[i][j]);
                if(grid[i][j] == '@'){
                    px = i;
                    py = j;
                }
            }
            grid[i][j] = '\0';
            getchar();
        }

        memset(visited,0,sizeof(visited));

        dfs(px,py);

        printf("Case %d: %d\n",c++,cnt);

        cnt = 1;
    }

    return 0;
}

/*

1
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
