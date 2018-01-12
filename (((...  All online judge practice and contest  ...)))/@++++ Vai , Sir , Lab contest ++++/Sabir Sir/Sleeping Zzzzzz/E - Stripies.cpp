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

int ara[105];

double collide(double m1, double m2) {      ///AC
    return 2 * sqrt(m1 * m2);
}

double solve(int n) {
    if( n == 1 )
        return ara[0] * 1.0;
    double ans = collide(ara[n-1], ara[n-2]);
    for(int i=n-3; i>=0; i--) {
        ans = collide(ans, ara[i]);
    }
    return ans;
}

int main()
{
    int N;
    while(cin >> N)
    {
        for(int i=0; i<N; i++)
        {
            scanf("%d",&ara[i]);
        }
        sort(ara,ara+N);
        double ans = solve(N);
        printf("%.3lf\n",ans);
    }
	return 0;
}

/// save test cases ...

/*

2
72
50
3
72
30
50


*/

