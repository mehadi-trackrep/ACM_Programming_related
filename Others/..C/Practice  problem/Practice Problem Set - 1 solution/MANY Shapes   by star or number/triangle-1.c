#include <stdio.h>
int main()
{
    int n,i,j;
    while(scanf("%d",&n)==1){

        printf("\n");

        for(i=1;i<=n;i++){
            for(j=0;j<i;j++)
                printf("%d",i);
            printf("\n");
        }

        printf("\n\n");
    }

    return 0;
}
