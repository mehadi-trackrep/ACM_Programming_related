#include <stdio.h>
int main()
{
    int n,i,j,k = 1,l = 1,m;

    scanf("%d",&n);
    if(n > 5)
        m = n  - 5;
    for(i = n;i >= 1;i--){

        for(j = i-1;j >= 1;j--)
            printf("  ");

        for(j = l;j < k;j++)
            printf("%d ",j);

        printf("%d ",k);

        for(j = k-1;j >= l;j--)
            printf("%d ",j);

        printf("\n");

        l++;
        k += 2;
    }

    //for()

    return 0;
}

