#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,s,area;
    while(scanf("%lf%lf%lf",&a,&b,&c) == 3){
        s = (a+b+c)/2.0;
        area = (4.0/3.0)*(sqrt(s*(s-a)*(s-b)*(s-c)));
        if(!(area > 0))
            area = -1.0;
        printf("%.3lf\n",area);
    }
    return 0;
}
