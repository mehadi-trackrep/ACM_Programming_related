/*
     "BISMILLAH HIR RAHMANIR RAHIM"
     MD. MEHADI HASAN
     SHAHJALAL UNIVERSITY OF SCIENCE AND TECHNOLOGY
*/

/// Containers Start            ///AC
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

#define Max 1000
#define mx 1000

#define loop_tcas_in(tcas) for(int cas=1; cas<=tcas; cas++)
#define loop_tcas_de(tcas) for(int cas=tcas; cas>=0; cas--)

#define for_in(a) for(int i=0; i<a; i++)
#define for_de(a) for(int i=a; i>0; i--)

    /// explanation:

/*

    Eulerian Cycle
    An undirected graph has Eulerian cycle if following two conditions are true.
    ….a) All vertices with non-zero degree are connected. We don’t care about vertices with zero degree because they don’t belong to Eulerian Cycle or Path (we only consider all edges).
    ….b) All vertices have even degree.

    Eulerian Path
    An undirected graph has Eulerian Path if following two conditions are true.
    ….a) Same as condition (a) for Eulerian Cycle
    ….b) If zero or two vertices have odd degree and all other vertices have even degree. Note that only one vertex with odd degree is not possible in an undirected graph (sum of all degrees is always even in an undirected graph)

    Note that a graph with no edges is considered Eulerian because there are no edges to traverse.

*/


int root,cnt = 0;
int N,E;

vector <int> vec[mx];
int vis[mx];
int deg[mx];

void dfs(int rt)    /// rt means root ...
{
    vis[rt] = 1;
    for_in(vec[rt].size())
    {
        int a = vec[rt][i];
        if(!vis[a])
        {
            cnt++;
            dfs(a);
        }
    }
}

int main()
{
	int tcas;

	cin >> tcas;

	loop_tcas_in(tcas)
	{
	    sf2(N,E);

	    int u,v;

	    memset(deg,0,sizeof(deg));

	    for_in(E)
	    {
	        sf2(u,v);

	        vec[u].push_back(v);
	        vec[v].push_back(u);

	        deg[u]++;
	        deg[v]++;
	    }

        int ck = 0;

	    for(int i=1; i<=N; i++)
        {
            if(deg[i] == 0){
                ck = 1;
                break;
            }
            else if(deg[i]&1)   /// odd degree
            {
                ck = 1;
                break;
            }
        }

        if(ck == 1) printf("Case %d: No\n",cas);
        else
        {
            cnt = 1;

            memset(vis,0,sizeof(vis));

            dfs(1);

            if(cnt == N) printf("Case %d: Yes\n",cas);  /// means connected
            else printf("Case %d: No\n",cas);

        }

	    for_in(N)
	    {
	        vec[i+1].clear();
	    }
	}

	return 0;
}

/// save test cases ...

/*




*/
