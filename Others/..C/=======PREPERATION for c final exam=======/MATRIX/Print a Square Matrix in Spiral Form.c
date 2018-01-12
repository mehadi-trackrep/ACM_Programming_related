#include <stdio.h>
int main()
{
    int i,j,k,N = 4,n = 4;
    int arr[10][10];

    for(i = 0;i < 4;i++){
        for(j = 0;j < 4;j++)
            scanf("%d",&arr[i][j]);
    }

    for(i=N-1, j=0; i>0; i--, j++)
    {
        //print top row
        for(k=j; k<i; k++) printf("%d ", arr[j][k]);  /// problem ace
        //print last column
        for(k=j; k<i; k++) printf("%d ", arr[k][i]);
        //print last row
        for(k=i; k>j; k--) printf("%d ", arr[i][k]);
        //print first column
        for(k=i; k>j; k--) printf("%d ", arr[k][j]);

    }
    //if odd size matrix print the middle value
     int middle = (n-1)/2;
     if (n% 2 == 1) printf("%d", arr[middle][middle]);
}
