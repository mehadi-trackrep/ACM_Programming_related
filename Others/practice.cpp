#include <bits/stdc++.h>
using namespace std;

struct data{
    int u,v,w;
    bool operator < (const data & p)const{
        if(u == p.u)
            return w<p.w;
        return u<p.u;
    }
};

int main(){
    int a,b,c,n;

    data graph[15];

    cin >> n;

    for(int i=1; i<=n; i++){
        scanf("%d%d%d",&a,&b,&c);
        graph[i].u = a;
        graph[i].v = b;
        graph[i].w = c;
    }

    sort(graph, graph+n);

    for(int i=1; i<=n; i++){
        printf("%d -- %d => %d\n", graph[i].u, graph[i].v, graph[i].w);
    }
}

/***

1 2 5
2 3 3
1 4 2

***/
