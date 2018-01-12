#include <bits/stdc++.h>
using namespace std;
#define M 1005

int par[M];
int N,E;

struct edge
{
    int u,v,w;
    bool operator < (const edge &p)const        ///AC
    {
        return (w < p.w);
    }
};

vector <edge> e;
vector <int> data;

void makeset()
{
    for(int i=0; i<=M ;i++)
        par[i] = i;
}

int find_set(int r)
{
    if(r == par[r])
        return r;
    return par[r] = find_set(par[r]);
}


int MST()
{
    sort(e.begin(),e.end());
    makeset();
    int count = 0,ck=1;
    for(int i=0; i<e.size(); i++)
    {
        int u,v,w;
        u = e[i].u;
        v = e[i].v;
        w = e[i].w;

        int x,y;
        x = find_set(u);
        y = find_set(v);
        if(x == y){
            ck = 0;
            data.push_back(w);
            continue;
        }
        par[x] = y;

    }
    return ck;
}

int main()
{
    while(scanf("%d%d",&N,&E)==2)
    {
        if(N == 0 && E == 0)
            break;

        e.clear();
        data.clear();

        for(int i=1; i<=E; i++)
        {
            int u,v,w;
            scanf("%d%d%d",&u,&v,&w);
            edge get;
            get.u = u;
            get.v = v;
            get.w = w;
            e.push_back(get);
        }

        int ck = MST();

        if(ck == 1)
            printf("forest\n");
        else
        {
            vector <int> :: iterator it;
            int count = 0;
            for(it = data.begin(); it!=data.end(); it++)
            {
                if(count == data.size()-1)
                    cout << *it;
                else
                    cout << *it << ' ';
                count++;
            }
            printf("\n");
        }

    }

}

/*

3 3
0 1 1
1 2 2
2 0 3
4 5
0 1 1
1 2 2
2 3 3
3 1 4
0 2 0
3 1
0 1 1
0 0

*/
