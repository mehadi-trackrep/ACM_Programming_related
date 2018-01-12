/*
3 5
*@*@*
**@**
*@*@*

5 5
****@
*@@*@
*@**@
@@@*@
@@**@
*/

#include <bits/stdc++.h>
using namespace std;

char vis[100][100],oil_grid[100][100];

int fx[]={-1,-1,-1,0,0,1,1,1};
int fy[]={-1,0,1,-1,1,-1,0,1};
int n,m;

void DFS(int ux,int uy) ///AC
{
    int i;
    //if(vis[ux][uy] == 1 || char[ux][uy] == 0) return;
    //cnt++;
    vis[ux][uy] = 1;

    for(i = 0;i < 8;i++){
        int vx = ux + fx[i];
        int vy = uy + fy[i];
        if( vx < n && vx >= 0 && vy < m && vy >= 0 ){
            if(vis[vx][vy] == 0 && oil_grid[vx][vy] == '@') DFS(vx,vy);
        }
    }
}

int main()
{
    int i,j,cnt;

    while(scanf("%d%d",&n,&m) && n != 0){

        getchar();

        for(i = 0;i < n;i++){
            for(j = 0;j < m;j++)
                scanf("%c",&oil_grid[i][j]);
            oil_grid[i][j] = '\0';
            getchar();
        }

        memset(vis,0,sizeof(vis));
        cnt = 0;

        for(i = 0;i < n;i++){
            for(j = 0;j < m;j++){
                if(vis[i][j] == 0 && oil_grid[i][j] == '@') {
                    cnt++;
                    DFS(i,j);
                }
            }
        }

        printf("%d\n",cnt);

        /*printf("\n");
        for(i = 0;i < n;i++){
            for(j = 0;j < m;j++)
                printf("%c",oil_grid[i][j]);
            printf("\n");
        }*/
    }

    return 0;
}
