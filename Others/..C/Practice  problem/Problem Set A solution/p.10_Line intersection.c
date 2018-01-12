#include <stdio.h>
int main()
{
    int a1,a2,b1,b2,c1,c2;
    double x,y,m1,m2,c;
    while(1)
    {
        scanf("%d%d%d",&a1,&b1,&c1);
        scanf("%d%d%d",&a2,&b2,&c2);
        m1 = b1*c2-b2*c1;
        m2 = a2*c1-a1*c2;
        c = a2*b1-a1*b2;
        x = m1/c;
        y = m2/c;

        printf("%lf",x);
        printf("%lf",y);
    }

    return 0;
}
