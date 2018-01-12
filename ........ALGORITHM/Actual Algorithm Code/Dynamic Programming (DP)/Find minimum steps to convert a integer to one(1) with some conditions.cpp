/*
    BISMILLAH HIR RAHMANIR RAHIM

    ###########################################################################
    #                                                                         #
    #   //        //  //////   //    //      /\      //////\\    /////////    #
    #   // /    / //  //       //    //     /  \     //       \      //       #
    #   //   /    //  /////    ////////    /////\    //       /      //       #
    #   //        //  //       //    //   /      \   //       /      //       #
    #   //        //  //////   //    //  /        \  ////////    /////////    #
    #                                                                         #
    ###########################################################################
                                                                              SUST
*/

#include <bits/stdc++.h>

using namespace std;

#define pi	acos(-1.0)
#define ll	long long
#define ull	unsigned long long
#define ff	first
#define ss	second
#define pb	push_back

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

#define mx	1000000
#define mod	1000000007
#define INF	INT_MAX
#define mxn	1000

bool flag;

/*  conditions are:

    1. (n=n-1)
    2. ( if n % 2 == 0 , then n = n / 2  )
    3. ( if n % 3 == 0 , then n = n /3  )

*/

int dp[100000];

                    /// Top-Down DP

int min_steps(int n)
{
    if(n == 1) return 0;

    if(dp[n] != -1) return dp[n];

    int r;

    r = 1+min_steps(n-1);
    if(n%2 == 0) r = min(r,1+min_steps(n/2));
    if(n%3 == 0) r = min(r,1+min_steps(n/3));

    dp[n] = r;

    return dp[n];
}

                        /// Bottom-Up DP

int getMinSteps ( int n )
{
    int dp[n+1] , i;
    dp[1] = 0;  // trivial case
    for( i = 2; i <= n; i ++ )
    {
        dp[i] = 1 + dp[i-1];
        if(i%2==0) dp[i] = min( dp[i] , 1+ dp[i/2] );
        if(i%3==0) dp[i] = min( dp[i] , 1+ dp[i/3] );
    }
    return dp[n];
}

int main()
{
    int n;

    memset(dp,-1,sizeof(dp));

    while(sf1(n) == 1)
    {
        int res = min_steps(n);
        printf("%d\n",res);
    }

	return 0;
}

/// save test cases

/*




*/
