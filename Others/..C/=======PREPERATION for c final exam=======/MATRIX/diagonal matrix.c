#include <stdio.h>
int main()
{

    int r,c,i,j;
    int mat[10][10];

    scanf("%d%d",&r,&c);

    for(i = 0;i < r;i++){
        for(j = 0;j < c;j++){
            scanf("%d",&mat[i][j]);
            if(j == i)
                mat[i][j] = 0;
        }
    }

    printf("\n");

    for(i = 0;i < r;i++){
        for(j = 0;j < c;j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }

    return 0;
}

