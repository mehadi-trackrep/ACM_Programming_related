        /// input:
/*

4
1 3 6 10
2 5 9 13
4 8 12 15
7 11 14 16

*/
#include <stdio.h>      /// AC
int main()
{
    int pixel[105][105];
    int n,i,j,r,c;

    scanf("%d",&n);

    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++)
            scanf("%d",&pixel[i][j]);
    }


    for(i = 0;i < n;i++){
        c = 0;
        r = i;
        for(j = 0;j <= i;j++){
            printf("%d ",pixel[r][c]);
            c++;
            r--;
        }
    }

    for(i = 1;i < n;i++){
        c = i;
        r = n-1;
        for(j = i;j < n;j++){
            if(i == n-1 && j == n-1)
                printf("%d",pixel[r][c]);
            else
                printf("%d ",pixel[r][c]);
            c++;
            r--;
        }
    }

    return 0;
}
