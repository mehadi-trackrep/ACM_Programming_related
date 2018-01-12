#include <stdio.h>
int main()
{

    int r1,c1,r2,c2,i,j,k,sum;
    int mat1[10][10],mat2[10][10],multi[10][10];
                        /// multiplication er khettere 1st mat er col. == 2nd mat er row
    printf("Enter 1st mat er row and column : ");
    scanf("%d%d",&r1,&c1);
    printf("Enter 2nd mat er row and column : ");
    scanf("%d%d",&r2,&c2);

    if(c1 == r2){
        for(i = 0;i < r1;i++){          /// first matrix input
            for(j = 0;j < c1;j++)
                scanf("%d",&mat1[i][j]);
        }

        printf("\n");

        for(i = 0;i < r2;i++){       /// second matrix input
            for(j = 0;j < c2;j++)
                scanf("%d",&mat2[i][j]);
        }

        printf("\n");

        for(i = 0;i < r1;i++){
            for(j = 0;j < c2;j++){
                sum = 0;
                for(k = 0;k < r2;k++){
                    sum = sum + mat1[i][k]*mat2[k][j];
                }
                multi[i][j] = sum;
                //printf("%d ",sum);
            }
           // printf("\n");
        }

        for(i = 0;i < r1;i++){
            for(j = 0;j < c2;j++)
                printf("%d ",multi[i][j]);
            printf("\n");
        }
    }

    else
        printf("Not possible");



    return 0;
}
