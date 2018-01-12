/*
     BISMILLAH HIR RAHMANIR RAHIM
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

#define pi	acos(-1.0)
#define ll	long long
#define ull	unsigned long long
#define ff	first
#define ss	second
#define pb	push_back

#define mx	1000000
#define mod	1000000007
#define INF	2147483647
#define mxn	1000


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

ll Max[1000];
ll dp[1000];

ll rev(int n)       ///AC
{
    ll ans = 0;
    while(n > 0)
    {
        ans = ans*10 + (n%10);
        n /= 10;
    }
    return ans;
}

ll F(int n)
{
    if(n == 0) return 0;

    if(dp[n] != -1) return dp[n];

    ll ans = rev(n);
    ll val = abs(n-ans);

    dp[n] = val + F(val);

    //cerr << "n: "  << n << " dp[n]: " << dp[n] << endl;

    return dp[n];
}

int main()
{
    memset(dp,-1,sizeof(dp));

    dp[0] = 0;

    Max[0] = 0;

    for(int i=999; i>=1; i--)
    {
        ll ans = F(i);
    }

    for(int i=1; i<1000; i++)
    {
        Max[i] = max(dp[i],Max[i-1]);
    }

    int tcas;

    scanf("%d",&tcas);

    int n;

    while(tcas--)
    {
        scanf("%d",&n);

        printf("%lld\n",Max[n]);
    }

	return 0;
}

/// save test cases

/*


4
1
10
100
999

*/
