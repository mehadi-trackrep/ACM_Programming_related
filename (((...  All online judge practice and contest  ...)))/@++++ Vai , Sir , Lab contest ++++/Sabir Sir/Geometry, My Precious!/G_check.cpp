


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

#define loop_tcas(tcas) for(int cas=1; cas<=tcas; cas++)

int store[Max];

int main()
{
    int n,d,h;

    sf3(n,d,h);

    if(h*2 < d) printf("-1\n");
    else
    {
        int N = 1,h1 = 0;
        int l = 0,r = 0;
        int node = 2;

        store[1] = 1;

        for(int i=1; ;i++)
        {
            N += 2;
            if(l+r <= d && h1 <= h && N <= n)
            {
                store[2*i] = node++;
                store[2*i+1] = node++;
                if(i == 1) l++,r++;
                else if(i % 2 == 0) l++;
                else r++;
                h1++;
            }
            else break;

        }

        cerr << "h1: " << h1 << endl;

        for(int i=1; i<node; i++)
        {
            if(2*i+1 < node)
            {
                printf("%d %d\n",store[i],store[2*i]);
                printf("%d %d\n",store[i],store[2*i+1]);
            }
        }

        while(node <= n)
        {
            printf("%d %d\n",1,node);
            node++;
        }
    }

	return 0;
}

/// save test cases ...

/*




*/
