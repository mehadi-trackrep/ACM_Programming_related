#include <stdio.h>
#include <string.h>
int main()
{
    int i,len;
    char str[100];
    gets(str);
    len = strlen(str);

    for(i = 0 ; i < len ; i++){
        if(str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;

    }

    printf("%s",str);


    return 0;
}
