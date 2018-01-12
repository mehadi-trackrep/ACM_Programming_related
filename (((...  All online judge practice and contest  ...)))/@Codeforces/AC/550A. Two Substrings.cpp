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


#define PI                    acos(-1.0)
#define Pi                    3.141592653589793

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


int main()
{
    string str;
    int len;

    while(cin >> str)
    {
        len = str.length();

        int ck1 = 0,ck2 = 0,i1,i2;      ///AC

        i1 = len; /// because first loop true na hole 2nd loop chalanor dorkar nay...
        i2 = len;

        for(int i=0; i<len; i++)
        {
            if(str[i] == 'A' && str[i+1] == 'B')
            {
                ck1++;
                i1 = i+2;
                break;
            }
        }
        for(int i=i1; i<len; i++)
        {
            if(str[i] == 'B' && str[i+1] == 'A')
            {
                ck1++;
                break;
            }
        }

        for(int i=0; i<len; i++)
        {
            if(str[i] == 'B' && str[i+1] == 'A')
            {
                ck2++;
                i2 = i+2;
                break;
            }
        }
        for(int i=i2; i<len; i++)
        {
            if(str[i] == 'A' && str[i+1] == 'B')
            {
                ck2++;
                break;
            }
        }

        if(ck1 == 2 || ck2 == 2) printf("YES\n");
        else printf("NO\n");
    }

	return 0;
}

/// save test cases ...

/*




*/
