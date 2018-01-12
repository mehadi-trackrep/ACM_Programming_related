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


//#define WHITE 0
//#define GRAY 1
//#define BLACK 2
#define mx 10009

string a,b;
bool cycle;
vector <int> v[mx];
char color[mx];

void dfs(int rt)
{
    color[rt] = 'G';

    for(int i=0; i<v[rt].size();i++)
    {
        int a = v[rt][i];
        if(color[a] == 'W')
        {
            dfs(a);
        }
        else if(color[a] == 'G')
        {
            cycle = true;
            return ;
        }
    }
}

int main()
{
    int tcas,m;

    sf1(tcas);

    loop_tcas(tcas)
    {
        cin >> m;

        map <string,int> mp;

        int x = 1;

        while(m--)
        {
            cin >> a >> b;
            if(mp[a] < 1)
            {
                mp[a] = x++;
            }
            if(mp[b] < 1)
            {
                mp[b] = x++;
            }
            v[mp[a]].push_back(mp[b]);
        }

        memset(color,'W',sizeof(color));

        cycle = false;

        dfs(x-1);

        if(cycle) printf("Case %d: No\n",cas);
        else printf("Case %d: Yes\n",cas);

        for(int i=1;i<=x-1; i++) v[i].clear();

    }
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

2
3
soda wine
water wine
wine water
2
soda wine
water wine


*/
