#include <bits/stdc++.h>
using namespace std;
#define max 100

int N,E;

int par[max],check[max];

void makeset()
{
    for(int i=1; i<=N; i++)
    {
        par[i] = i;
    }
}

int find(int r)
{
    if(par[r] == r)
        return r;
    else
        return find(par[r]);

}

void re_union(int a,int b)
{
    int u,v;
    u = find(a);
    v = find(b);
    if(u != v)
    {
        par[u] = v;
        //printf("=>\n");
    }
}

int main()
{
    cin >> N >> E;
    makeset();
    int x,y;
    for(int i=1; i<=E; i++)
    {
        cin >> x >> y;
        re_union(x,y);
    }

    for(int i=1; i<=N; i++)
    {
        int r = find(i);
        printf("\n%d\n",r);
    }

    return 0;
}

/*

5 7
1 2
2 3
3 4
4 5
1 4
2 4
1 5


*/
