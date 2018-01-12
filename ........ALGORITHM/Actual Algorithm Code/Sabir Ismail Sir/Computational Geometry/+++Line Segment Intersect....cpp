// A C++ program to check if two given line segments intersect
#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

/// Given three collinear points p, q, r, the flowing function checks if  point r lies on line segment 'pq'

bool onSegment(Point p, Point r, Point q)
{
    if (r.x <= max(p.x, q.x) && r.x >= min(p.x, q.x) &&
        r.y <= max(p.y, q.y) && r.y >= min(p.y, q.y))
       return true;

    return false;
}

/// To find orientation of ordered triplet (p, q, r).
/// The function returns following values
/// 0 --> p, q and r are collinear
/// 1 --> Clockwise
/// 2 --> Counterclockwise

int orientation(Point p, Point q, Point r)
{
    int val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);

    if (val == 0) return 0;     /// collinear

    return (val > 0)? 1: 2;     /// clockwise or counterclockwise
}

/// The flowing function that returns true if line segment 'p1q1'  and 'p2q2' intersect.

bool doIntersect(Point p1, Point q1, Point p2, Point q2)
{
    /// Find the four orientations needed for general and special cases

    int o1 = orientation(p1, q1, p2);   /// p1,q1 er sapekkhe p2 er direction determination ...
    int o2 = orientation(p1, q1, q2);   /// p1,q1 er sapekkhe q2 er direction determination ...
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);

    /// General case
    if (o1 != o2 && o3 != o4)
        return true;

    /// Special Cases
    /// p1, q1 and p2 are colinear and p2 lies on segment p1q1

    if (o1 == 0 && onSegment(p1, p2, q1)) return true;          /// p1q1 er moddhe p2 point ace ki na check ...

    /// p1, q1 and p2 are colinear and q2 lies on segment p1q1

    if (o2 == 0 && onSegment(p1, q2, q1)) return true;

    /// p2, q2 and p1 are colinear and p1 lies on segment p2q2

    if (o3 == 0 && onSegment(p2, p1, q2)) return true;

     /// p2, q2 and q1 are colinear and q1 lies on segment p2q2

    if (o4 == 0 && onSegment(p2, q1, q2)) return true;

    return false;
}


/// Driver program to test above functions

int main()
{

    struct Point p1,p2,p3,p4;

    while(cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y >> p4.x >> p4.y)
    {

        if(doIntersect(p1, p2, p3, p4)) cout << "Yes\n" ;
        else  cout << "No\n";

    }

    return 0;
}

/*

6 6 0 0 3 -1 3 3
2 0 20 0 16 2 24 -4
2 0 20 0 16 3 24 -4
2 0 20 0 16 4 24 -4
2 0 20 0 16 5 24 -4

*/
