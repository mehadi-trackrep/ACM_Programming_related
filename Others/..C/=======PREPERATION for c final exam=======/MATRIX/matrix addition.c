#include <stdio.h>
int main()
{

    int r,c,i,j,sum;
    int mat1[10][10],mat2[10][10];
                        /// addition er khettere row1 = row2, column1 = column2
    scanf("%d%d",&r,&c);

    for(i = 0;i < r;i++){          /// first matrix input
        for(j = 0;j < c;j++)
            scanf("%d",&mat1[i][j]);
    }

    printf("\n");

    for(i = 0;i < r;i++){       /// second matrix input
        for(j = 0;j < c;j++)
            scanf("%d",&mat2[i][j]);
    }

    printf("\n");

    for(i = 0;i < r;i++){       /// second matrix input
        for(j = 0;j < c;j++){
            sum = mat1[i][j] + mat2[i][j];
            printf("%d ",sum);
        }

        printf("\n");
    }

    return 0;
}

/// net copy

/*#include <stdio.h>

int main()
{
   int m, n, c, d, first[10][10], second[10][10], sum[10][10];

   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");

   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);

   printf("Enter the elements of second matrix\n");

   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
            scanf("%d", &second[c][d]);

   printf("Sum of entered matrices:-\n");

   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }

   return 0;
}*/


