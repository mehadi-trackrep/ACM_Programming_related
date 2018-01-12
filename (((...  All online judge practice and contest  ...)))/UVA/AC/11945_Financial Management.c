#include <stdio.h>
int main()
{
    int t,c = 1,i;
    double x,total,avg,a,b;
    scanf("%d",&t);
    while(t--){
        total = 0;
        for(i = 1;i <= 12;i++){
            scanf("%lf",&x);
            total += x;
        }
        avg = total/12;
        if(avg < 1000)
            printf("%d $%.2lf\n",c++,avg);
        else{
            a = avg/1000;
            b = (a - (int)a)*1000;
            printf("%d $%d,%.2lf\n",c++,(int)a,b);
        }
    }
    return 0;
}
