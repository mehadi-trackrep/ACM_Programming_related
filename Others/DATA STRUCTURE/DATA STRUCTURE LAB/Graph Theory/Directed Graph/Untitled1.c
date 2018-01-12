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

void Incidence_Matrix()
{
    int i,j;
    printf("Incidence Matrix:\n");///....................
    for(i=1;i<=E;i++)
    {
        x = e[i].u;
        y = e[i].v;
        for(j=1;j<=V;j++)
        {
            if(j == x || j == y)
                incidence_matrix[j][i] = 1;
            else
                incidence_matrix[j][i] = 0;
        }
    }

    for(i=1;i<=V;i++)
    {
        for(j=1;j<=E;j++)
            printf("%d ",incidence_matrix[i][j]);
        printf("\n");

    }
}

int main()
{
    scanf("%d%d",&V,&E);
    //int x,y;
    int i,j;


    for(i=1;i<=E;i++)
    {
        scanf("%d%d",&x,&y);
        e[i].u = x;
        e[i].v = y;
        adjacency_matrix[x][y] = 1;
        adjacency_matrix[y][x] = 1;
    }

    Adjacency_List();
    Adjacency_Matrix();
    Incidence_Matrix();

    return 0;
}

/*

4 7
1 2
1 2
1 2
2 3
3 4
3 4
3 1

*/
