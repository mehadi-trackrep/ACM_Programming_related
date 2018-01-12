#include <stdio.h>
#include <math.h>
int main()
{
    double x,y,r,d; /// d means distance between (0.0) point to (x,y) point
    int t;

    while(scanf("%d",&t) == 1)
    {
        while(t > 1)
        {
            scanf("%lf%lf%lf",&x,&y,&r);

            if(x == 0 && y == 0)
            {
                printf("%.2lf %.2lf\n",r,r);
                continue;
            }

            d = sqrt(x*x + y*y);

            printf("%.2lf %.2lf\n",r-d,r+d);

            t--;
        }
    }

    return 0;
}
