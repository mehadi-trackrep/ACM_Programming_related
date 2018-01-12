#include <stdio.h>
int main()
{
    int n,i,j,c = 1;
    scanf("%d",&n);

    printf("\n\n");

    for(i=1;i<=n;i++){
        for(j=n-i;j>=1;j--)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("%d ",c);
        printf("\n");
        c++;
    }

    return 0;
}


