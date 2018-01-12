#include <stdio.h>
int main()
{
    int a,b;
    int c;
    int gcd,lcm,multi;
    scanf("%d%d",&a,&b);
    multi = a*b;

   /// printf("GCD of %d and %d is ",a,b);

    printf("LCM of %d and %d is ",a,b);

    while(b>0){
        c = a%b;
        a = b;
        b = c;
    }

    printf("%d\n",(multi/a));


    return 0;
}
