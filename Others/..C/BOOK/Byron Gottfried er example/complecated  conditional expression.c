#include <stdio.h>
#include <string.h>
int main()
{
    int c = 5,a = 5, b = 10;

    c += (a>0 && a<=10)? ++a : a/b ;

    printf("c = %d",c);

    return 0;
}

