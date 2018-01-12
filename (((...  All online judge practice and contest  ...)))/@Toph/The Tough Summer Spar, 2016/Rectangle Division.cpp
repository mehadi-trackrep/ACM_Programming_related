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


#define SIZ	1000000
#define mod	1000000007
#define INF	INT_MAX
#define mxn	1000

ll ix,iy;       /// intersecting point

struct Point
{
    ll x;
    ll y;
};

// Given three colinear points p, q, r, the function checks if
// point q lies on line segment 'pr'
bool onSegment(Point p, Point q, Point r)
{
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
        q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
       return true;

    return false;
}

/// To find orientation of ordered triplet (p, q, r).
/// The function returns following values
/// 0 --> p, q and r are colinear
/// 1 --> Clockwise
/// 2 --> Counterclockwise

ll orientation(Point p, Point q, Point r)
{
    ll val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);

    if (val == 0) return 0;     /// colinear

    return (val > 0)? 1: 2;     /// clock or counterclock wise
}

/// The flowing function that returns true if line segment 'p1q1'  and 'p2q2' intersect.

bool doIntersect(Point p1, Point q1, Point p2, Point q2)
{
    /// Find the four orientations needed for general and special cases

    ll o1 = orientation(p1, q1, p2);
    ll o2 = orientation(p1, q1, q2);
    ll o3 = orientation(p2, q2, p1);
    ll o4 = orientation(p2, q2, q1);

    /// General case
    if (o1 != o2 && o3 != o4)
        return true;

    /// Special Cases
    /// p1, q1 and p2 are colinear and p2 lies on segment p1q1

    if (o1 == 0 && onSegment(p1, p2, q1)) return true;

    /// p1, q1 and p2 are colinear and q2 lies on segment p1q1

    if (o2 == 0 && onSegment(p1, q2, q1)) return true;

    /// p2, q2 and p1 are colinear and p1 lies on segment p2q2

    if (o3 == 0 && onSegment(p2, p1, q2)) return true;

     /// p2, q2 and q1 are colinear and q1 lies on segment p2q2

    if (o4 == 0 && onSegment(p2, q1, q2)) return true;

    return false;
}

void find_intersecting_point(Point p1, Point q1, Point p2, Point q2)
{
    ll m1,m2,a1,a2,b1,b2,c1,c2;

    m1 = (p1.y - q1.y)/(p1.x-q1.x);
    m2 = (p2.y - q2.y)/(p2.x-q2.x);

    a1 = m1;
    b1 = -1;
    c1 = p1.y - m1*p1.x;

    a2 = m2;
    b2 = -1;
    c2 = p2.y - m2*p2.x;

    ix = (b1*c2 - b2*c1)/(a1*b2 - a2*b1);
    iy = (a2*c1 - a1*c2)/(a1*b2 - a2*b1);

}

int main()
{
    long long tc,x,y,r,c,px,py;
    long long  Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,mx,my;

    cin >> tc;

    for(int i=1; i<=tc; i++)
    {
        scanf("%lld%lld%lld%lld%lld%lld",&x,&y,&r,&c,&px,&py);

//        continue;

        /// four points of the rectangle ABCD :-
        Ax = x;
        Ay = y+r;
        Bx = x+c;
        By = y+r;
        Cx = x+c;
        Cy = y;
        Dx = x;
        Dy = y;

        mx = (2*x+c)/2ll;
        my = (2*y+r)/2ll;

        struct Point p1,p2,p3,p4;

        p1.x = px;
        p1.y = py;
        p2.x = mx;
        p2.y = my;

        p3.x = Ax;
        p3.y = Ay;
        p4.x = Bx;
        p4.y = By;

        printf("p1 and p2: (%lld,%lld) , (%lld,%lld)\n",p1.x,p1.y,p2.x,p2.y);

        printf("p3 and p4: (%lld,%lld) , (%lld,%lld)\n",p3.x,p3.y,p4.x,p4.y);

        if(doIntersect(p1, p2, p3, p4))
        {
            find_intersecting_point(p1,p2,p3,p4);
            printf("%lld %lld\n",ix,iy);
            //continue;
        }

        p3.x = Bx;
        p3.y = By;
        p4.x = Cx;
        p4.y = Cy;

        printf("p3 and p4: (%lld,%lld) , (%lld,%lld)\n",p3.x,p3.y,p4.x,p4.y);

        if(doIntersect(p1, p2, p3, p4))
        {
            find_intersecting_point(p1,p2,p3,p4);
            printf("%lld %lld\n",ix,iy);
            //continue;
        }

        p3.x = Cx;
        p3.y = Cy;
        p4.x = Dx;
        p4.y = Dy;

        printf("p3 and p4: (%lld,%lld) , (%lld,%lld)\n",p3.x,p3.y,p4.x,p4.y);

        if(doIntersect(p1, p2, p3, p4))
        {
            find_intersecting_point(p1,p2,p3,p4);
            printf("%lld %lld\n",ix,iy);
            //continue;
        }

        p3.x = Ax;
        p3.y = Ay;
        p4.x = Dx;
        p4.y = Dy;

        printf("p3 and p4: (%lld,%lld) , (%lld,%lld)\n",p3.x,p3.y,p4.x,p4.y);

        if(doIntersect(p1, p2, p3, p4))
        {
            find_intersecting_point(p1,p2,p3,p4);
            printf("%lld %lld\n",ix,iy);
            //continue;
        }

    }

	return 0;
}

/// save test cases

/*




*/
