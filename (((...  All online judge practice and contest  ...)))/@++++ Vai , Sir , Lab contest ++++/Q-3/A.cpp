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

int main()
{
    ll m,n,k;

    int tcas;

    scanf("%d",&tcas);

    for(int cas=1; cas<=tcas; cas++)    /// AC
    {
        scanf("%lld",&m);

        ll v,v1,v2,v3;
        v = sqrt(m);

        v1 = v*v;
        v2 = (v-1)*(v-1);
        v3 = (v+1)*(v+1);

        ll a,b,c;

        a = abs(m-v1);
        b = abs(m-v2);
        c = abs(m-v3);

        if(a < b && a < c)
        {
            n = v;
            k = (-1)*(m-v1);
        }
        else if(b < c && b < a)
        {
            n = v-1;
            k = (-1)*(m-v2);
        }
        else if(c < a && c < b)
        {
            n = v+1;
            k = (-1)*(m-v3);
        }

        printf("Case %d: %lld %lld\n",cas,n,k);
    }

	return 0;
}

/// save test cases

/*




*/
