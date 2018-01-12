#include <stdio.h>
#include <math.h>
int main()
{
    double n;
    int ck;
    scanf("%lf%d",&n,&ck);
    switch(ck){

        case 1: printf("%.3lf  ",n*n);
                printf("%.3lf",n*n*n);
                break;
        case 2: printf("%.3lf",n*n*n);
                break;
        default:printf("%.3lf",sqrt(n));
    }

    return 0;
}

