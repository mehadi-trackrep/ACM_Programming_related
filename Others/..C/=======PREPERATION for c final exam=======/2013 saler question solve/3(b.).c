#include <stdio.h>
int main()
{
    int a = 1,b[] = {2,5,7},*p1,*p2;
    p1 = &a;
    p2 = &b[0];
    printf("sum = %d\n",*p1 + *p2);//[1]);
    p1 = p2 - 1;

    return 0;
}

