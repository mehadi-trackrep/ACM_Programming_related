#include <stdio.h>
#include <math.h>
int main()
{
    double A,B,C,square_root;
    double x1,x2;
    scanf("%lf%lf%lf",&A,&B,&C);
    square_root = sqrt(B*B-4*C*A);

    x1 = (-B + square_root )/2*A;
    x2 = (-B - square_root )/2*A;

    printf("%lf %lf",x1,x2);

    return 0;
}
