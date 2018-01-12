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

#define I64                    long long
#define i64                    long long
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
#define mx 10005
#define mxn 105	/// means maximum node number ...

#define loop_tcas_in(tcas) for(int cas=1; cas<=tcas; cas++)

#define for_in(a) for(int i=1; i<=a; i++)
#define for_de(a) for(int i=a; i>=0; i--)

ll val[mxn];
ll dp[mx];
ll N,K;


void solve(ll cas)      ///AC
{

    scanf("%lld%lld",&N,&K);

    for(ll i=1; i<=N; i++) scanf("%lld",&val[i]);

    memset(dp,0,sizeof(dp));    /// initially dhore nilam , sob value bananor way 0
    dp[0] = 1;     /// means 0 value banano jay only 1 vabe , r ta holo kono taka na niye ... , that's the base criteria(condition)

    for(ll i=1; i<=N; i++)
    {
        for(ll j=val[i]; j<=K; j++)
        {
            ll new_way = dp[j-val[i]];
            dp[j] = (dp[j] + new_way)%mod;  /// total way of making "j" value
        }
    }

    printf("Case %lld: %lld\n",cas,dp[K]);
}

int main()
{
    ll tcas,c=1;
    cin >> tcas;
    while(tcas--)
    {
        solve(c);
        c++;
    }
    return 0;
}

/*


2
3   5
1   2   5
4   20
1   2   3   4


*/
