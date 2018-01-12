/*
     "BISMILLAH HIR RAHMANIR RAHIM"
     MD. MEHADI HASAN
     SHAHJALAL UNIVERSITY OF SCIENCE AND TECHNOLOGY
*/

/// Containers Start
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <iomanip>
#include <sstream>
#include <bitset>
#include <cstdlib>
#include <iterator>
#include <algorithm>
/// C Header Files
#include <cstdio>
#include <cctype>
#include <cmath>
#include <math.h>
#include <ctime>
#include <tgmath.h>
#include <cstring>

using namespace std;


#define PI                    acos(-1.0)
#define Pi                    3.141592653589793
#define pi                    acos(-1.0)

#define SET(a)                memset( a, -1,    sizeof a )
#define CLR(a)                memset( a,  0,    sizeof a )
#define MEM(a,val)            memset( a,  val,  sizeof(a) )

#define ll                    long long
#define mod                   1000000007
#define INF                   2147483647


/// I/O Start
#define sf                    scanf
#define pf                    printf

#define sf1(a)                scanf("%d", &a)
#define sf2(a,b)              scanf("%d %d",&a, &b)
#define sf3(a,b,c)            scanf("%d %d %d", &a, &b, &c)
#define sf4(a,b,c, d)         scanf("%d %d %d %d", &a, &b, &c, &d)

#define sf1ll(a)              scanf("%I64d", &a)
#define sf2ll(a,b)            scanf("%I64d %I64d", &a, &b)
#define sf3ll(a,b,c)          scanf("%I64d %I64d %I64d", &a, &b, &c)
#define sf4ll(a,b,c, d)       scanf("%I64d %I64d %I64d %I64d", &a, &b, &c, &d)

#define READ                  freopen("input.txt", "r", stdin);
#define WRITE                 freopen("output.txt", "w", stdout);

#define debug(x) cout << "> " << #x << " = " << x << endl;
#define Max 10000001
#define mx 10000001
#define loop_tcas(tcas) for(int cas=1; cas<=tcas; cas++)



vector<int> graph[mx];
vector <int> top_sort;
int visited[mx];

int N,E;

void dfs(int root_node)
{
    //cerr << "-->" << endl;
    visited[root_node] = 1;

    for(int i = 0; i<graph[root_node].size(); ++i)
    {
        int a = graph[root_node][i];
        if(!visited[a])
            dfs(a);
    }

    top_sort.push_back(root_node);
}

int main()
{
    int u, v;

    while(scanf("%d%d",&N,&E) == 2)     ///AC
    {

        if(N == 0 && E == 0) break;

        while(E--)
        {
            scanf("%d%d", &u, &v);
            graph[u].push_back(v);
        }

        memset(visited,0,sizeof(visited));

        for(int i=1; i<=N; i++)
        {
            if(!visited[i])
                dfs(i);
        }

        //printf("Top sort list - \n");

        reverse(top_sort.begin(),top_sort.end());

        for(int i=0; i<top_sort.size(); i++)
        {
            if(i == 0) printf("%d",top_sort[i]);
            else printf(" %d",top_sort[i]);
        }

        for(int i=0; i<=N; i++) graph[i].clear();

        top_sort.clear();

        printf("\n");
    }

    return 0;
}

/*

6 8
1 2
1 3
2 3
2 4
3 4
3 5
5 6
4 6


3 4
1 2
2 2
3 1
3 2


*/
