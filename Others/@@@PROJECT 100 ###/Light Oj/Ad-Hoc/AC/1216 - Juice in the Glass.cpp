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

#define pi      acos(-1.0)

int main()
{
    double r1,r2,h,p;
    int tcas;

    cin >> tcas;

    for(int c=1; c<=tcas; c++)      ///AC
    {
        cin >> r1 >> r2 >> h >> p;

        double v,x,r;

        x = (r2*h)/(r1-r2);
        r = (r2*(p+x))/x;

        //cerr << "x: " << x << " and r: " << r << endl;

        v = (0.33333333333333)*pi*((r*r)*(p+x) - (r2*r2*x));

        printf("Case %d: %lf\n",c,v);
    }
	return 0;
}

/// save test cases

/*




*/
