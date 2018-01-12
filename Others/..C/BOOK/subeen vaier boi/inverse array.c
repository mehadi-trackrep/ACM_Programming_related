#include <stdio.h>
int main()
{
    int ara[] = {10,20,30,40,50,60,70,80,90,100};
    int temp,i;
    for(i=9;i>=3;i--){
        temp = ara[i];
        ara[i] = ara[9-i];
        ara[9-i] = temp;
    }
    for(i=0;i<=9;i++)
        printf("%d\n",ara[i]);

    return 0;
}
