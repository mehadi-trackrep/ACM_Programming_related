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
/// I/O End

#define debug(x) cout << "> " << #x << " = " << x << endl;
#define Max 10000001;

/// for loop

#define loop_tcas(tcas) for(int cas=1; cas<=tcas; cas++)

vector <int> graph[10000];              /// light oj 1003 Drunk problem ...
int vis[10000];
bool cycle;
map <string,int> mp;
map <int,string> mp1;

void DFS(int src)
{
    if(cycle || vis[src] == 11) return; /// vis[src] == 11 means , src node er kaj ageyi sesh hoye gece ...
                                        /// mane , src theke joto jagay jaoa jay sob sesh ... for input:
                                                                                                        /*
                                                                                                           soda wine
                                                                                                           water wine
                                                                                                        */
    if(vis[src])
    {
        cerr << "mp1[src]: " << mp1[src] << endl;
        cycle = true;
        return;
    }
    vis[src] = 1;
    for(int i=0; i<graph[src].size(); i++) DFS(graph[src][i]);

    vis[src] = 11;  /// src theke joto dur possible sob node traverse kora sesh hole node ti r src hishebe kaj korte parbe na ...

}

int main()      ///AC
{

    int tc,E;
    cin >> tc;
    string str1,str2;
    loop_tcas(tc)
    {
        cin >> E;
        //map <string,int> mp;
        int x=1;
        while(E--)
        {
            cin >> str1 >> str2;
            if(mp[str1] == 0) {
                mp1[x] = str1;
                mp[str1] = x++;
            }
            if(mp[str2] == 0){
                mp1[x] = str2;
                mp[str2] = x++;
            }

            graph[mp[str1]].push_back(mp[str2]);
        }

        memset(vis,0,sizeof(vis));

        for(int i=1; i<x; i++)
        {
            if(!vis[i]) DFS(i);
        }

        if(cycle) printf("Case %d: No\n",cas);
        else printf("Case %d: Yes\n",cas);

        cycle = false;

        for(int i=1; i<x; i++) graph[i].clear();
        mp.clear();
    }

    return 0;
}

/// save test cases ...

/*

2
2
soda wine
water wine
3
soda wine
water wine
wine water


*/

