#include <stdio.h>
#include <string.h>
int main()
{
    int *p,n,m = 5;
    p = &m;
    n = *p;
    printf("%d %d %d",m,n,*p);

    return 0;
}

