#include <stdio.h>
int main()
{
    int *p,q;
    p = &q;

    scanf("%d",p);

    printf("%d %p\n",q,p);

    *p = *p + *p;

    printf("%d %p\n",*p,p);

    printf("%d %p",q,p);

    return 0;
}
