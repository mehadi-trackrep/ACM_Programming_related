#include <stdio.h>

int fact(int n); /// prototype ///

int main()
{
    int n;
    scanf("%d",&n);

    printf("%d",fact(n));

    return 0;
}

int fact(int n)
{
    int i,sum = 1;
    for(i=1;i<=n;i++)
        sum *=i;
    return sum;
}
