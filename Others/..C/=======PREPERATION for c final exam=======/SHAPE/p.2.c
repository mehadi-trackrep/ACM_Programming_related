#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i = n;i >= 1;i--){
        for(j = n-i+1;j > 1;j--)
            printf(" ");
        for(j = i;j >= 1;j--)
            printf("*");
        printf("\n");
    }
    for(i = 2;i <= n;i++){
        for(j = 1;j <= n-1;j++)
            printf(" ");
        for(j = i;j >= 1;j--)
            printf("*");
        printf("\n");
    }

    return 0;
}


