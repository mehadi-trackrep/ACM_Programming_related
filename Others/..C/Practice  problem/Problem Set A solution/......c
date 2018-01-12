#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",n);
    if(n&1==1)
        printf("Odd\n");
    else
        printf("Even\n");
    return 0; /// return 1/-1/...
}
