#include <stdio.h>

int main()
{
    int t,i,c=1;
    double n,sum = 0;

    scanf("%d",&t);

    while(t--){
        scanf("%lf",&n);
        sum = 0;
        for(i = 1;i <= (int)n;i++){
            sum += 1.0/(double)i;
        }

        printf("Case %d: %lf\n",c++,sum);
    }

    return 0;
}
