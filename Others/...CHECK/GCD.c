#include <stdio.h>
int GCD(int a,int b){

    printf("...> %d %d \n",a,b);

    if(b == 0)
        return a;
    return GCD(b,a%b);

}
int main()
{
    int a,b,gcd;
    while(scanf("%d%d",&a,&b) == 2){
        gcd = GCD(a,b);
        printf("%d\n",gcd);
    }
    return 0;
}
