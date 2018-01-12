#include <stdio.h>
int main()
{
    int i,j,k,n;
    int ara[50];

    scanf("%d",&n);

    for(i = 0 ; i < n ; i++)
        scanf("%d",&ara[i]);

    for(i = 0 ; i < n ; i++){
        for(j = i+1 ; j < n ;j++){
            if(ara[i] > ara[j]){

                ara[i] = ara[i] ^ ara[j];
                ara[j] = ara[i] ^ ara[j];
                ara[i] = ara[i] ^ ara[j];

                for(k = 0 ; k < n ; k++)
                    printf("=> %d ",ara[k]); /// step by step operation
                printf("\n");
            }
        }
    }

    for(i = 0 ; i < n ; i++)
        printf("%d ",ara[i]);

    return 0;
}
