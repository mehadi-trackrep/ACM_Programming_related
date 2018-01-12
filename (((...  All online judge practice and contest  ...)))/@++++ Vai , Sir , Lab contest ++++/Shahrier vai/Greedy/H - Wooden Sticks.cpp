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

int n;

struct data1
{
    int a,b;        /// ekhane a == w && b == l
    bool operator < (const data1 & p)const{
        return a < p.a;
    }
}ara1[5005];

struct data
{
    int a,b;    /// ekhane a == l && b == w
    bool operator < (const data & p)const{
        return a < p.a;
    }
}ara[5005];

int ck1()
{
    sort(ara,ara+n);

    int total = 1;

    for(int i=1; i<n; i++)
    {
        if(ara[i].b < ara[i-1].b) total++;
    }

    return total;
}

int ck2()
{
    //cerr << "check: " << n << endl;

    sort(ara1,ara1+n);

    int total = 1;

    for(int i=1; i<n; i++)
    {
        if(ara1[i].b < ara1[i-1].b) total++;
    }

    return total;
}

int main()
{
    int tcas;

    cin >> tcas;

    while(tcas--)
    {
        cin >> n;
        for(int i=0; i<n; i++)
        {
            scanf("%d%d",&ara[i].a,&ara[i].b);

            ara1[i].b = ara[i].a;
            ara1[i].a = ara[i].b;
        }

        int val1 = ck1();
        int val2 = ck2();

        if(val1 > val2)
            printf("%d\n",val2);
        else printf("%d\n",val1);
    }

	return 0;
}

/// save test cases ...

/*

3
5
4 9 5 2 2 1 3 5 1 4
3
2 2 1 1 2 2
3
1 3 2 2 3 1

3
4
1 2  2 3  3 4  4 5
6
1 2  2 3  3 4  4 5  5 4  1 2
6
1 2  3 4  5 4   1 2   4 5  2 3

*/
