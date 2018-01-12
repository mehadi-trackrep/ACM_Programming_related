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

struct data
{
    int a;
    bool operator < (const data & p)const   ///AC
    {
        return a > p.a;
    }
};

int main()
{
    int n;
    while(scanf("%d",&n) == 1)
    {
        if(n == 0) break;
        priority_queue <data> pq;

        for(int i=1; i<=n; i++)
        {
            int x;
            cin >> x;
            data d;
            d.a = x;
            pq.push(d);
        }
        int total = 0;
        while(!pq.empty() && pq.size() > 1)
        {
            data x = pq.top();
            pq.pop();
            data y = pq.top();
            pq.pop();
            total += (x.a+y.a);
            data d;
            d.a = (x.a+y.a);
            pq.push(d);
            //cerr << "check: " << x.a << endl;
        }

        printf("%d\n",total);
//        while(!pq.empty())
//        {
//            data x = pq.top();
//            pq.pop();
//            cerr << "check: " << x.a << endl;
//        }
    }

	return 0;
}

/// save test cases ...

/*




*/
