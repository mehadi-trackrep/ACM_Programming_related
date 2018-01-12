#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000],copy_str[10000];
    int len,i,j,k;
    for(i = 0; str[i]!='\n'; i++)
    {
        scanf("%c",&str[i]);
        if(str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
            i--;
    }
    str[i] = '\0';
    puts(str);
    return 0;
}

