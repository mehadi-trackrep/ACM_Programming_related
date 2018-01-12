#include <stdio.h>
#include <math.h>
int main()
{
    double n,sqroot;

    while(scanf("%lf",&n) && n != 0){
        sqroot = sqrt(n);
        if(sqroot - (int)sqroot == 0)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}
