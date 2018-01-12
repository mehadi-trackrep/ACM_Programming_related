        ///input:
/*
3

0 0 10 0 10 10

0 0 10 0 10 -20

-12 -10 21 21 1 40

*/
#include <stdio.h>
int main()
{
    double ax,ay,bx,by,cx,cy,dx,dy,c1,c2,c3,c4;
    double a1,b1,a2,b2,area;
    //double ab,ad,area;
    int t,c = 1;
    scanf("%d",&t);
    while(t--){

        scanf("%lf%lf%lf%lf%lf%lf",&ax,&ay,&bx,&by,&cx,&cy);

        //scanf("%lf%lf%lf%lf%lf%lf",&ax,&ay,&bx,&by,&cx,&cy);

        c1 = (by-ay); c2 = (bx-ax);
        c3 = (by-cy); c4 = (bx-cx); //printf("%d %d %d %d\n",c1,c2,c3,c4);
        if(c4 != 0){
            dx = (c1*c4*cx - c4*c2*cy + c2*c4*ay - c2*c3*ax)/(c1*c4 - c2*c3);
            dy = (c4*ay - c3*ax + c3*dx)/c4; ///printf("%d %d\n",dx,dy);
        }
        else{
            dy = (c1*c3*cx - c3*c2*cy + c1*c4*ay - c1*c3*ax)/(c1*c4 - c2*c3);
            dx = (c3*ax - c4*ay + c4*dy)/c3; ///printf("%d %d\n",dx,dy);
        }

        a1 = bx - ax;
        b1 = by - ay;
        a2 = dx - ax;
        b2 = dy - ay;

        area =  (a1*b2) - (a2*b1);

        if(area < 0)
            area *= (-1);

        printf("Case %d: %d %d %d\n",c++,(int)dx,(int)dy,(int)area);
    }

    return 0;
}
