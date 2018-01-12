        ///input:
/*
11
4 6 1 2 8 3 4 5 4 7 7

12
4 6 12 1 2 8 3 4 5 4 7 7
*/
#include <stdio.h>
int main()
{
    int n,num[100],i,j;

    scanf("%d",&n);

    for(i = 1;i <= n;i++)
        scanf("%d",&num[i]);

    printf("............................\n");

    for(i = 1;i < n;i++){
        if( (num[i] % 2 == 0) && (num[i+1] % 2 == 0) )
            printf("%d %d ",num[i],num[i+1]);
        else if( (num[i] % 2 != 0) && (num[i+1] % 2 != 0) )
            printf("%d %d ",num[i],num[i+1]);
    }



    return 0;
}
