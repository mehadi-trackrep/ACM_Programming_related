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

#define I64                    long long
#define i64                    long long
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
#define Max 10000001
#define mx 10000001
#define mxn 100		/// means maximum node number ...

#define loop_tcas_in(tcas) for(int cas=1; cas<=tcas; cas++)

#define for_in(a) for(int i=1; i<=a; i++)
#define for_de(a) for(int i=a; i>=0; i--)

#define MAX_N 1000
#define MAX_W 1000

int n;
int dp[MAX_N+1][MAX_W+1];       ///AC
int weight[MAX_N+1];
int cost[MAX_N+1];
int CAP;

int knapsack(int i,int w)
{
	if(i==n+1) return 0;
	if(dp[i][w]!=-1) return dp[i][w];
	int profit1=0,profit2=0;
	if(w+weight[i]<=CAP)
		profit1=cost[i]+knapsack(i+1,w+weight[i]);

	profit2=knapsack(i+1,w);
	dp[i][w]=max(profit1,profit2);
	return dp[i][w];
}


int main()
{
    int tcas;

    cin >> tcas;

    while(tcas--)
    {
        scanf("%d",&n);

        for(int i=1;i<=n;i++)
        {
            scanf("%d%d",&cost[i],&weight[i]);
        }

        int G,x;

        int MAX_PROFIT = 0;

        CAP = 0;

        cin >> G;

        while(G--)
        {
            cin >> CAP;
            memset(dp,-1,sizeof(dp));
            MAX_PROFIT += knapsack(1,0);
        }

        printf("%d\n",MAX_PROFIT);
    }

    return 0;
}

/// test cases :-
/*

2
3
72 17
44 23
31 24
1
26
6
64 26
85 22
52 4
99 18
39 13
54 9
4
23
20
20
26


*/

