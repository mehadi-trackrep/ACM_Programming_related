/*
     "BISMILLAH HIR RAHMANIR RAHIM"
     MD. MEHADI HASAN
     SHAHJALAL UNIVERSITY OF SCIENCE AND TECHNOLOGY
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
#define Max 100005

#define loop_tcas(tcas) for(int cas=1; cas<=tcas; cas++)        /// AC

int store[Max];

int main()
{
    int i,j,k;
    int n,m,d,h;

    while(scanf("%d%d%d",&n,&d,&h)!=EOF)
    {
        if(d>2*h)
        {
            printf("-1\n");
            continue;
        }
        if(d == h)
        {
            if(d == 1)
            {
                if(n == 2) printf("1 2\n");
                else printf("-1\n");
                continue;
            }
            if(d == n-1)
            {
                for(i=1; i<n; i++)
                    printf("%d %d\n",i,i+1);
                continue;
            }
            else
            {
                for(i=1; i<=h; i++)
                {
                    printf("%d %d\n",i,i+1);
                }
                i++;
                while(i<=n) printf("2 %d\n",i++);
            }
            continue;
        }

        int ck = d-h;       /// h tay main ...

        for(i=1; i<=h; i++)
        {
            printf("%d %d\n",i,i+1);
        }

        i++;

        while(i<=n)
        {
            printf("1 %d\n",i);
            i++;
            for(j=1; j<ck; j++)
            {
                if(i>n) break;
                printf("%d %d\n",i-1,i);
                i++;
            }
        }

    }
    return 0;
}
