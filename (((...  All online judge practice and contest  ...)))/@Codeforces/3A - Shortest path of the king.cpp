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
    string SN,DN;   /// SN and DN are two points of coordinates -> (x1,y1) and (x2,y2) then :-

    while(cin >> SN >> DN)
    {
        int d1,d2;

        d1 = abs(SN[0] - DN[0]);    /// abs(x1-x2) / duti row er moddhe distance , that's the araari durotto
        d2 = abs(SN[1] - DN[1]);    /// abs(1y-y2) / duti column er moddhe distance , that's the araari durotto

        int ans = max(d1,d2);

        printf("%d\n",ans);

        char ch1,ch2;

        if(SN[0] > DN[0]) ch1 = 'L'; /// means left a move korte hobe ...
        else ch1 = 'R';

        if(SN[1] > DN[1]) ch2 = 'D'; /// means down a move korte hobe , because source point ti upore ace ...
        else ch2 = 'U';

        for(int i=1; i<=ans; i++)
        {
            if(d1 > 0)
            {
                printf("%c",ch1);
                d1--;
            }
            if(d2 > 0)
            {
                printf("%c",ch2);
                d2--;
            }
            printf("\n");
        }
    }

	return 0;
}

/// save test cases

/*




*/
