#include <stdio.h>
int main()
{
    int n,i,c = 0;
    double x,sum,ave_value;
    while(scanf("%d",&n)==1){
        for(i=0,sum = 0;i<n;i++){
            scanf("%lf",&x);
            sum = sum + x;
        }
        ave_value = sum/n;
        printf("Case %d: %lf\n",++c,ave_value);
    }
    return 0;
}
