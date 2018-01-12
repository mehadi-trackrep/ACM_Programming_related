#include <stdio.h>
int main()
{
    int n,i,c = 1;
    double r,area;
   /// scanf("d",&n);

    scanf("d",&n);
    for(i=0;i<n;i++){
        scanf("%lf",&r);
        if(0<r<=1000){
            area = (4.0-3.141592)*r*r;
            printf("Case %d: %lf\n",c++,area);
        }
    }

    return 0;
}
