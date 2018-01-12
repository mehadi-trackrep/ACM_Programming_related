#include <stdio.h>
int main()
{
    int a,b,min,i,GCD,LCM;
    scanf("%d%d",&a,&b);
    if(a<b)
        min = a;
    else min = b;

    for(i=min;i>=1;i--){
        if(a%i==0 && b%i==0){
            GCD = i;
            break;
        }
    }

    LCM = a*b/GCD;

    printf("The least common multiple of %d and %d is %d",a,b,LCM);

    return 0;
}

