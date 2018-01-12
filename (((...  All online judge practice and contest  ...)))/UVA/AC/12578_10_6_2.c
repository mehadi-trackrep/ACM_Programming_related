#include <stdio.h>
#define pi 3.1415926535
int main()
{
    double L,area_red,area_green;
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%lf",&L);
        area_red = pi*(L/5.0)*(L/5.0);
        area_green = L*6*L/10.0 - area_red;
        printf("%.2lf %.2lf\n",area_red,area_green);
    }
    return 0;
}
