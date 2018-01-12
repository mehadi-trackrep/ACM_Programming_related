#include <stdio.h>
int main()
{
    int t,R,L,W,c;
    double x1,x2,y;

    while(scanf("%d",&t) == 1)
    {
        c = 1;

        while(t >= 1)
        {
            scanf("%d",&R);
            L = 5 * R;

            W = (L*60)/100;

            y = (double)W/2;
            x1 = ((double)L/100)*45;
            x2 = ((double)L/100)*55;

           /* y = W/2;
            x1 = (L/100)*45;
            x2 = (L/100)*55;*/

            printf("Case %d:\n",c++);

            printf("%.0lf %.0lf\n",-x1,y);
            printf("%.0lf %.0lf\n",x2,y);
            printf("%.0lf %.0lf\n",x2,-y);
            printf("%.0lf %.0lf\n",-x1,-y);

            t--;
        }
    }

    return 0;
}

