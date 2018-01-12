#include <stdio.h>
int main()
{
    int n,ara[50],i,j;

    scanf("%d",&n);

    for(i = 0;i < n;i++){
        scanf("%d",ara[i]);  /// & only string er khettere deoa lage na ///
    }



    for(i = 0;i < n;i++){
        printf("%d",ara[i]);
    }

    return 0;
}
