#include <stdio.h>
int main()
{
    int t;
    double x0,y0,x1,y1,cx,cy,r,L,W,d1,d2;
    scanf("%d",&t);
    while(t >= 1)
    {
        scanf("%lf%lf%lf%lf%lf%lf%lf",&x0,&y0,&x1,&y1,&cx,&cy,&r); /// problem

        if(x0 < 0)
            x0 *= (-1.0);
        if(y0 < 0)
            y0 *= (-1.0);
        if(x1 < 0)
            x1 *= (-1.0);
        if(y1 < 0)
            y1 *= (-1.0);
        if(cx < 0)
            cx *= (-1.0);
        if(cy < 0)
            cy *= (-1.0);

        L = x1 - x0;  //printf("..%lf\n",L);
        W = y1 - y0;  //printf("..%lf\n",W);
        d1 = cx - (x0 + L*9.0/10.0);
        d2 = cy - (y0 + W/2.0);

        if( (L/W -10.0/6.0) <= 0 && (L/r - 5.0) <= 0 && d1 <= 0 && d2 = 0)
            printf("YES\n");
        else
            printf("NO\n");

        t--;
    }

    return 0;
}


