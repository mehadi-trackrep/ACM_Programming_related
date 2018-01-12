#include <stdio.h>
int main()
{
    char ch;

    ch = getchar();

    if( ch >= 'A' && ch <= 'Z')
        printf("Upper case");

    else printf("Lower case");


    return 0;
}

