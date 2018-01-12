#include <stdio.h>

int main()
{
    int n,ara[20],i,j,min_index,temp;

    scanf("%d",&n);

    for(i = 0;i < n;i++){
        scanf("%d",&ara[i]);
    }

    for(i = 0;i < n;i++){
        min_index = i;
        for(j = i+1;j < n;j++){

            if(ara[j] < ara[min_index])
                min_index = j;
        }

        temp = ara[i];
        ara[i] = ara[min_index];
        ara[min_index] = temp;
    }

    for(i = 0;i < n;i++){
        printf("%d ",ara[i]);
    }

    printf("==> ");

    printf("min = %d ",ara[0]);
    printf("max = %d",ara[n-1]);

    return 0;
}
