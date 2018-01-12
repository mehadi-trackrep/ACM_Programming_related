#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
int main()
{
    char *ara;
    int i;
    for(i = 0;;i++){
        scanf("%c",&ara[i]);
        if(ara[i+1] == '\n')
            break;
    }
    printf("%s",ara);

    return 0;
}

