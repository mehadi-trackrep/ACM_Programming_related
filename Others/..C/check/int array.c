#include <stdio.h>
#include <string.h>
int main()
{
    int ara[10],i = 0;

    ara[1] = 101;
    ara[5] = 2000;
    ara[2] = 200;
    ara[0] = 100;
    ara[3] = 300;
    ara[4] = 1000;

    while(i < 6){
        printf("%d ",ara[i]);
        i++;
    }

    return 0;
}

