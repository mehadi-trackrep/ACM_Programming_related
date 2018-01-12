#include <stdio.h>
int main()
{
   int i,n,*p;
   scanf("%d",&n);
   p = &n; /// address transfer
   printf("%d\n",*p);
   printf("%X",p);

    return 0;
}

