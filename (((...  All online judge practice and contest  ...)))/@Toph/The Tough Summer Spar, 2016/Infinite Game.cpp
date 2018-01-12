/*
    BISMILLAH HIR RAHMANIR RAHIM

    ###########################################################################
    #                                                                         #
    #   //        //  //////   //    //      /\      //////\\    /////////    #
    #   // /    / //  //       //    //     /  \     //       \      //       #
    #   //   /    //  /////    ////////    /////\    //       /      //       #
    #   //        //  //       //    //   /      \   //       /      //       #
    #   //        //  //////   //    //  /        \  ////////    /////////    #
    #                                                                         #
    ###########################################################################
                                                                              SUST
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

double area_sector(double r,double theta)
{
    double ans = (theta*r*r)/2;
    return ans;
}

double area_triangle(double x,double h)
{
    double ans;
    ans = 0.5*x*h;
    return ans;

}

int main()
{
    int tcas;

    double R,x1,x2,y;

    cin >> tcas;

    for(int c=1; c<=tcas; c++)
    {
        cin >> R >> x1 >> x2 >> y;

        if(x1 > x2)
        {
            double tmp;
            tmp = x1;
            x1 = x2;
            x2 = tmp;
        }

        double area_oditi,area_tom,area_sam,area_ron;

        if(x1 >= R)
        {
            area_tom = 0.0;
            area_oditi = pi*R*R;
            area_sam = area_ron = (x2-x1)*y;
            printf("%.3lf %.3lf %.3lf %.3lf\n",area_oditi,area_sam,area_ron,area_tom);
        }
        else if(x2 < R)
        {
            double x,theta,area1,area2,area_tri1,area_tri2,area_segment;

            x = sqrt(R*R - x1*x1); /// from pythagoras theorem : r*r = x*x + h*h
            x *= 2;
            theta = acos(1-(x*x)/(2*R*R));

            area1 = area_sector(R,theta);
            area_tri1 = area_triangle(x,x1);

            x = sqrt(R*R - x2*x2); /// from pythagoras theorem : r*r = x*x + h*h
            x *= 2;
            theta = acos(1-(x*x)/(2*R*R));
            area2 = area_sector(R,theta);
            area_tri2 = area_triangle(x,x2);
            area_segment = area2 - area_tri2;

            area_tom = area1 - area_tri1 - area_segment;
            area_oditi = pi*R*R - area_tom;
            area_sam = area_ron = ((2*y*(x2-x1)) - area_tom)/2;

            printf("%.3lf %.3lf %.3lf %.3lf\n",area_oditi,area_sam,area_ron,area_tom);
        }
        else if(x2 >= R)
        {
            double x,theta,h;

            x = sqrt(R*R - x1*x1); /// from pythagoras theorem : r*r = x*x + h*h
            x *= 2;
            theta = acos(1-(x*x)/(2*R*R));
            h = x1;
            area_tom = area_sector(R,theta) - area_triangle(x,h);
            area_oditi = pi*R*R - area_tom;
            area_sam = area_ron = ((2*y*(x2-x1)) - area_tom)/2;

            printf("%.3lf %.3lf %.3lf %.3lf\n",area_oditi,area_sam,area_ron,area_tom);
        }
    }

	return 0;
}

/// save test cases

/*




*/
