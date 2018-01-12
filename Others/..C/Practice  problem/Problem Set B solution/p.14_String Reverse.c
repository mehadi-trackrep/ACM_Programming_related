#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main()
{
   int len,i;
    char ara[1000];
    gets(ara);
    len = strlen(ara);
    for(i=len-1;i>=0;i--){
        if(ara[i]!=' ')
            printf("%c",ara[i]);
    }

    return 0;
}

