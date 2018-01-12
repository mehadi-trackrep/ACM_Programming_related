#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main()
{
    int n,i,max_sum = 1,min_sum = 1,Factorial = 0;
    scanf("%d",&n);
    for(i=n;i>=n/2;i--){
        max_sum = max_sum*i;
    }
    printf("%d\n",max_sum);
    for(i=1;i<=n/2;i++){
        min_sum = min_sum*i;
    }
    printf("%d\n",min_sum);
    for(i=1;i<=min_sum;i++){
        Factorial = Factorial + max_sum;
    }

    printf("%d",Factorial);


    return 0;
}


