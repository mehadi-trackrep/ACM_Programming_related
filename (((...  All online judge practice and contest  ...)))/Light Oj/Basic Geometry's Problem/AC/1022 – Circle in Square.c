#include <stdio.h>
#define pi 2*acos(0.0)
int main()
{
    double r,area;
    int t,c = 1;
    scanf("%d",&t);
    while(t--){
        scanf("%lf",&r);
        area = (4-pi)*r*r;
        printf("Case %d: %.2lf\n",c++,area);
    }
    return 0;
}
/*
3
20
30.091
87.0921
*/
