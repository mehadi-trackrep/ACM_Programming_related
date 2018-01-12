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

#include <bits/stdc++.h>

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
    int t;

    double r1,r2,r3;

    cin >> t;

    for(int c=1; c<=t; c++)
    {
        cin >> r1 >> r2 >> r3;
        double AB,BC,AC,area_tri,area_sector1,area_sector2,area_sector3,ans;    ///AC
        double theta1,theta2,theta3;

        AB = r1+r2;
        BC = r2+r3;
        AC = r1+r3;

        theta1 = acos((AB*AB+AC*AC-BC*BC)/(2*AB*AC));
        theta2 = acos((AB*AB-AC*AC+BC*BC)/(2*AB*BC));
        theta3 = acos((AC*AC+BC*BC-AB*AB)/(2*BC*AC));

        area_sector1 = (theta1*r1*r1)/2;
        area_sector2 = (theta2*r2*r2)/2;
        area_sector3 = (theta3*r3*r3)/2;

        area_tri = 0.5*AB*AC*sin(theta1);

        //cerr << "area_tri: " << area_tri << endl;

        ans = area_tri - (area_sector1+area_sector2+area_sector3);

        printf("Case %d: %lf\n",c,ans);
    }

	return 0;
}

/// save test cases

/*

1
2 2 2


*/
