#include <stdio.h>
int lcm(int a,int b,int ck){

    if(b%ck == 0 && a%ck == 0)
        return (a*b)/ck;
    lcm(a,b,a-1);


}
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    if(a < b)
        c = lcm(a,b,a);
    else
        c = lcm(b,a,b);
    printf("%d",c);
    return 0;
}

