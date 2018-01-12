#include <bits/stdc++.h>
using namespace std;

struct edge
{
    int u,v;

};

vector <edge> v;


int main()
{
    int adj_mat[100][100];
    int i,j;
    int node;
    cin >> node;

    for(i=1; i<=node; i++)
    {
        for(j=1; j<=node; j++)
        {
            scanf("%d",&adj_mat[i][j]);
        }
    }
//    cerr <<"\n\n";
//    for(i=1; i<=node; i++)
//    {
//        for(j=1; j<=node; j++)
//        {
//            printf("%d ",adj_mat[i][j]);
//        }
//        printf("\n");
//    }

    for(i=1; i<=node; i++)
    {
        for(j=1; j<=node; j++)
        {
            int val = adj_mat[i][j];
            while(val >= 1)
            {
                edge get;
                get.u = i;
                get.v = j;
                v.push_back(get);
                val--;
            }
        }
    }

    vector <edge> :: iterator it;

    for(it = v.begin(); it!=v.end(); it++)
    {
        edge get;
        get = *it;
        printf("%d->%d\n",get.u,get.v);
    }

    return 0;
}


/*

5
0 1 0 0 2
0 1 0 0 0
1 0 0 1 0
0 0 1 0 1
0 0 0 0 0


*/
