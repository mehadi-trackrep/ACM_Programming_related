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
    char str[1005];

    int x=10;
    int cnt = 10;

    for(int i=1; cnt<=1005; i++)    ///AC
    {
        int a = -1,b = -1,c = -1;

        int n = x;

        if(n > 0)
        {
            c = n%10;
            n /= 10;
        }
        if(n > 0)
        {
            b = n%10;
            n /= 10;
        }
        if(n > 0)
        {
            a = n%10;
            n /= 10;
        }

        if(a != -1) str[cnt++] = a+48;
        if(b != -1) str[cnt++] = b+48;
        if(c != -1) str[cnt++] = c+48;

        //cerr << "check: " << str[cnt] << endl;

        x++;
    }

    str[cnt] = '/0';

    //cout << str << endl;

    int N;

    while(scanf("%d",&N) == 1)
    {
        if(N < 10) printf("%d\n",N);
        else printf("%d\n",str[N]-'0');
    }

	return 0;
}

/// save test cases ...

/*




*/
