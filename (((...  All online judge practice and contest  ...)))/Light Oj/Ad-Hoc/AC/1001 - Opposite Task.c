#include <stdio.h>
int main()
{
    int t,sum,a,b;

    scanf("%d",&t);

    while(t--){
        scanf("%d",&sum);
        if(sum >= 10){
            a = 10;
            b = sum - 10;
        }
        else{
            a = sum;
            b = 0;
        }
        printf("%d %d\n",a,b);
    }

    return 0;
}
