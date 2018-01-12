#include <stdio.h>
int main()
{
    float amount,n,dt,t;
    int t1,t2;

    scanf("%f",&n);

    while(n >= 1){

        scanf("%d%d%f",&t1,&t2,&amount);

        t = amount/(float)(t1+t2);

        dt = (float)t1 - (float)t2;

        printf("%.0f\n",((float)t1 + dt)*t );

        n--;
    }

    return 0;
}
