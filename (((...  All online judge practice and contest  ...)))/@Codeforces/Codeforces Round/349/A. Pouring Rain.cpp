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
#define Max 5000007
#define pi acos(-1.0)

int main()
{
    double d,h,v,e;

    while(cin >> d >> h >> v >> e)  ///AC
    {
        double h1;
        double r;
        double empty_time;
        //r = h/2;
        //h1 = v/(pi*r*r);
        h1 = 4.0*v/(pi*d*d);
        if(h1 > e)          /// jodi drinking er velocity > rain porar velocity then YES ...
        {
            printf("YES\n");
            empty_time = h/(h1 - e);
            printf("%.12lf\n",empty_time);
        }
        else printf("NO\n");
    }

	return 0;
}

/// save test cases ...

/*

20 287 3845 5


*/

