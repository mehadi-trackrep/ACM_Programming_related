#include <stdio.h>
int main()
{
    int *p,q = 6;
    p = &q;
    // or,
        //q = 5;

    printf("%X\n",p);  /// address format specifier => %x / %X / %p

    (*p)++;
    *p++;

    printf("%d %p\n",q,p);

   /* --(*p);
    *p--;

    printf("%d %p\n",q,p);*/ /// -> it's does not work

    return 0;
}

