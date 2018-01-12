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
#define mx 10000001
#define mxn 100		/// means maximum node number ...

#define loop_tcas_in(tcas) for(int cas=1; cas<=tcas; cas++)

#define for_in(a) for(int i=1; i<=a; i++)
#define for_de(a) for(int i=a; i>=0; i--)


int coin[mxn];
int make_value;
int dp[mxn][10005];
int total_coin;
int k;
struct info
{
    int i,amount;
}parent[mxn][10005];

int call(int i,int amount)
{
    if(i >= total_coin)   /// All coins have been taken
    {
        if(amount == 0)return 1;
        else return 0;
    }

    if(dp[i][amount] != -1) return dp[i][amount]; ///no need to calculate same state twice
    int ret1=0,ret2=0;

    for(int j=1; j<=k; j++)
    {
        if(amount - coin[i] >= 0)
        {

            ret1 = call(i,amount - coin[i]); ///try to take coin i
        }
        else break;

    }

    ret2 = call(i+1,amount); ///dont take coin i

    return dp[i][amount] = (ret1+ret2)%mod; ///storing and returning.
}


int main()
{
    int tcas;
    cin >> tcas;

    loop_tcas_in(tcas)
    {

        cin >> total_coin >> k;

        for(int i=0; i<total_coin; i++) scanf("%d",&coin[i]);

        memset(dp,-1,sizeof (dp));

        int ans = call(0,k);

        printf("Case %d: %d\n",cas,ans);
    }

    return 0;
}

/// save test cases ...

/*


2
3 5
1 2 5
4 20
1 2 3 4


*/


