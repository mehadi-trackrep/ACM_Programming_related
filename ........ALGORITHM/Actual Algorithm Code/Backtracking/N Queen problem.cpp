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
#define WRITE                 freopen("output.txt", "w", stdout);   /// N => 1 to 13 er jonno thik ace , > 13 hole run time big hobe ...
/// I/O End


int queen[20]; /// queen[i] = column number of queen at ith row
int column[20], diagonal1[40], diagonal2[40]; /// arrays to mark if there is queen or not
        /// call with nqueen(1, 8) for 8 queen problem
        /// make sure column, diagonal1, diagonal2 are all 0 ,initially

int cnt = 0;

void print_position_of_N_queens(int n)
{
    printf("(row, column) = ");
    for(int i = 1; i <= n; i++) printf("(%d, %d) ", i,queen[i]);    /// Here , i means row
    printf("\n");
}

void nqueen(int at, int n)  /// at means row number
{
    if(at == n + 1) /// if n queens can be set with no attacks , printing their positions ...
    {
        print_position_of_N_queens(n);
        cnt++;
        return;
    }

    for(int i = 1; i <= n; i++) /// i means column (V.V.I.) , n ti column a boshaye dekhbo ...
    {
        if(column[i] || diagonal1[i + at] || diagonal2[n + i - at]) continue;   /// for easy , diagonal column gula k -> different number dara estimate kora hoyece ...

        queen[at] = i;

    /// note that, i - at can be negative and we can't have array of index negative
    /// so we are adding offset n with this.

        column[i] = diagonal1[i + at] = diagonal2[n + i - at] = 1;
        nqueen(at + 1, n);
        column[i] = diagonal1[i + at] = diagonal2[n + i - at] = 0;
    }
}

int main()
{

    int n;

    while(sf1(n) == 1)
    {
        cnt = 0;
        nqueen(1,n);
        printf("\t%d X %d chessboard a %d ti queen maximum %d vabe boshano jabe.\n",n,n,n,cnt); /// 16x16 er jonno 1,47,72,512
    }

    return 0;
}

/// save test cases

/*




*/
