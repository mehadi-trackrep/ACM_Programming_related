#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int a[n][2];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d%d ",i,j);
        printf("\n");
    }

    return 0;
}
