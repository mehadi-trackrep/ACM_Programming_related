#include <stdio.h>
#include <math.h>
int main()
{
    double n,p;
    double k;
    double d;
    while(scanf("%lf%lf",&n,&p) == 2){

        d = 1/n; // printf("%f\n",d);

        k = pow(p,d);

        printf("%.0lf\n",k);
    }

    return 0;
}
