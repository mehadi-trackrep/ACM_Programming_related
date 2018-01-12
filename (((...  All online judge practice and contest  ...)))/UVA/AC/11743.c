#include <stdio.h>
#include <string.h>
int main()
{

    int i,t,j,k,x,sum1,sum2,sum;
    int d1,d2;
    char num[25];

    while(scanf("%d",&t) == 1){

        getchar();

        while(t >= 1){

            gets(num);

            sum1 = 0;
            sum2 = 0;
            sum = 0;

            for(i = 0;i < 19;i += 2){

                if(i == 4 )
                    i = 5;
                else if(i == 9)
                    i = 10;
                else if(i == 14)
                    i = 15;
                else ;

                x = 2*(num[i]-48);

                if(x >= 10){

                    d1 = x % 10;
                    x /= 10;
                    d2 = x % 10;
                    sum1 += d1 + d2;
                }

                else
                    sum1 += x;

            }
            //printf("=> %d ",sum1);
            for(i = 1;i < 20;i += 2){

                if(i == 5 )
                    i = 6;
                else if(i == 10)
                    i = 11;
                else if(i == 15)
                    i = 16;
                else ;

                x = (num[i]-48);

                sum2 += x;
            }

            //printf("=> %d ",sum2);

            sum = sum1 + sum2;

            if(sum % 10 == 0)
                printf("Valid\n");
            else
                printf("Invalid\n");

            t--;
        }
    }

    return 0;
}

