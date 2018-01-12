#include <stdio.h>
int GCD(int a,int b){

    printf("...> %d %d \n",a,b); /// process check

    if(b == 0)
        return a;
    return GCD(b,a%b); /// ekhettere alawys a > b and every process ao a > b
                        /// ekhane rem. and ager a o b er moddhe choto er moddhe swap

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
