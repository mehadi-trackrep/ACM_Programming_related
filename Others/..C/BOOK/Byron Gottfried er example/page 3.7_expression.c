#include <stdio.h>
int main()
{
    int x = 5,a = 10;

    x = 50 + ++a;

    printf("x = %d and a = %d",x,a);

    return 0;
}
