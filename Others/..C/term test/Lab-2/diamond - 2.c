#include <stdio.h>
int main()
{
    int n,i,j,k = 1;

    scanf("%d",&n);

    for(i = 1;i <= n;i++){
        for(j = n-i;j >= 1;j--)
            printf(" ");
        for(j = k/2;j >= 1;j--)
            printf("%d",j+1);

        printf("1");                /// part n sesh ///

        for(j = 2;j <= k/2+1;j++)
            printf("%d",j);
        printf("\n");

        k += 2; //printf("%d ",k);
    }

    k = k - 4;


    for(i = 1;i <= n-1;i++){
        for(j = i;j >= 1;j--)
            printf(" ");
        for(j = k/2;j >= 1;j--)
            printf("%d",j+1);

        printf("1");                /// part n-1 sesh ///

        for(j = 2;j <= k/2+1;j++)
            printf("%d",j);
        printf("\n");

        k -= 2;
    }

    return 0;
}
