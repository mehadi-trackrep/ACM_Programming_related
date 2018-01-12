#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,ara[n],temp;

    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(ara[i]>ara[j]){
                temp  = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }

       /* for(j=0;j<n;j++)
            printf("%d ",ara[j]);

        printf("\n */

    }

    for(j=0;j<n;j++)
            printf("%d ",ara[j]);

    return 0;
}
