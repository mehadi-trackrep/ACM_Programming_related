#include <stdio.h>
int main()
{
    int n,i,j;
    int c;
    scanf("%d",&n);

    printf("\n");

    for(i=1;i<=n;i++){
        for(j=n-i;j>=1;j--)
            printf(" ");
        c = i;
        for(j=0;j<i;j++)
            printf("%d",c++);
        printf("\n");
    }

    return 0;
}

