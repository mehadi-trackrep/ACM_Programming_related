#include <stdio.h>
int main(){
    long long num1,num2,n,count;

    while(scanf("%lld%lld",&num1,&num2)){

        if(num1 == 0 && num2 == 0)
            break;

        n = (num1%10) + (num2%10);
        count = 0;

        while(num1 != 0 && num2 != 0){

            num1 = num1/10;
            num2 = num2/10;

            if(n >= 10){
                count++;
                n = n/10 + (num1%10) + (num2%10);
            }

            else
                n = (num1%10) + (num2%10);
        }

        if(count == 0)
            printf("No carry operation.\n");
        else if(count == 1)
            printf("%lld carry operation.\n",count);
        else
            printf("%lld carry operations.\n",count);
    }

    return 0;
}
