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
    int tcas;

    double AB,BC,AC,R;      /// problem hocce ...

    cin >> tcas;

    for(int c=1; c<=tcas; c++)
    {
        cin >> AB >> AC >> BC >> R;
        double AD,DE,AE;
        double low=0,high=AB,mid;

        int loop_time = 10;        /// ey value er opor time limit depend kore ...

        while(loop_time--)
        {
            mid = (low+high)/2;

            AD = mid;

            AE = (AC*AD)/AB;
            DE = (BC*AD)/AB;

            double s = (AD+AE+DE)/2;

            double A1,A2;
            double val = s*(s-AD)*(s-AE)*(s-DE);

            if(val < 0)
            {
                low = mid;
                continue;
            }

            //cerr << "--> val: " << val << endl;

            A1 = sqrt(val);

            //cerr << "-->A1: " << A1 << endl;

            double BD = AB-AD;
            double h = (AE*BD)/AD;

            if(h <= 0) continue;

            A2 = (1/2)*(BC+DE)*h;

            //cerr << "-->A2: " << A2 << endl;

            printf("AD: %lf\tAE: %lf\tDE: %lf\tBD: %lf\n",AD,AE,DE,BD);
            cerr << "-->h: " << h << endl;

            double r = A1/A2;

            //cerr << "-->r: " << r << endl;

            if(r < R) low = mid;
            else if(r > R) high = mid;

        }

        printf("Case %d: %lf\n",c,mid);
    }

	return 0;
}

/// save test cases

/*

4
100 100 100 2
10 12 14 1
7 8 9 10
8.134 9.098 7.123 5.10


*/
