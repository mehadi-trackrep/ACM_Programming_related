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

#define loop_tcas(tcas)   for(int cas=1; cas<=tcas; cas++)

#define inf 1<<28

int mat[200][205];
int dp[200][205];

int N;

int call(int i,int j)
{
    if(i>=1 && i<=3 && j>=1 && j<=3) /// if still inside the array
    {
        if(dp[i][j] != -1) return dp[i][j];

        int ret = 10000;

/// try to move to 3 direction,also add current cell's point

        ret = min(ret,call(i+1,j+1) + mat[i][j]);
        ret = min(ret,call(i+1,j+2) + mat[i][j]);
        ret = min(ret,call(i+1,j-1) + mat[i][j]);
        ret = min(ret,call(i+1,j-2) + mat[i][j]);

        return dp[i][j] = ret;
    }
    else return 0; /// if outside the array
}

int main()
{
    int tcas;
    cin >> tcas;
    loop_tcas(tcas)
    {
        cin >> N;

        for(int i=1; i<=N; i++)
        {
            for(int j=1; j<=3; j++) scanf("%d",&mat[i][j]);
        }

        memset(dp,-1,sizeof(dp));

        int a,b,c;
//
//        a = call(1,1);
//        b = call(1,2);
//        b = call(1,3);

        int ans = min(a,b,c);

        printf("Case %d: %d\n",cas,ans);

    }

    return 0;
}

/// save test cases

/*

2

4
13   23   12
77   36   64
44   89   76
31   78   45

3
26   40   83
49   60   57
13   89   99

*/
