#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    double Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,Ex,Ey,Fx,Fy;
    double a1,b1,c1,a2,b2,c2,a3,b3,c3;
    double Px,Py,Qx,Qy,Rx,Ry;
    double PQ,QR,RP,S,AREA;

    while(scanf("%d",&t) == 1)
    {
        while(t >= 1)
        {
            scanf("%lf%lf%lf%lf%lf%lf",&Ax,&Ay,&Bx,&By,&Cx,&Cy);

            Dx = (Cx + 2*Bx)/3;
            Dy = (Cy + 2*By)/3;

            Ex = (Ax + 2*Cx)/3;
            Ey = (Ay + 2*Cy)/3;

            Fx = (2*Ax + Bx)/3;
            Fy = (2*Ay + By)/3;

            a1 = (Dy - Ay)/(Dx - Ax);
            b1 = -1;
            c1 = Ay - a1*Ax;

            a2 = (Ey - By)/(Ex - Bx);
            b2 = -1;
            c2 = By - a2*Bx;

            a3 = (Fy - Cy)/(Fx - Cx);
            b3 = -1;
            c3 = Cy - a3*Cx;

            Px = (b1*c2 - b2*c1)/(a1*b2 - a2*b1);
            Py = (c1*a2 - c2*a1)/(a1*b2 - a2*b1);

            Qx = (b2*c3 - b3*c2)/(a2*b3 - a3*b2);
            Qy = (c2*a3 - c3*a2)/(a2*b3 - a3*b2);

            Rx = (b1*c3 - b3*c1)/(a1*b3 - a3*b1);
            Ry = (c1*a3 - c3*a1)/(a1*b3 - a3*b1);

            PQ = sqrt( (Px - Qx)*(Px - Qx) + (Py - Qy)*(Py - Qy) );
            QR = sqrt( (Qx - Rx)*(Qx - Rx) + (Qy - Ry)*(Qy - Ry) );
            RP = sqrt( (Rx - Px)*(Rx - Px) + (Ry - Py)*(Ry - Py) );

            S = (PQ + QR + RP)/2;

            AREA = sqrt( S*(S - PQ)*(S - QR)*(S - RP) );

            printf("%.0lf\n",AREA);

            t--;
        }

    }

    return 0;
}
