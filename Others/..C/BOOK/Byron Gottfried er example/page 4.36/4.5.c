#include <stdio.h>
#include <string.h>
int main()
{
    int i,x = 1,y = 1,z = 1;

    i = ++x || ++y && ++z;

    printf("%d..%d..%d..%d",i,x,y,z);

    return 0;
}

