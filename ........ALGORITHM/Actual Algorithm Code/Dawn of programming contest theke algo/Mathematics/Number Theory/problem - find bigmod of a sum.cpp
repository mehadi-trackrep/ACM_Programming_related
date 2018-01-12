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

#define mx	1000000
#define mod	1000000007
#define INF	2147483647     ///  (1 + a + a^2+ a^3+ a^4+ a^5) % M = ?

                        /// we can write: 1 + a + a2+ a3+ a4+ a5 = (1 + a2+ a4) + a(1 + a2+ a4) = (1 + (a2) + (a2)2) + a(1 + (a2) + (a2)2)
ll m;
ll dp[100][10000];

ll bigmod(ll b,ll p) /// a^2 ber korlei kaj sesh ...
{
    if(p == 1) return b%m;
    if(p == 0) return 1%m;

    if(dp[b][p] != -1) return dp[b][p];

    if(p&1)
    {
        ll x = bigmod(b,p-1);
        dp[b][p-1] = x;
        return (b*x)%m;
    }
    else
    {
        ll l = bigmod(b,p/2);
        dp[b][p/2] = l;
        ll r = bigmod(b,p/2);

        return (l*r)%m;
    }
}

int main()
{
    ll a;
    while(sf2ll(a,m) == 2){
        ll x = bigmod(a,2);
        ll y = bigmod(x,2);
        ll one_part = (1+x+y);
        ll ans = one_part%m + ((a%m)*(one_part%m))%m;

        printf("%lld\n",ans);

    }

	return 0;
}

/// save test cases

/*

input:
5 10
output: 6


*/
