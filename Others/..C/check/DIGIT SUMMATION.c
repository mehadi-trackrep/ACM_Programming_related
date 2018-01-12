#include <stdio.h>
#include <string.h>
int main()
{
    char ara[1000];
    int i,j,len,n,sum = 0,ck;

    gets(ara);
    len = strlen(ara);

    for(i = 0;i < len;i++){
        if(ara[i] >= 65 && ara[i] <= 90)
            sum = sum + (ara[i] - 64);
        else if(ara[i] >= 97 && ara[i] <= 122)
            sum = sum + (ara[i] - 96);
        else ;
    }
    //printf("%d",sum);
    n = sum;

    while(n >= 10){
        sum = 0;
        while(n >= 1){

            sum = sum + (n % 10);
            //printf("%d\n",sum);
            n = n/10;
        }

        n = sum;
    }

    printf("%d",sum);

    return 0;
}



