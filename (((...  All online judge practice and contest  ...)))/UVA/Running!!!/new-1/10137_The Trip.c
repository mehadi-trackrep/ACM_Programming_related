        /// input:
/*

3
10.00
20.00
30.00
4
15.00
15.01
3.00
3.01
5
15.00
15.02
3.00
3.01
3.00
0


*/
#include <stdio.h>
int main()
{
    int n,i;
    double ara[1000],sum,ave;
    while(scanf("%d",&n) && n != 0){
        sum = 0;
        for(i = 0;i < n;i++){
            scanf("%lf",&ara[i]);
            sum += ara[i];
        }
        ave = sum/(double)n;
        sum = 0;
        for(i = 0;i < n;i++){
            if(ara[i] > ave)
                sum += (ara[i]-ave);
        }

        printf("$%.2lf\n",sum);
    }
    return 0;
}
