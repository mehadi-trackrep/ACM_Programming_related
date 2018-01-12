#include <stdio.h>
#include <string.h>
int main()
{
    char *str;
    int len = 5;
    gets(str);
    str[7] = '\0';
    puts(str);

    return 0;
}
