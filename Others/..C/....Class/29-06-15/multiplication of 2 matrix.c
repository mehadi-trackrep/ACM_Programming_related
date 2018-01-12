#include <stdio.h>
int main()
{
    int r1,c,c2,i,j;

    scanf("%d%d%d\n",&r1,&c,&c2);

    int a[r1][c],b[c][c2];  /// c1 = r2 = c ///

    for(i=0;i<r1;i++){
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\n\n");

    for(i=0;i<c;i++){
        for(j=0;j<c2;j++)
            scanf("%d",&b[i][j]);
    }

    printf("\n\n");

    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d ",a[i][j] * b[i][j]);
        }
        printf("\n");
    }

    return 0;

}                /// output copy kore paste ///

3 = r1
5 = c
7 = c2

1 2 3 4 5
5 4 3 2 1
6 7 8 9 1


1 2 3 4 5 6 7
7 6 5 4 3 2 1
1 3 5 7 9 2 4
4 2 9 7 5 3 1
5 7 8 9 4 2 5


1 4 9 16 25 30 28
35 24 15 8 3 12 7
6 21 40 63 9 5373352 64

Process returned 0 (0x0)   execution time : 169.990 s
Press any key to continue.

