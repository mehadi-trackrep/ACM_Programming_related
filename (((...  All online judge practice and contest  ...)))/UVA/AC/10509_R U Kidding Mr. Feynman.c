#include <stdio.h>
#include <math.h>
/// formula
/*
n^(1/3) = a + dx
n = (a + dx)^3
n = (a^2 + 2*a*dx + dx^2)(a + dx)
n = (a^3 + 2*a^2*dx + a*dx^2 + a^2*dx + 2*a*dx^2 + dx^3)
n = (a^3 + 2*a^2*dx + a^2*dx) [Dropping higher order dx terms]
n = (a^3) + 3*a^2*dx)
dx = (n - a^3) / (3*a^2)
*/
int main()
{
    double n,p,ans,a,dx;

    while(scanf("%lf",&n) && n != 0.0)
    {
        a = floor(pow(n,1.0/3.0)+0.0000000001); /// FOR floor YOU CAN <a href="http://www.cplusplus.com/reference/cmath/floor/" target="_blank">ViSiT</a> THIS SITE OR <a href="http://en.cppreference.com/w/cpp/numeric/math/floor" target="_blank">ViSiT iT</a>
        dx=((n-(a*a*a))/(3*a*a));
        ans=(a+dx);
        printf("%.4lf\n",ans);
    }

    return 0;
}

