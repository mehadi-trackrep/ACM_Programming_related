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

struct data
{
    ll x,y;
}ara[100005];

int main()
{
    long long n,m;

    while(sf2ll(n,m) == 2)
    {
        long long a[100005],b[100005],t,r = 0,c = 0;    ///AC

        //long long ara[100005];

        for(int i=1; i<=m; i++)
        {
            sf2ll(ara[i].x,ara[i].y);
        }

        t = n*n;

        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));

        for(int i=1; i<=m; i++)
        {
            ll x,y;

            x = ara[i].x;
            y = ara[i].y;

            if(a[x] == 0)
            {
                t = t - n + c;
                a[x] = 1;
                r++;
            }
            if(b[y] == 0)
            {
                t = t - n + r;
                b[y] = 1;
                c++;
            }

            printf("%I64d ",t);
        }
        printf("\n");
    }

	return 0;
}

/// save test cases

/*




*/
