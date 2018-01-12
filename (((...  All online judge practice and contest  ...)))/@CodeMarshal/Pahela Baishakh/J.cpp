
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
#define N 5000007
#define ll long long            ///AC

ll a[1000005];
ll a1[1000005];

int main()
{
    int tcas;

    a[1] = 1;
    a1[1] = 1;

    for(ll i=2; i<=1000000; i++)        ///AC
    {
        a[i] = a[i-1] + (i-1)*6;
        a1[i] = a1[i-1] + a[i];

        //printf("=> %lld\n",a[i]);
    }

    cin >> tcas;

    ll n;
    int c=1;

    while(tcas--)
    {
        scanf("%lld",&n);

        printf("Case %d: %lld %lld\n",c++,a[n],a1[n]);
    }

	return 0;
}

/// save test cases ...

/*




*/
