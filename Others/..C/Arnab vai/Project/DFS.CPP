#include<bits/stdc++.h>
using namespace std;

int mat[11][11],r,c,vis[11][11],cnt = 0;

int fx[]={-1,-1,-1,0,0,1,1,1};
int fy[]={-1,0,1,-1,1,-1,0,1};

void DFS(int ux,int uy)
{
    //printf("-->%d %d\n",ux,uy);
    if(vis[ux][uy] == 1 || mat[ux][uy] == 0) return;
    cnt++;
    vis[ux][uy] = 1;

    for(int i=0;i<8;i++){
        int vx=ux+fx[i];
        int vy=uy+fy[i];
        if(vx<r && vx>=0 && vy<c && vy>=0){
            DFS(vx,vy);
        }
    }
}

int main()
{
    int i,j;
    while(scanf("%d%d",&r,&c)==2){
        for(i=0;i<r;i++){
            for(j=0;j<c;j++)
                scanf("%d",&mat[i][j]);
        }
        memset(vis,0,sizeof(vis));
        int ans=0;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(!vis[i][j] && mat[i][j] == 1) {
                    cnt=0;
                    DFS(i,j);
                    ans=max(ans,cnt);
                    printf("===>%d\n",ans);
                }
            }

        }

        //printf("===>%d\n",ans);
    }
    return 0;
}
/*
4 4
1 0 1 0
0 1 0 1
1 0 1 0
0 1 0 1

4 4
1 1 1 0
0 0 1 1
1 1 0 0
0 0 0 1
*/
