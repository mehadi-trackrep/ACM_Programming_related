#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n == 1)
        printf("01\n");
    else if(n == 2)
        printf("11 01\n");
    else if(n == 3)
        printf("16 06 68\n");
    else if(n == 4)
        printf("16 06 68 88\n");
    else
        printf("Glupenky Pierre\n");

    return 0;
}
