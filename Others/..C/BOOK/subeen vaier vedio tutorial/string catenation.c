#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "abcdef";
    char b[] = "ghijkl";
    strcat(b,a);
    printf("%s",b);
    return 0;
}
