#include <stdio.h>
int main()
{
    int r,c,i,j; /// r = row and c = column ///

    scanf("%d%d",&r,&c);

    int a[r][c],b[r][c],ara[r][c];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }

    printf("\n\n");

    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);
    }

    printf("\n\n");

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
         ///   ara[i][j] = a[i][j] + b[i][j];
            printf("%d ",a[i][j] - b[i][j]);
        }
        printf("\n");
    }

    return 0;

}

