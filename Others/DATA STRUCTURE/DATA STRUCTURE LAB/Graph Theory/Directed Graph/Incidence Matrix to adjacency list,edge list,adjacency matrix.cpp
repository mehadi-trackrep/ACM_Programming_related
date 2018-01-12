#include <bits/stdc++.h>
using namespace std;
#define max 100

int V,E;
int adjacency_matrix[max][max],incidence_matrix[max][max];
int x,y;

struct edge
{
    int u,v;
}e[100];

void Adjacency_List()
{
    printf("Adjacency List:\n");
    int i,j;
    for(i=1;i<=V;i++)
    {
        printf("%d:\t",i);

        for(j=1;j<=V;j++){
            if(adjacency_matrix[i][j] == 1)
                printf("%d ",j);
        }

        printf("\n");

    }
}

void Adjacency_Matrix()
{
    int i,j;
    ///sob gula zero kora...
    for(i=1;i<=V;i++)
    {
        for(j=1;j<=V;j++)
            adjacency_matrix[i][j] = 0;

    }

    printf("Adjacency Matrix:\n");///..................

    for(i=1;i<=E;i++)
    {
        x = e[i].u;
        y = e[i].v;
        ++adjacency_matrix[x][y];///undirected graph
        ++adjacency_matrix[y][x];
    }
    for(i=1;i<=V;i++)
    {
        for(j=1;j<=V;j++)
            printf("%d ",adjacency_matrix[i][j]);
        printf("\n");

    }
}

void Adjacency_Matrix_other_method()    ///direct...
{
    int i,j;
    int start,end;
    ///sob gula zero kora...
    for(i=1;i<=V;i++)
    {
        for(j=1;j<=V;j++)
            adjacency_matrix[i][j] = 0;

    }

    printf("Adjacency Matrix:\n");

    for(j=1; j<=E; j++)
    {
        for(i=1; i<=V; i++)///traverse with along to column
        {
            if(incidence_matrix[i][j] == 1)
                start = i;
            else if(incidence_matrix[i][j] == 2)
                end = i;
            else if(incidence_matrix[i][j] == 3){
                start = i;
                end = i;
            }
        }
        adjacency_matrix[start][end] = 1;
    }

    for(i=1;i<=V;i++)
    {
        for(j=1;j<=V;j++)
            printf("%d ",adjacency_matrix[i][j]);
        printf("\n");

    }
}

void Edge_List(int k)
{
    int i;
    ///edge list:
    for(i=1;i<k;i++)
    {
        printf("%d %d\n",e[i].u,e[i].v);
    }
}

int main()
{
    scanf("%d%d",&V,&E);
    //int x,y;
    int i,j;

    ///incidence matrix input:
    for(i=1;i<=V;i++)
    {
        for(j=1;j<=E;j++){
            scanf("%d",&incidence_matrix[i][j]);
        }
    }

    int k=1;
    for(i=1;i<=E;i++)
    {
        for(j=1;j<=V;j++){
            if(incidence_matrix[j][i] == 1){
                e[k].u = j;
            }
            else if(incidence_matrix[j][i] == 2){
                e[k].v = j;
            }
            else if(incidence_matrix[j][i] == 3){
                e[k].u = j;
                e[k].v = j;
            }
        }

        k++;
    }

    Edge_List(k);
    Adjacency_Matrix_other_method();
    Adjacency_List();

    return 0;
}

/*

4 5
1 1 1 3 2
2 0 0 0 0
0 2 0 0 1
0 0 2 0 0


*/
