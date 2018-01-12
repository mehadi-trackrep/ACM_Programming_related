#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,len,sum;
    char num[1002],ch;

    while(scanf("%s",num)){

        if(strcmp(num,"0") == 0)
            break;

        len = strlen(num);
        sum = 0;

        for(i = 0;i < len;i++){
            sum = sum*10 + (num[i] - 48);
            sum = sum % 17;
        }

        if(sum == 0)
            printf("1\n");
        else
            printf("0\n");
    }

    return 0;
}
