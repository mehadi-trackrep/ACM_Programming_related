#include <stdio.h>
double ADD(double x,double y); /// it,s ADD function এর  prototype ///
int main()
{
    double a = 2.8,b = 2.7,c;

    c = ADD(a,b);
    printf("%lf\n",c);

    return 0;
}

double ADD(double x,double y)
{
    double sum = x+y;
    return sum;
}
