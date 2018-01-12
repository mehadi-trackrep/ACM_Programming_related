#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char str[21];
    int i,len,sum,c= 1,u = 1,ch = 0;

    while(gets(str)){

        len = strlen(str);
        sum = 0;

        for(i = 0;i < len;i++){

            if(str[i] >= 65 && str[i] <= 90){
                sum = sum + (str[i] - 38);
            }
            else if(str[i] >= 97 && str[i] <= 122)
                sum = sum + (str[i] - 96);
        }

        if(sum == 1){
            printf("It is not a prime word.\n");
            continue;
        }
        else if(sum == 2){
            printf("It is a prime word.\n");
            continue;
        }
        else if(sum%2 == 0){
            printf("It is not a prime word.\n");
            continue;
        }
        for(i = 3;i*i <= sum;i += 2){   /// or, i <= sqrt(sum)
            if(sum%i == 0){
                printf("It is not a prime word.\n");
                ch = ++u;
                break;
            }
        }
        if(ch!=u)
            printf("It is a prime word.\n");
        ch = 0;


    }

    return 0;
}
