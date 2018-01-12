#include<iostream>
#include<cstdio>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>
#include<deque>
#include<iterator>
#include<assert.h>
#include<bitset>
#include<climits>
#include<ctime>
#include<complex>

using namespace std;

#define PI acos(-1.0)
#define i64 long long
#define M 100
#define check cerr << "####=>"

int dp[M][M];

int find_nCr(int n, int r)
{
    cerr << "### check--> value of n and r: " << n << ' ' << r <<  endl;

    if(r == 1) return n;
    else if(r == n) return 1;
    else if(dp[n][r] != -1) return dp[n][r];
    else
    {
        dp[n][r] = find_nCr(n-1,r) + find_nCr(n-1,r-1);
        cerr << "value of n and r: " << n << ' ' << r << " and dp[n][r]: " << dp[n][r] << endl;
        return dp[n][r];
    }
}

int main()
{
    int n,r;

    cin >> n >> r;

    for(int i=n; i>=2; i--)
    {
        for(int j=2; j<=r; j++)
            dp[i][j] = -1;
    }

    int nCr = find_nCr(n,r);

    printf("%d\n",nCr);

    return 0;
}

/*

100 3

12 4

5 4

*/
