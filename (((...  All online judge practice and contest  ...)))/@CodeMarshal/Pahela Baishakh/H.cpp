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

int main()
{
    int tcas;
    cin >> tcas;
    ll n;
    ll ans;
    while(tcas--)
    {
        cin >> n;
        ans = ((n-1)*((n-1)+1))/2;  ///AC
        //ans = (n*n+1)/2;
        printf("%lld\n",ans);
    }
	return 0;
}

/// save test cases ...

/*




*/

