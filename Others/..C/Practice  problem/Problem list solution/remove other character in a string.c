#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int len,i;

    gets(str);

    len = strlen(str);

    for(i = 0;i < len;i++){

        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) ;

        else str[i] = ' ';
    }

    puts(str);

    return 0;
}

