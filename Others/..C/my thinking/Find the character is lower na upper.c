#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch,ascii_value;

    ch = getchar();

    ascii_value = toascii(ch);

    if(ascii_value >= 65 && ascii_value <= 90)
        printf("Upper case");

    else printf("Lower case");


    return 0;
}
