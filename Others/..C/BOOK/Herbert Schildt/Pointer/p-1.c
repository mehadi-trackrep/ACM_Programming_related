#include <stdio.h>
int main()
{
    int *p,q;
    p = &q;
    q = 1;

    printf("%X\n",p);  /// address format specifier => %x / %X / %p

    (*p)++;

    printf("%d %p",q,p);

    return 0;
}
