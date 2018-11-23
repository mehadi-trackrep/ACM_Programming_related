
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

struct edge{
    int u,v;
};

map <char,int> mp;
map <string,int> mp1;
vector <edge> graph;
int V,E;

void map_char()
{
    int v=1;

    for(int i=1; i<=E; i++)
    {
        char x,y;
        cin >> x >> y;
        if(mp[x] < 1)
            mp[x] = v++;
        if(mp[y] < 1)
            mp[y] = v++;
        edge get;
        get.u = mp[x];
        get.v = mp[y];
        graph.push_back(get);
    }

    printf("\n\n");
    map <char,int> :: iterator it;

    for(it=mp.begin();it!=mp.end();it++)
    {
        printf("%c->%d\n",it->first,it->second);
    }
}

void map_string()
{
    int v=1;
    string x,y;

    for(int i=1; i<=E; i++)
    {

        cin >> x >> y;
        if(mp1[x] < 1)
            mp1[x] = v++;
        if(mp1[y] < 1)
            mp1[y] = v++;

        edge get;
        get.u = mp1[x];
        get.v = mp1[y];
        graph.push_back(get);
    }

    printf("\n\n");

    map <string,int> :: iterator it;

    for(it=mp1.begin();it!=mp1.end();it++)
    {

        ///printf("%s->%d\n",it->first,it->second); /// string a evabe hobe na...:)

        cout << "word: " << it->first << ", count: " << it->second << endl;
    }
}

int main()
{

    cin >> V >> E;
    ///getchar(); cin er khettere getchar() lage na...:)

    ///map_char();
    map_string();

    printf("\n\n");

    for(int i=0;i<graph.size();i++)
    {
        printf("%d %d\n",graph[i].u,graph[i].v);
    }

    return 0;
}

/*

7 7
A C
E C
D C
G A
G F
B F
B D

or,

6 8
Breakfast Office
Office Dinner
Dressup Office
Office Sports
Office Email
Email Sports
Email Dinner
Dinner Sports


*/
