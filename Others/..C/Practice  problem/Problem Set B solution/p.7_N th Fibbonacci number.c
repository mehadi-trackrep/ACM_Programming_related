#include <stdio.h>
int main()
{
    int n,nth_element,i;
    scanf("%d",&n);
    int ara[n];
    ara[0] = 0;
    ara[1] = 1;
    for(i=2;i<=n;i++){
        ara[i] = ara[i-1] + ara[i-2];
    }

    printf("%d",ara[n]);

    return 0;
}
