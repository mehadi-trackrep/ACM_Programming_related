#include <stdio.h>
int main()
{
    int a;
    short b;
    long c;
    unsigned d;
    double x;
    char str[80];

   /// scanf("%5d  %3hd  %12ld  %12lu  %15lf",&a,&b,&c,&d,&x);
    scanf("%d  %hd  %ld  %lu  %lf",&a,&b,&c,&d,&x);
    scanf("%[*\n]",str);
    printf("%5d  %3hd  %12ld  %12lu  %15lf  %s",a,b,c,d,x,str);

    return 0;
}

