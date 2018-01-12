#include <stdio.h>
#include <string.h>
int convert_one_digit(int n){

    int sum = n,count = 1;

    while(sum >= 10){

        sum = 0;

        while(n != 0){

            sum = sum + (n % 10);

            n = n/10;
        }

        if(sum % 9 == 0)
            count++;
    }

    return count;
}


int main()
{
    char str[1007];
    int i,sum,count;

    while(scanf("%s",str)){

        if(strcmp(str,"0") == 0)
            break;

        i = 0;
        sum = 0;

        while(str[i] != '\0'){
            sum = sum + (str[i] - 48);
            i++;
        }

        if(sum % 9 == 0){
            count = convert_one_digit(sum); //printf("%d",count);
            printf("%s is a multiple of 9 and has 9-degree %d.\n",str,count);
        }

        else
            printf("%s is not a multiple of 9.\n",str);
    }
    return 0;
}
