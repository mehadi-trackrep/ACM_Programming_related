#include <stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=n-i;j>=1;j--)
            printf(" ");
        for(k=0;k<=i;k++)
            printf("* ");
        printf("\n");
    }
    return 0;
}


