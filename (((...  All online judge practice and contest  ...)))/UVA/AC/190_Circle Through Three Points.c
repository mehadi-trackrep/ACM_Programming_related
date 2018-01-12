#include <stdio.h>
#include <math.h>
int main()
{
    double a1,b1,a2,b2,a3,b3;
    double c1,c2,g,f,c,r,x,y,z;

    while(scanf("%lf%lf%lf%lf%lf%lf",&a1,&b1,&a2,&b2,&a3,&b3) == 6){

        c1 = a2*a2 + b2*b2 - a1*a1 - b1*b1;
        c2 = a3*a3 + b3*b3 - a2*a2 - b2*b2;    /// formula te problem

        g = (-1)*( 2*(b1 - b2)*c2 - 2*(b2 - b3)*c1 ) / ( 4*(a1 - a2)*(b2 - b3) - 4*(a2 - a3)*(b1 - b2) );
        f = (-1)*( 2*(a2 - a3)*c1 - 2*(a1 - a2)*c2 ) / ( 4*(a1 - a2)*(b2 - b3) - 4*(a2 - a3)*(b1 - b2) );
        c = - a1*a1 - b1*b1 - 2*g*a1 - 2*f*b1;

        r = sqrt(g*g + f*f - c);

        /*x = - a1*a1 - b1*b1 - 2*g*a1 - 2*f*b1;
        y = - a2*a2 - b2*b2 - 2*g*a2 - 2*f*b2;
        z = - a3*a3 - b3*b3 - 2*g*a3 - 2*f*b3;

        printf("%lf , %lf\n",g,f);
        printf("%lf , %lf , %lf",x,y,z);*/

        if(g < 0 && f < 0 && c < 0){
            printf("(x - %.3lf)^2 + (y - %.3lf)^2 = %.3lf^2\n",-g,-f,r);
            printf("x^2 + y^2 - %.3lfx - %.3lfy - %.3lf = 0\n\n",-2*g,-2*f,-c);
            continue;
        }
        else if(g < 0 && f < 0 && c > 0){
            printf("(x - %.3lf)^2 + (y - %.3lf)^2 = %.3lf^2\n",-g,-f,r);
            printf("x^2 + y^2 - %.3lfx - %.3lfy + %.3lf = 0\n\n",-2*g,-2*f,c);
            continue;
        }
        else if(g < 0 && f > 0 && c > 0){
            printf("(x - %.3lf)^2 + (y + %.3lf)^2 = %.3lf^2\n",-g,f,r);
            printf("x^2 + y^2 - %.3lfx + %.3lfy + %.3lf = 0\n\n",-2*g,-2*f,c);
            continue;
        }
        else if(g < 0 && f > 0 && c < 0){
            printf("(x - %.3lf)^2 + (y + %.3lf)^2 = %.3lf^2\n",-g,f,r);
            printf("x^2 + y^2 - %.3lfx + %.3lfy - %.3lf = 0\n\n",-2*g,2*f,-c);
            continue;
        }
        else if(g > 0 && f > 0 && c < 0){
            printf("(x + %.3lf)^2 + (y + %.3lf)^2 = %.3lf^2\n",g,f,r);
            printf("x^2 + y^2 + %.3lfx + %.3lfy - %.3lf = 0\n\n",2*g,2*f,-c);
            continue;
        }
        else if(g > 0 && f > 0 && c > 0){
            printf("(x + %.3lf)^2 + (y + %.3lf)^2 = %.3lf^2\n",g,f,r);
            printf("x^2 + y^2 + %.3lfx + %.3lfy + %.3lf = 0\n\n",2*g,2*f,c);
        }
    }

    return 0;
}
