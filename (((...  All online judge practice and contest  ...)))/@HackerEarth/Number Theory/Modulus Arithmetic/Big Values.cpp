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
#define mxn 100		/// means maximum node number ...

#define loop_tcas_in(tcas) for(int cas=1; cas<=tcas; cas++)
//#define loop_tcas_de(tcas) for(int cas=tcas; cas>=0; cas--)

#define for_in(a) for(int i=1; i<=a; i++)
#define for_de(a) for(int i=a; i>=0; i--)

ll factorial(ll n)
{
    if(n <= 1) return 1;

    return (n*factorial(n-1)) % mod;
}

ll modular_Exponentiation_Iterative(ll x, ll n)         ///AC , v.v.i.
{
    ll result = 1;

    while (n > 0)
    {
        if (n % 2 == 1)
            result = (result * x) % mod;
        x = (x * x) % mod;
        n = n/2;
    }

    return result;

}

ll euler_phi(ll x)
{
    return modular_Exponentiation_Iterative(x,mod-2);
}

int main()      /// C(n,r) = n!/((n-r)!*r!)     so, C(n,6) = n!/((n-6)!*6!)
                /// A/B mod m thakle modular inverse use korbo --> (B^-1) % m = B^(m-2) % m
{
    ll n,ans;

    sf1ll(n);

    ll up_val = factorial(n);

    ll down_val1 = factorial(n-6);
    ll down_val2 = factorial(6);

    ll down_val = (down_val1*down_val2)%mod;

    ll val = euler_phi(down_val);

    ans = (up_val*val)%mod;

    printf("%lld\n",ans);

	return 0;
}

/// save test cases ...

/*




*/
