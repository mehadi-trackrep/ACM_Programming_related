#include <stdio.h>
#include <string.h>
int main()
{

    int a = 10,b = 20,c = 30;
    int *p;
    *p = 2;
    a = c/(*p);
    b = c;

    printf("a=%d b=%d",a,b);     /// problem ace ///

    return 0;
}

