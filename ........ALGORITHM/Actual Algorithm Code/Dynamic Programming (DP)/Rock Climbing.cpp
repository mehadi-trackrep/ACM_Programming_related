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

#define inf 1<<28

int mat[][10]=
{
    {-1, 2, 5},
    {4, -2, 3},
    {1 , 2 ,10,}
};

int dp[10][10];
int r=3,c=3;

int call(int i,int j)
{
    cerr << "i: " << i << " and j: " << j << endl;
    if(i>=0 && i<r and j>=0 and j<c) //if still inside the array
    {
        if(dp[i][j]!=-1) return dp[i][j];
        int ret=-inf;
//try to move to 3 direction,also add current cell's point
        ret=max(ret,call(i+1,j)+mat[i][j]);
        ret=max(ret,call(i+1,j-1)+mat[i][j]);
        ret=max(ret,call(i+1,j+1)+mat[i][j]);
        return dp[i][j]=ret;
    }
    else return 0; //if outside the array
}


int main()
{
// READ("in");
    memset(dp,-1,sizeof(dp));
    printf("%d\n",call(0,0));
    return 0;
}

/// save test cases

/*




*/
