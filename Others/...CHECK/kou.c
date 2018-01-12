#include <stdio.h>
#include <math.h>

int main()
{
    double s,u,v,t,a;
    u = 2; v = 5; t = 2;
    a = 2*(v-u)/t;
    s = u*t - 0.5*a*pow(t,2);
    printf("%lf %lf\n",a,s);
    return 0;
}
