#include <stdio.h>
#include <string.h>
int main()
{
    char ara[1000];
    int i,j,len,n,sum = 0;

    gets(ara);
    len = strlen(ara);

    for(i = 0;i < len;i++){
        if(ara[i] >= 65 && ara[i] <= 90)
            sum = sum + (ara[i] - 64);
        else if(ara[i] >= 97 && ara[i] <= 122)
            sum = sum + (ara[i] - 96);
        else ;
    }

    n = sum;
    sum = 0;

    while(sum >= 10){

        while(n > 1){

            sum = sum + (n % 10);
            n = n/10;
        }

        n = sum;
    }

    printf("%d",sum);

    return 0;
}


