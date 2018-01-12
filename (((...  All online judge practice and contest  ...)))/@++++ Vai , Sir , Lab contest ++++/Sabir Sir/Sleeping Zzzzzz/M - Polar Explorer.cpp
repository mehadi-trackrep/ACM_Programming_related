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
#define pi 3.14159

int main()
{
    string str;
    int x,y,z;

    while(cin >> str)
    {
        if(str == "ENDOFINPUT") break;
        if(str == "START")
        {
            cin >> x >> y >> z;

        }
        if(str == "END")
        {
            double Max,normal;

            normal = 5*(double)y;
            Max = (double)x*z*pi/180;

            //cerr << "--->normal: " <<

            if(normal >= Max)
            {
                double extra = (normal - Max)/5;
                printf("YES %.0lf\n",extra);
            }
            else printf("NO %.0lf\n",normal);
        }
    }

	return 0;
}

/// save test cases ...

/*

START
1 100 0
END
START
10 0 1
END
START
100 50 90
END
START
100 50 270
END
ENDOFINPUT


*/

