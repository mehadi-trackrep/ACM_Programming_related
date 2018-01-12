#include <stdio.h>
#include <string.h>
int main()
{
    char *s = "hello word";

    int i = 7;

    printf("%.*s\n\n",i,s);

    printf("%d %s",i,s);

    return 0;
}

