#include <stdio.h>
int main()
{
    unsigned long int a,b,t,count,sum;

    while(scanf("%lu %lu",&a,&b) == 2){

       if(a == 0 && b == 0)
        break;

       if(b > a){
            t = a;
            a = b;
            b = t;
       }

       count = 0;
       sum = 0;

       while(a >= 1){

            sum += (a%10) + (b%10);

            a /= 10;
            b /= 10;

            if(sum >= 10){
                sum = 1; /// ekhettere sum = carry
                count++;
            }

            else
                sum = 0;
       }

       if(count == 0)
            printf("No carry operation.\n");
       else if(count == 1)
            printf("1 carry operation.\n");
        else
            printf("%lu carry operations.\n",count);
    }

    return 0;
}

