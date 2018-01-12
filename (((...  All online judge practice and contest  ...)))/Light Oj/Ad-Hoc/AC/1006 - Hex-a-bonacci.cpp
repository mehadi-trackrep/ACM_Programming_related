#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef unsigned int uint;
typedef pair<int, int> pii;
#define Size 10005

long long a, b, c, d, e, f;
long long dp[Size];

long long fn( int n )
{
    if( n == 0 ) return a % 10000007;   ///AC
    if( n == 1 ) return b % 10000007;
    if( n == 2 ) return c % 10000007;
    if( n == 3 ) return d % 10000007;
    if( n == 4 ) return e % 10000007;
    if( n == 5 ) return f % 10000007;

    if( dp[n] != -1 )
    {
        return dp[n];
    }
    else
    {
        dp[n] = ( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) ) % 10000007;
        return dp[n];
    }

}

void init()
{
    for(int i = 0; i < Size; i++) dp[i] = -1;
}

int main()
{
    long long n, caseno = 0, cases;
    scanf("%lld", &cases);

    while( cases-- )
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);

        init();

        printf("Case %lld: %lld\n", ++caseno, fn(n));
    }

    return 0;
}

/*

5
0 1 2 3 4 5 20
3 2 1 5 0 1 9
4 12 9 4 5 6 15
9 8 7 6 5 4 3
3 4 3 2 54 5 4

*/
