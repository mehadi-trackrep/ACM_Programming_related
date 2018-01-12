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
#define N 5000007

int main()
{
    string OriginalCity,DistanceCity;       ///AC
    int ActualMiles;
    char ClassCode;

    while(1)
    {
        cin >> OriginalCity;
        if(OriginalCity == "#") break;
        int sum = 0;
        cin >> DistanceCity >> ActualMiles >> ClassCode;

        cerr << "--->" << OriginalCity << ' ' << DistanceCity << ' ' << ActualMiles << ' ' << ClassCode << endl;

        if(ClassCode == 'F') sum += ActualMiles*2;
        else if(ClassCode == 'B')
        {
            double x = ceil((double)ActualMiles/2);
            cerr << "### x: " << x << endl;
            sum += (ActualMiles+(int)x);
        }
        else if(ClassCode == 'Y')
        {
            if(ActualMiles <= 500) sum += 500;
            else sum += ActualMiles;
        }

        while(1)
        {
            cin >> OriginalCity;
            if(OriginalCity == "0") break;
            cin >> DistanceCity >> ActualMiles >> ClassCode;

            cerr << "--->" << OriginalCity << ' ' << DistanceCity << ' ' << ActualMiles << ' ' << ClassCode << endl;

            if(ClassCode == 'F') sum += ActualMiles*2;
            else if(ClassCode == 'B')
            {
                double x = ceil((double)ActualMiles/2);
                cerr << "### x: " << x << endl;
                sum += (ActualMiles+(int)x);
            }
            else if(ClassCode == 'Y')
            {
                if(ActualMiles <= 500) sum += 500;
                else sum += ActualMiles;
            }
        }

        printf("%d\n",sum);
    }

    return 0;
}

/// save test cases ...

/*

Beijing Tokyo 1329 F
Shanghai Wuhan 433 Y
0
#


*/

