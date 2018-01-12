#include <stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    k = 1;
    for(i = n/2 + 1;i >= 1;i--){
            for(j = i-1;j >= 1;j--)
                printf(" ");
            for(j = k;j >= 1;j--)
                printf("*");
            printf("\n");
            k += 2;
    }

    k = n-2;
    for(i = 1;i <= n/2;i++){
        for(j = 1;j <= i;j++)
            printf(" ");
        for(j = 1;j <= k;j++)
            printf("*");
        printf("\n");
        k -= 2;
    }

    return 0;
}
