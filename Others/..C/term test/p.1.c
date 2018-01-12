#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,p;
    while(1){
        scanf("%lf%lf",&a,&b);
        p = pow(a,b);
        printf("%.0lf",p);
    }
    return 0;

}
