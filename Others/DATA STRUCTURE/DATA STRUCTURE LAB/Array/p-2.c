        ///input:
/*
10
4 1 3 6 2 1 2 3 9 2
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

