#include <stdio.h>
#include <string.h>
int main()
{
    int a,t,x;
    int ara[100],b,c,sum;
    int k;

    scanf("%d",&t);

    while(t--){
        x = 4;
        sum = 0;
        while(x--){
            scanf("%d",&a);
            k = 0;
            while(k <= 3){
                ara[k] = a % 10;
                a /= 10;
                k++;
            }
            sum += ara[0] + ara[2];
            b = ara[1]*2;
            c = ara[3]*2;
            sum += b%10 + c %10;
            b /= 10;
            c /= 10;
            sum += b%10 + c%10;
        }
        if(sum % 10 == 0)
            printf("Valid\n");
        else
            printf("Invalid\n");
    }

    return 0;
}
