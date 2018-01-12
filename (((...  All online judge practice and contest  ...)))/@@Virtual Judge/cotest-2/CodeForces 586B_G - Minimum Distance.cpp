    ///input:
/*

*/
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;            ///AC
int main()
{
    int i,j,sum,n,ara[55],k = 0;
    int row1[100],row2[100],colm[100];

    scanf("%d",&n);

    row1[0] = 0;
    row2[n-1] = 0;

    for(i = 1;i <= n-1;i++)
        scanf("%d",&row1[i]);

    for(i = 0;i < n-1;i++)
        scanf("%d",&row2[i]);

    for(i = 0;i <= n-1;i++)
        scanf("%d",&colm[i]);

    for(i = n-1;i >= 0;i--){
        sum = 0;
        for(j = i;j <= n-1;j++)
            sum += row2[j];
        for(j = i;j >= 0;j--){
            if(j == i)
                sum += colm[j];
            sum += row1[j];
        }
        ara[k++] = sum;

        //printf("=> %d \n",ara[k-1]);
    }

    sort(ara,ara+k);

    /*for(i = 0;i < k;i++)
        printf("%d ",ara[i]);*/

    printf("%d\n",ara[0]+ara[1]);

    return 0;
}
