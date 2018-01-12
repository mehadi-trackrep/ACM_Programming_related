#include <stdio.h>
int main()
{
    double a1,b1,c1,a2,b2,c2,x,y;

    while(scanf("%lf%lf%lf%lf%lf%lf",&a1,&b1,&c1,&a2,&b2,&c2)){

        if(a1 == 0 && b1 == 0 && c1 == 0 && a2 == 0 && b2 == 0 && c2 == 0)
            break;

        else if(a1 == a2 && b1 == b2){
            printf("No fixed point exists.\n");
            continue;
        }
        else {

            x = (-b1*c2 + b2*c1)/(a1*b2 - a2*b1);
            y = (-a2*c1 + a1*c2)/(a1*b2 - a2*b1);

            if(x == -0.00 )
                x *= (-1.0);
            else if(y == -0.00)    /// may be corner case ace ///
                y *= (-1.00);
            printf("The fixed point is at %.2lf %.2lf\n",x,y);
        }
    }

    return 0;
}
