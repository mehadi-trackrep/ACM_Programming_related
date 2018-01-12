#include <stdio.h>
int add (double a,double b){


    double sum;
    sum = a+b;
    return sum;

}
int main(){

///    scanf("%lf%lf",&a,&b);
    double a,b,c;
    a = b = 2.5;
    c = add(a,b);
    printf("%.2lf",c);
    return 0;

}
