    /// INPUT
/*

3
0 0 10 0 10 10
0 0 10 0 10 -20
-12 -10 21 21 1 40

*/

#include <stdio.h>
#include <math.h>
int main()
{
    double ax,ay,bx,by,cx,cy,dx,dy,mx,my,area;  /// AC

    int t,c = 1;

    scanf("%d",&t);

    while(t--){

        scanf("%lf%lf%lf%lf%lf%lf",&ax,&ay,&bx,&by,&cx,&cy);

        mx = (ax+cx)/2;

        my = (ay+cy)/2;

        dx = 2.0*mx - bx;
        dy = 2.0*my - by;

        area = 0.5 * (ax*by + bx*cy + cx*dy + dx*ay - ay*bx - by*cx - cy*dx - dy*ax);

        if(area < 0)
            area *= (-1.0);

        printf("Case %d: %d %d %d\n",c++,(int)dx,(int)dy,(int)area);
    }

    return 0;
}
