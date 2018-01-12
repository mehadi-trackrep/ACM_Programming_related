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

#define pi	acos(-1.0)
#define ll	long long
#define ull	unsigned long long
#define ff	first
#define ss	second
#define pb	push_back

#define mx	1000000
#define mod	1000000007
#define INF	2147483647
#define mxn	1000


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

int main()
{
    int n;

    string str;

    while(cin >> n >> str)
    {
        set <int> st;
        int ara[n+5];
        int m = INT_MAX;
        for(int i=0; i<n; i++)
        {
            cin >> ara[i];
            if(i != 0)
            {
                if(str[i-1] == 'R' && str[i] == 'L')
                {
                    if(ara[i]%2 == 1 && ara[i-1]%2 == 1)
                    {
                        if((ara[i]+ara[i-1])/2 - ara[i-1] < m) m = (ara[i]+ara[i-1])/2 - ara[i-1];
                    }
                    else if(ara[i]%2 == 0 && ara[i-1]%2 == 0)
                    {
                        if((ara[i]+ara[i-1])/2 - ara[i-1] < m) m = (ara[i]+ara[i-1])/2 - ara[i-1];
                    }
                }
            }
        }

        if(m != INT_MAX) printf("%d\n",m);
        else printf("-1\n");
    }

	return 0;
}

/// save test cases

/*




*/
