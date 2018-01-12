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
#define pi                    acos(-1.0)

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

#define debug(x) cout << "> " << #x << " = " << x << endl;
#define Max 1000005
#define mx 10000001
#define mxn 100		/// means maximum node number ...

#define loop_tcas_in(tcas) for(int cas=1; cas<=tcas; cas++)
//#define loop_tcas_de(tcas) for(int cas=tcas; cas>=0; cas--)

#define for_in(a) for(int i=1; i<=a; i++)
#define for_de(a) for(int i=a; i>=0; i--)

bool com[Max];      /// default vabe, let sob koti prime ...
int prime[78500];
int p_cnt = 0;

void mark_multiples(int a,int N)
{
    for(int i=a+a; i<=N; i+=a) com[i] = true;       /// AC
}

void seive(int N)
{
    prime[p_cnt++] = 2;
    mark_multiples(2,N);

    com[0] = true;
    com[1] = true;

    for(int i=3; i<=N; i+=2)
    {
        if(!com[i])
        {
            prime[p_cnt++] = i;
            mark_multiples(i,N);
        }
    }
}

int main()
{
    int N;

    sf1(N);

    seive(N);

    double ans = (double)N;

    for(int i=0; prime[i]*prime[i]<=N; i++)
    {
        if(N%prime[i] == 0)
        {
            //cerr << "prime[i]: " << prime[i] << endl;
            ans *= (1-(1/(double)prime[i]));
            while(N%prime[i] == 0)
            {
                N /= prime[i];
            }
        }
    }

    if(N > 1)
    {
        ans *= (1-(1/(double)N));
    }

    printf("%d\n",(int)ans);

	return 0;
}

/// save test cases ...

/*




*/
