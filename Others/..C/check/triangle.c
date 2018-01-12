#include <stdio.h>
int main()
{
    int n,i,j,count = 0;
    while(scanf("%d",&n)==1){

      //  scanf("%d",&n);

        printf("\n");

        for(i=n;i>=1;i--){
            for(j=i-1;j>=1;j--){
                printf("*");
                count++;
            }

            printf("%d ",count);

            for(i=0;i<(n-count);i++)
                printf("%d ",n-count);

            printf("\n");
            count = 0;
        }

        printf("\n\n");
    }

    return 0;
}


