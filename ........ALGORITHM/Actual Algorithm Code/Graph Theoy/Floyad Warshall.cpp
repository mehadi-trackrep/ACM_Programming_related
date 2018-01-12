#include<bits/stdc++.h>
using namespace std;
#define inf 100000000
int main()
{
    int i,j,k,l,n,m,x,y,node,edge,weight;
    int ara[100][100],b[100][100];

    for(i=0;i<100;i++){
        for(j=0;j<100;j++){
            if(i==j){
                ara[i][j]=0;
                continue;
            }
            ara[i][j]=inf;
        }
    }

    cin>>node>>edge;

    for(i=0;i<edge;i++){
        cin>>x>>y>>weight;
        ara[x][y]=weight;
        //ara[y][x]=weight;
    }

    for(k=1;k<=node;k++){
        for(i=1;i<=node;i++){
            for(j=1;j<=node;j++){
                if(ara[i][j]>ara[i][k]+ara[k][j]){
                    ara[i][j]=ara[i][k]+ara[k][j];
                    b[i][j]=k;
                    //b[i][k]=i;
                    //b[k][j]=j;
                }
            }
        }
    }
    int from,to;
    /*for(i=1;i<=1;i++){
        for(j=i;j<=node;j++){
            printf("%d %d %d\n",i,j,ara[i][j]);
        }
    }*/
    cin>>from>>to;
    printf("%d\n",ara[from][to]);
    int path;
    for(i=1;i<=node;i++){
        path=b[from][to];
        printf("%d ",path);
        to=path;
        if(to==from) break;
    }
    return 0;
}

/*


5 14
1 2 3
1 3 22
1 5 4
2 1 3
2 3 5
3 1 22
3 2 5
3 4 9
3 5 20
4 3 9
4 5 4
5 1 4
5 3 20
5 4 4
1 3


*/
