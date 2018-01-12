#include <stdio.h>
#define EOF   '\n'
int main()
{

    int ara[100],i,sum = 0,count = 0;

    for(i = 0;EOF != ara[i];i++){
        scanf("%d",&ara[i]);
        count++;
    }
    for(i = 0;i <= count;i++)
        sum += ara[i];

    printf("%d",sum);

    return 0;
}

