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

int main()
{
    int tcas;
    double l,r,w;   ///AC

    sf1(tcas);

    for(int c=1; c<=tcas; c++)
    {
        scanf("%lf%lf%lf",&l,&w,&r);

        double hw,angl,d,x,total_area_of_cone,triangle_area,val,ans;

        hw = w/2;
        x = 2*sqrt(r*r - hw*hw);    /// RM = x/2;
        d = (r*r + r*r - x*x)/(2*r*r);

        angl = acos(d); /// that's radian unit a , eta computer nije thekei radian a value dey , r change kora lage na ... V.V.I.

        triangle_area = 0.5*x*hw;     /// half*vumi*uccota , general formula

        /// or, we know , area = (1/2)*b*c*SinA

        //cerr << "triangle_area: " << triangle_area << endl;

        /// triangle_area = 0.5*r*r*sin(angl);  /// where the angle is radian so, we do not think about radian ...it's work as auto

        //cerr << "triangle_area: " << triangle_area << endl;


        total_area_of_cone = (r*r*angl)/2;

        val = total_area_of_cone - triangle_area;

        ans = pi*r*r - 2*val;

        printf("Case %d: %lf\n",c,ans);
    }

	return 0;
}

/// save test cases

/*

Input   and     Output

3
40.33 9.02 4.77
71.20 4.15 14.19
80.13 53.27 39.74

Case 1: 70.397365
Case 2: 117.355903
Case 3: 3891.108151


*/
