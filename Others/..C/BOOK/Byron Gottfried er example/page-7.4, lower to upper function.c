#include <stdio.h>
char lower_to_upper(char c1);
int main()
{
    char c,ch;

    c = getchar();
    ch = lower_to_upper(c);

    printf("%c",ch);

    return 0;
}

char lower_to_upper(char c1){

    char c2;

    c2 = (c1 >= 97 && c1 <= 122) ? c1 - 32 : c1;

    return c2;

}

