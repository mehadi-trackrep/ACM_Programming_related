#include <stdio.h>
int main()
{
    int n,ara[20],i,j,temp;

    scanf("%d",&n);

    for(i = 0;i < n;i++)
        scanf("%d",&ara[i]);

    for(i = 1;i < n;i++){
        for(j = i;j > 0;j--){
            if(ara[j] < ara[j-1]){
                temp = ara[j-1];
                ara[j-1] = ara[j];
                ara[j] = temp;
            }
           // for(i = 0;i < n;i++)
             //   printf("%d ",ara[i]);
        }
        //printf("\n");
    }

    for(i = 0;i < n;i++)
        printf("%d ",ara[i]);

    return 0;
}

