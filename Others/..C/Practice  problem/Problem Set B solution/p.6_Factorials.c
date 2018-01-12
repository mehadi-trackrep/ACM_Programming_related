#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main()
{
    int i,n,Factorial = 1;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        Factorial = Factorial*i;
    }

    printf("%d",Factorial);

    return 0;
}

