#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
#define max 100
int N,E,x;
int par[max];

struct edge{
    int u,v,w;
};

void makeset()
{
    for(int i=1; i<=N; i++)
        par[i] = i;
}

int representative_find(int n)
{
    if(par[n] == n)
        return n;
    //par[n] =
    representative_find(par[n]);
}

void re_union(int a,int b)
{
    int u,v;
    u = representative_find(a);
    v = representative_find(b);

    if(u!=v){
        par[u] = v;
    }
}

int main()
{

    cin >> N >> E;
    vector <edge> e;

    int n1,n2;

    makeset();

    for(int i = 1;i <= E;i++){
        cin >> n1 >> n2;
        edge get;
        get.u = n1;
        get.v = n2;
        e.push_back(get);
    }

    for(int i = 0;i < (int)e.size();i++){
        re_union(e[i].u,e[i].v);
    }

    cin >> x;
    int rep = representative_find(x);
    cout << rep << endl;
    return 0;
}

/*

5 6
1 2
2 3
3 4
4 5
2 4
1 4

9 7
1 2
2 3
3 4
4 5
2 6
6 7
8 9
9

5 4
1 2
2 3
3 4
4 5
5

*/
