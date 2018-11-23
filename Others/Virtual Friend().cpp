#include<iostream>
#include<cstdio>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>
#include<deque>
#include<iterator>
#include<assert.h>
#include<bitset>
#include<climits>
#include<ctime>
#include<complex>

using namespace std;

#define PI acos(-1.0)
#define i64 long long
#define M 5000

struct edge
{
    int u,v;
};

int par[M];
int check[M];

void makeset(int X)
{
    for(int i=1; i<=X; i++)
    {
        par[i] = i;
    }

}

int find_set(int r)
{
    if(r == par[r])
        return r;
    else return par[r] = find_set(par[r]);
}

void re_union(int u,int v)
{
    int x,y;
    x = find_set(u);
    y = find_set(v);
    if(x!=y)
    {
        par[x] = y;
    }
}

int main()
{
    int C,R;

    while(scanf("%d%d",&C,&R) == 2)
    {
        getchar();
        //cerr << "yes\n";
        if(C == 0 && R == 0)
            break;

        map <string,int> mp;
        string str,u,v;
        vector <edge> e;

        mp.clear();
        e.clear();

        int x=1;

        for(int i=1; i<=C; i++)
        {
            cin >> str;
            if(mp[str] < 1)
                mp[str] = x++;
        }

        makeset(x);
        memset(check,0,sizeof(check));

        for(int i=1; i<=R; i++)
        {
            cin >> u >> v;
            edge get;
            get.u = mp[u];
            get.v = mp[v];
            re_union(mp[u],mp[v]);
            e.push_back(get);
        }

        for(int i=1; i<=C; i++)
        {
            int rep;
            rep = find_set(i);
            ++check[rep];
        }

        int total = 0;

        for(int i=1; i<=C; i++)
        {
            //total = max(total,check[i]);
            //cerr << "===>" << check[i] << endl;
            if(total < check[i])
                total = check[i];
        }

        cout << total << endl;

//        for(int i=0; i<e.size(); i++)
//        {
//            cerr << e[i].u << "->" << e[i].v << endl;
//        }
    }

    return 0;
}

/*

5 2
caterpillar
bird
horse
elefant
herb
herb caterpillar
caterpillar bird

0 0

*/
