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
    double l,w,r,area_t,area_c,area_a,a,x,hw,ans,d;     ///AC
    int t,cs=1;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf%lf%lf",&l,&w,&r);
        hw=w/2.0;

        area_c = pi*r*r;

        if(hw==r)
        {
            ans=area_c;
            printf("Case %d: %lf\n",cs++,ans);
        }

        else
        {
            x=2*sqrt((r*r)-(hw*hw));

            area_t = 0.5*x*hw;

            cerr << "triangle_area: " << area_t << endl;

            d=((2*r*r)-(x*x))/(2*r*r);

            a=(acos(d)*180)/pi;

            area_a = (a/360)*area_c;

            ans = area_c - 2*(area_a-area_t);

            printf("Case %d: %lf\n",cs++,ans);
        }
    }
    return 0;
}

/// save test cases

/*




*/

