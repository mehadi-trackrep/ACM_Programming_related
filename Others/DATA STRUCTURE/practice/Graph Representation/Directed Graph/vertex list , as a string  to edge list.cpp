#include <bits/stdc++.h>
using namespace std;

struct edge
{
    int u,v;

}e[100];

int main()
{
    int adj_mat[100][100];
    int i,j;
    int node;
    cin >> node;
    getchar();

    int k=1;
    for(i=1; i<=node; i++)  /// input vertex list as a char bt char...
    {
        char ch,u;
        for(int j=1; ;j++)
        {
            scanf("%c",&ch);
            if(ch == '\n')
                break;
            if(j == 1)
            {
                u = ch;
            }
            else if(ch >= '0' && ch <= '9')
            {
                e[k].u = u-'0';
                e[k].v = ch-'0';
                k++;
            }
        }
    }

    printf("\n\nEdge list:\n\n");

    for(int i=1; i<k; i++)
    {
        printf("%d->%d\n",e[i].u,e[i].v);
    }

    return 0;
}


/*

5
1-2
2-3,4
3-4,5
4-1
5-


*/

